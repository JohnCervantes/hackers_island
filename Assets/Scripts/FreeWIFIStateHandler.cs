using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class FreeWIFIStateHandler : MonoBehaviour
{
    public GameObject camera;
    private bool intro;
    public GameObject WiFiNetwork;
    public GameObject main;
    public GameObject timer;
    public AudioSource cameraAudio;
    public AudioClip wifiTheme;
    public GameObject hint;



    public void play()
    {
        StartCoroutine("playWIFI");
    }

    public void startTimer()
    {
        timer.GetComponent<Timer>().startTime();
    }


    public IEnumerator playWIFI()
    {
        camera.GetComponent<Animator>().SetBool("fadeIn", true);
        yield return new WaitForSeconds(0.8f);
        cameraAudio.clip = wifiTheme;
        cameraAudio.Play();
        main.gameObject.SetActive(false);
        camera.GetComponent<Animator>().SetBool("fadeIn", false);
        StartCoroutine("playIntro");
       
       
    }
    IEnumerator playIntro()
    {
       
        intro = false;
        this.GetComponent<Animator>().SetTrigger("intro");
        hint.gameObject.SetActive(true);

        while (intro==false)
        {
            if (Input.GetKey(KeyCode.Return))
            {
                if (intro == false)
                {
                    camera.GetComponent<TransitionHandler>().playMouseClickPlay();
                }
                yield return new WaitForSeconds(2);
                this.GetComponent<Animator>().SetTrigger("play");
                intro = true;
               
            }
            yield return new WaitForSeconds(0.1f);
        }

        StopCoroutine("playIntro");
    }

    public void setStoreName()
    {
        WiFiNetwork.GetComponent<WIFINetworkManager>().setStoresName();
    }
}