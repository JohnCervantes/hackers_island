using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

public class SecondCutscene : MonoBehaviour
{
    public GameObject parent;
    public AudioSource cameraAudio;
    public AudioSource canvasAudio;
    public AudioClip castleTheme;
    public GameObject brocoleetBubble;
    public GameObject tutrleBubble;
    public AudioClip brocoBeep;
    public AudioClip turtleBeep;
    public Text BrocoleeText;
    public Text  turtleText;
    public string[] brocoleetScript;
    public string[] turtletScript;
    public Animator turle;
    public Animator brocol33t;
    public GameObject fade;
    public GameObject platformer;
    public AudioClip night;
   
   

    void Awake()
    {
        cameraAudio.clip = castleTheme;
        cameraAudio.Play();
        brocoleetScript = new string[] { "♫ ♫ ♫", "What is going on?", "How dare you ruin such a beautiful night!","But. . .That's imposible! Bring her to me!", "MWUHAHAHA!" };
        turtletScript = new string[] { "Boss Brocol33t! \n \nBoss Brocol33t!" , "I'm afraid I've come to give you some bad news.", "Somebody already made it inside our castle! \n She's a superb hacker.", "Yes, boss brocol33t."};
    }


    void Start ()
    {
        StartCoroutine("loadDialogue");
    }

    IEnumerator loadDialogue()
    {
        if (QuestManager.instance.hasPlayedSecondCutscene == false)
        {
            QuestManager.instance.hasPlayedSecondCutscene = true;
            yield return new WaitForSeconds(2);
            StartCoroutine(textScroll(brocoleetScript[0]));
            yield return new WaitForSeconds(6);
            turle.SetTrigger("enter");
            StartCoroutine(textScroll1(turtletScript[0]));
            yield return new WaitForSeconds(5);
            turle.ResetTrigger("enter");
            turle.SetTrigger("right");
            yield return new WaitForSeconds(1);
            brocol33t.SetTrigger("left");
            yield return new WaitForSeconds(0.5f);
            StartCoroutine(textScroll(brocoleetScript[1]));
            yield return new WaitForSeconds(5);
            StartCoroutine(textScroll1(turtletScript[1]));
            yield return new WaitForSeconds(5);
            StartCoroutine(textScroll(brocoleetScript[2]));
            yield return new WaitForSeconds(5);
            StartCoroutine(textScroll1(turtletScript[2]));
            yield return new WaitForSeconds(6);
            StartCoroutine(textScroll(brocoleetScript[3]));
            yield return new WaitForSeconds(5);
            StartCoroutine(textScroll1(turtletScript[3]));
            yield return new WaitForSeconds(4);
            StartCoroutine(textScroll(brocoleetScript[4]));
            yield return new WaitForSeconds(3);
            fade.GetComponent<Animator>().SetTrigger("out");
            yield return new WaitForSeconds(2);
            platformer.SetActive(true);
            cameraAudio.clip = night;
            cameraAudio.Play();
            Destroy(parent.gameObject);
        }
        else
        {
            cameraAudio.clip = night;
            cameraAudio.Play();
            platformer.SetActive(true);
            Destroy(parent.gameObject);
        }
    }
	
	


    public IEnumerator textScroll(string lineOfText)
    {
        brocoleetBubble.gameObject.SetActive(true);
        int letter = 0;
        BrocoleeText.text = "";
        

        while (letter <= lineOfText.Length - 1)
        {
            if (letter != ' ')
            {
                canvasAudio.PlayOneShot(brocoBeep,0.5f);
            }
            BrocoleeText.text = BrocoleeText.text + lineOfText[letter];
            letter++;
            yield return new WaitForSeconds(0.04f);

        }
        yield return new WaitForSeconds(3);
        brocoleetBubble.gameObject.SetActive(false);

    }

    public IEnumerator textScroll1(string lineOfText)
    {
        tutrleBubble.gameObject.SetActive(true);
        int letter = 0;
        turtleText.text = "";


        while (letter <= lineOfText.Length - 1)
        {
            if (letter != ' ')
            {
                canvasAudio.PlayOneShot(brocoBeep,0.5f);
            }
            turtleText.text = turtleText.text + lineOfText[letter];
            letter++;
            yield return new WaitForSeconds(0.04f);

        }
        yield return new WaitForSeconds(3);
        tutrleBubble.gameObject.SetActive(false);

    }
}
