using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using Kino;

public class openHouse : MonoBehaviour
{

    public Texture2D enterDoorCursor;
    public Animator cam;
    public Animator houseAnim;
    public Texture2D defaultCursor;
    public AudioSource canvas;
    public AudioClip  warning;
    public CursorMode curMode = CursorMode.Auto;
    public Vector2 hotSpot = Vector2.zero;


    void OnMouseEnter()
    {
        Cursor.SetCursor(enterDoorCursor, hotSpot, curMode);
    }

    IEnumerator openTheHouse()
    {
        houseAnim.SetBool("openHouse", true);
        cam.GetComponent<TransitionHandler>().StartCoroutine("openTheDoor");
        yield return new WaitForSeconds(2);  
            StartCoroutine(fadeOut());
    }


    IEnumerator fadeOut()
    {
      
        cam.SetBool("fadeOut", true);
        yield return new WaitUntil(() => cam.GetComponent<AnalogGlitch>()._scanLineJitter >= 0.95);
        SceneManager.LoadScene("Bar");
       
        Cursor.SetCursor(defaultCursor, hotSpot, curMode);
      
    }

    public void run()
    {
        if (QuestManager.instance.hasTakenTheQuestionaire == false)
        {
            QuestManager.instance.barClosed();
            StartCoroutine(openTheHouse());
        }
        else
        {
            canvas.PlayOneShot(warning,1);
        }
    }

}
