using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Timer : MonoBehaviour
{
    public Animator parent;
    public bool timesUp;
    public GameObject main;
    public GameObject wifiNetwork;
    public GameObject cleared;
    public float length;
    public Text text;
    public Text addOrSubtract;
    public Text connections;
    public GameObject fadeout;
    public int multiplier;
    public AudioSource canvasAudio;
    public AudioClip failed;


    void Start()
    {
        resetTimer();
        StartCoroutine("startTimer");
    }


    public void startTime()
    {
        multiplier = QuestManager.instance.forteMultiplier;
        StartCoroutine("startTimer");
    }

    public IEnumerator startTimer()
    {
        resetTimer();
        yield return new WaitForSeconds(1);
        while (length >= 0)
        {
            text.text = length.ToString("F").Replace(".", ":");
            length = length - 0.01f;
            yield return new WaitForSeconds(0.01f);
        }
        timesUp = true;
        this.addOrSubtract.text = "";
        text.text = "0:00";
        wifiNetwork.GetComponent<WIFINetworkManager>().endTheGame();
        this.GetComponent<Animator>().Play("TimerTimesUp");
        QuestManager.instance.hasFinishedWifi = true;
        string k = " Total connections Secured: <size=70><b>" + wifiNetwork.GetComponent<WIFINetworkManager>().secured.ToString() + "</b></size>";
        connections.text = k;
    }

    public void resetTimer()
    {

        this.length = 30;
        timesUp = false;
        this.text.text = length.ToString("F").Replace(".", ":");
        wifiNetwork.GetComponent<WIFINetworkManager>().secured = 0;
    }

    public void addSecond()
    {
        if (timesUp == false)
        {
            length = length + 3;
            addOrSubtract.GetComponent<Text>().color = Color.green;
            addOrSubtract.text = "+3";
            this.GetComponent<Animator>().SetTrigger("change");
        }
    }

    public void Cleared()
    {
        StartCoroutine("PlayCleared");

    }

    IEnumerator PlayCleared()
    {
       
        cleared.GetComponent<AddScore>().score = (wifiNetwork.GetComponent<WIFINetworkManager>().secured * 10) * multiplier ;
        cleared.GetComponent<AddScore>().playCleared();
        if (wifiNetwork.GetComponent<WIFINetworkManager>().secured == 0)
        {
            yield return new WaitForSeconds(3);
            canvasAudio.PlayOneShot(failed,1);
            yield return new WaitForSeconds(4);
        }

        yield return new WaitForSeconds(7);
        main.gameObject.SetActive(true);
        fadeout.gameObject.SetActive(true);
        yield return new WaitForSeconds(0.5f);
        parent.SetTrigger("default");
        yield return new WaitForSeconds(4);
        fadeout.gameObject.SetActive(false);
        parent.ResetTrigger("play");
        parent.ResetTrigger("intro");

    }
    public void minusSecond()
    {
        if (timesUp == false)
        {
            length = length - 1;
            addOrSubtract.GetComponent<Text>().color = Color.white;
            addOrSubtract.text = "-1";
            this.GetComponent<Animator>().SetTrigger("change");
        }
    }
}