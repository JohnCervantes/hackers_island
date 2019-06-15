using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BossKeyevents : MonoBehaviour {

    public GameObject parent;
    public Text text;
    public GameObject brocco1337;
    public Animator bossAnimator;
    public GameObject cam;
    


    public void disableText()
    {
        text.enabled = false;
    }

    public void enableText()
    {
        text.enabled = true;
    }

    public void enableBrocco1337()
    {
        brocco1337.SetActive(true);
    }

    public void disableBrocco1337()
    {
        brocco1337.SetActive(false);
    }

    public void speedUp()
    {
        bossAnimator.speed = 2;
    }

    public void changeText()
    {
        text.text = "I can hack EVERYTHING!";
    }

    public void playHeartbeat()
    {

        cam.GetComponent<TransitionHandler>().fadeInCutscene();
        Destroy(parent.gameObject);

    }
   
}
