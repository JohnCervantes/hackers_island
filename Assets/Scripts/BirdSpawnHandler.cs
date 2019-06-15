using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BirdSpawnHandler : MonoBehaviour
{
    public GameObject goldBird;
    public GameObject regularBird;
    GameObject clone;
    public int percentage;
    public GameObject canvas;
    public GameObject hint;
    public Animator parent;
    public static int regularBirdsCount;
    public static int goldenBirdsCount;
    public static double totalBirdsShot;
    public Text regularBirdsCountText;
    public Text goldenBirdsCountText;
    public Text totalGrade;
    private double birdCount;
    public GameObject camera;
    public GameObject privacyRoot;
    public int privacyReward;
    public Text scoreText;
    public GameObject npcDialogue;
    public GameObject triggers;


    private void Awake()
    {
        totalBirdsShot = 0;
        birdCount = 0;
        regularBirdsCount = 0;
        goldenBirdsCount = 0;
        regularBirdsCountText.text = "";
        goldenBirdsCountText.text = "";
        totalGrade.text = "";
    }


    public void addScore()
    {
        privacyRoot.GetComponent<Animator>().SetBool("addDefault", true);
        privacyRoot.GetComponent<PrivacyStateHandler>().addScore(privacyReward);
    }

    public void activateBirdQuest()
    {
        StartCoroutine("birdSpawnRate");
    }

    public IEnumerator birdSpawnRate()
    {
        Destroy(hint.gameObject);
        yield return new WaitForSeconds(1);
        InvokeRepeating("birdQuest", 0, 1);
        yield return new WaitForSeconds(2);
        CancelInvoke("birdQuest");
        yield return new WaitForSeconds(3);


        InvokeRepeating("birdQuest", 0, 0.8f);
        yield return new WaitForSeconds(5);
        CancelInvoke("birdQuest");
        yield return new WaitForSeconds(3);


        InvokeRepeating("birdQuest", 0, 0.5f);
        yield return new WaitForSeconds(5);
        CancelInvoke("birdQuest");
        yield return new WaitForSeconds(3);

        InvokeRepeating("birdQuest", 0, 0.3f);
        yield return new WaitForSeconds(2);
        CancelInvoke("birdQuest");
        Destroy(goldBird);
        Destroy(regularBird);


        yield return new WaitForSeconds(3);
        QuestManager.instance.questShootBirdsCleared();

        yield return new WaitForSeconds(14);
        npcDialogue.GetComponent<NpcDialogue>().birdScipt = 100;
        triggers.GetComponent<TriggersAndAnimation>().activateTriggersAndAnimation();

    }

    /*while (spawnTheBirds)
        {
            StartCoroutine("stopSpawn");
            birdQuest();
            yield return new WaitForSeconds(0.3f);
        }*/


    public void birdQuest()
    {
        birdCount++;
        float xPos = Random.Range(-533.65f, 533.65f);

        percentage = Random.Range(0, 11);

        if (percentage == 1 || percentage == 2)
        {
            clone = Instantiate(goldBird) as GameObject;
            clone.transform.SetParent(canvas.transform);
            clone.transform.localScale = goldBird.transform.localScale;
            clone.transform.localPosition = new Vector3(xPos, -449.75f, -50);
            clone.GetComponent<Rigidbody2D>().velocity = new Vector3(0f, Random.Range(13, 17), -50);
            camera.GetComponent<TransitionHandler>().playSpawnChirpSound();
            Destroy(clone, 5);
        }

        else if (percentage > 2)
        {
            clone =
                Instantiate(regularBird, new Vector3(xPos, 449.75f, -50f),
                    regularBird.transform.rotation) as GameObject;
            clone.transform.SetParent(canvas.transform);
            clone.transform.localScale = regularBird.transform.localScale;
            clone.transform.localPosition = new Vector3(xPos, -449.75f, -50);
            clone.GetComponent<Rigidbody2D>().velocity = new Vector3(0f, Random.Range(20, 25), -50);
            camera.GetComponent<TransitionHandler>().playSpawnChirpSound();
            Destroy(clone, 4);
        }
    }

    public void activateHint()
    {
        hint.SetActive(true);
    }

    public void updateScores()
    { 
        regularBirdsCountText.text = regularBirdsCount.ToString();
        goldenBirdsCountText.text = goldenBirdsCount.ToString();
        if (((totalBirdsShot / birdCount) * 100) >= 80)
        {
            totalGrade.text = "A";
            privacyReward = 300;
            scoreText.text = "+300";
        }
        else if (((totalBirdsShot / birdCount) * 100) >= 70 && ((totalBirdsShot / birdCount) * 100) <= 79)
        {
            totalGrade.text = "B";
            privacyReward = 200;
            scoreText.text = "+200";
        }
        else
        {
            totalGrade.text = "C";
            privacyReward = 150;
            scoreText.text = "+150";
        }
    }
}


/* float xPos = Random.Range(-533.65f, 533.65f);


        if (bird.transform.localPosition.y < -449.75f)
        {
            xPos = Random.Range(-533.65f, 533.65f);
            bird.transform.localPosition = new Vector3(xPos, -449.75f, -50);

            bird.GetComponent<Rigidbody2D>().velocity = new Vector3(0f, 15f, -50);

        }*/