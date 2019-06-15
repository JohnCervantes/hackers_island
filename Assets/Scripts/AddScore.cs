using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class AddScore : MonoBehaviour
{
    public GameObject privacyRoot;
    public Text scoreText;
    public int score;

    public void addScore()
    {
        if (this.gameObject.name== "QuestBuildFire") 
        {
            privacyRoot.GetComponent<Animator>().SetBool("addDefault", true);
            privacyRoot.GetComponent<PrivacyStateHandler>().addScore(250);
        }
        privacyRoot.GetComponent<Animator>().SetBool("addDefault", true);
        privacyRoot.GetComponent<PrivacyStateHandler>().addScore(score);
    }

    public void updateValues()
    {
        scoreText.text = "+" + score.ToString();
    }

    public void playCleared()
    {
       StartCoroutine("clear");
    }

    IEnumerator clear()
    {
        this.GetComponent<Animator>().SetTrigger("success");
        yield return new WaitForSeconds(7);
        this.GetComponent<Animator>().SetTrigger("reset");
    }

   

}