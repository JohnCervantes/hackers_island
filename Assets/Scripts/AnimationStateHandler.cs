using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

public class AnimationStateHandler : MonoBehaviour {

    public Animator ameliaAnim;
    public GameObject amelia;
    public GameObject cam;
    public AudioSource source;
    public AudioClip clip;
    public AudioClip warning;
    public GameObject warningSign;
    public GameObject dialogueBox;
    public GameObject dialogueBoxManager;

	// Use this for initialization
	void awake () {
        warningSign.SetActive(false);
        dialogueBox.SetActive(false);
        amelia.SetActive(false);
        //
        Invoke("enableAmelia", 2f);

    }

    public void startBump()
    {
        StartCoroutine("bump");
    }
	
	IEnumerator bump()
    {
        cam.GetComponent<ScreenShake>().startShake();
        source.PlayOneShot(clip);
        yield return new WaitForSeconds(2);
        cam.GetComponent<ScreenShake>().stopShake();
    }

    public void enableAmelia()
    {
        amelia.SetActive(true);

    }    

    public void startWarning()
    {
        ameliaAnim.speed = 0.2f;
        source.PlayOneShot(warning);
        warningSign.SetActive(true);
        dialogueBox.SetActive(true);
    }
    

    public void endWarning()
    {
        warningSign.SetActive(false);
        dialogueBox.SetActive(false);
        ameliaAnim.speed = 1.5f;
    }

    public void setDefaultState()
    {

        StartCoroutine("defaultState");
    }

    IEnumerator defaultState()
    {
        ameliaAnim.SetBool("bump", false);
        yield return new WaitForSeconds(1);
        dialogueBox.SetActive(true);
        dialogueBoxManager.GetComponent<DialogueBoxManager>().beginDialogue();
    }

    public void setAngryState()
    {

        StartCoroutine("angryState");
    }

    IEnumerator angryState()
    {
        ameliaAnim.SetBool("angry", true);
        yield return new WaitForSeconds(1.5f);
        dialogueBox.SetActive(true);
        dialogueBoxManager.GetComponent<DialogueBoxManager>().beginDialogue();
    }
}
