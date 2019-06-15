using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PrivacyStateHandler : MonoBehaviour
{


    public GameObject camera;
    public GameObject parent;
    private int privacyAmmount;
    private Text privacyCountText;


    void Awake()
    {
        privacyCountText = parent.transform.GetChild(1).GetChild(0).gameObject.GetComponent<Text>();
        privacyCountText.text = PlayerPrefs.GetInt("privacyAmmount").ToString();
        privacyAmmount = PlayerPrefs.GetInt("privacyAmmount");

    }

    public void stopPrivacy()
    {
        camera.GetComponent<TransitionHandler>().stopPrivacy();
    }

    public void playPrivacySound()
    {
        camera.GetComponent<TransitionHandler>().playPrivacy();
    }

    public void playPrivacyAddSound()
    {
        camera.GetComponent<TransitionHandler>().playPrivacyAdd();
    }

    public void playIntro2()
    {
        parent.GetComponent<Animator>().SetBool("intro",false);
        parent.GetComponent<Animator>().Play("PrivacyIntro");
    }

    public void playDefault()
    {
        parent.GetComponent<Animator>().Play("PrivacyDefault");
    }

    public void backToDefault()
    {
        parent.GetComponent<Animator>().SetBool("addDefault",false);
    }

    public void addScore(int s)
    {
        StartCoroutine(score(s));
    }

    public void reduceScore(int s)
    {
        StartCoroutine(rScore(s));
    }

    public IEnumerator score(int number)
    {
        int newTotal = privacyAmmount + number;
        while (privacyAmmount <= newTotal)
        {
            privacyAmmount = privacyAmmount + 3;
            privacyCountText.text = privacyAmmount.ToString();
            yield return null;
        }
        privacyCountText.text = newTotal.ToString();
        privacyAmmount = newTotal;
        PlayerPrefs.SetInt("privacyAmmount", privacyAmmount); 
    }


    public IEnumerator rScore(int number)
    {
            int newTotal = privacyAmmount - number;
            while (privacyAmmount >= newTotal)
            {
                privacyAmmount = privacyAmmount - 3;
                privacyCountText.text = privacyAmmount.ToString();
                yield return null;
            }
        privacyCountText.text = newTotal.ToString();
        privacyAmmount = newTotal;
        PlayerPrefs.SetInt("privacyAmmount", privacyAmmount);
    }

}
