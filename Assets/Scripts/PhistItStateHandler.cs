using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PhistItStateHandler : MonoBehaviour
{

    public AudioSource cameraAudio;
    public AudioClip fishing;
    public GameObject parent;
    public GameObject main;
    public GameObject camera;
    private bool intro;
    public GameObject ok;


    public void play()
    {
        StartCoroutine("playPhish");
    }

    public IEnumerator playPhish()
    {
        cameraAudio.clip = fishing;
        cameraAudio.Play();
        camera.GetComponent<Animator>().SetBool("fadeIn", true);
        yield return new WaitForSeconds(0.8f);
        main.gameObject.SetActive(false);
        camera.GetComponent<Animator>().SetBool("fadeIn", false);
        StartCoroutine("playIntro");
    }

    IEnumerator playIntro()
    {
        intro = false;
        parent.GetComponent<Animator>().SetTrigger("introPhish");

        
        while (intro==false)
        {
           
            if (Input.GetKey(KeyCode.Return))
            {
               
                if (intro == false)
                {
                    camera.GetComponent<TransitionHandler>().playMouseClickPlay();
                }
                yield return new WaitForSeconds(2);
                parent.GetComponent<Animator>().SetTrigger("playPhish");
                yield return new WaitForSeconds(1);
                ok.gameObject.SetActive(true);
                intro = true;
            }
            yield return new WaitForSeconds(0.1f);
        }
        CancelInvoke("playIntro");
    }
}
