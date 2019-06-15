using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class FishSpawnHandler : MonoBehaviour
{
    public GameObject camera;
    public GameObject quitButton;
    public GameObject main;
    public GameObject phishItParent;
    public GameObject cleared;
    GameObject clone;
    public GameObject fish;
    public GameObject parent;
    public GameObject hint;
    private float xPos;
    private float yPos;
    public Text scoreText;
    private int score;
    public GameObject fadeout;
    public int multipler;
  
    public void openPhishIt()
    {
        phishItParent.SetActive(true);
    }

    public void closePhishIt()
    {
        phishItParent.SetActive(false);
    }

    public void AddScore()
    {
        score++;
        scoreText.text = score.ToString();
    }

    public void quitPhishing()
    {
        StartCoroutine("stopPhishing");
    }

    IEnumerator stopPhishing()
    {
        multipler = QuestManager.instance.forteMultiplier;
        QuestManager.instance.hasFinishedPhish = true;
        var clones = GameObject.FindGameObjectsWithTag("fish");
        foreach (var clone in clones)
        {
            Destroy(clone);
        }
        CancelInvoke("cloneFish");
        cleared.GetComponent<AddScore>().score = (score * 5) * multipler ;
        yield return new WaitForSeconds(0.1f);
        cleared.GetComponent<AddScore>().playCleared();
        yield return new WaitForSeconds(7);
        quitButton.SetActive(false);
        fadeout.gameObject.SetActive(true);
        hint.gameObject.SetActive(false);
        yield return new WaitForSeconds(0.5f);
        parent.gameObject.GetComponent<Animator>().SetTrigger("defaultPhish");
        camera.GetComponent<TransitionHandler>().playIslandDay();
        main.gameObject.SetActive(true);
        this.score = 0;
        this.scoreText.text = score.ToString();
        parent.gameObject.GetComponent<Animator>().ResetTrigger("playPhish");

    }




    public void activatePhishIt()
    {
        quitButton.SetActive(true);
        StartCoroutine("fishSpawnRate");   
    }


    public IEnumerator fishSpawnRate()
    {
        hint.gameObject.SetActive(false);
        yield return new WaitForSeconds(1);
        InvokeRepeating("cloneFish", 0, 2);
    }

    public void cloneFish()
    {
        xPos =  Random.Range(-500f, 250f);
        yPos = Random.Range(-166f, 52f);
        clone = Instantiate(fish) as GameObject;
        clone.transform.SetParent(parent.transform);
        clone.transform.localScale = fish.transform.localScale;
        clone.transform.localPosition = new Vector3(xPos, yPos, -100);
        Destroy(clone, 15);
    }
}
