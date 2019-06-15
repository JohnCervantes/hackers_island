using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TipManager : MonoBehaviour
{
    public GameObject tipBoxMain;
    public Image tipBox;
    public Animator anim;
    public GameObject tipIcon;


    // Use this for initialization   

    public void activateTip()
    {
        if (TipHandler.instance.hasPlayedInteractTip == false)
        {
            StopAllCoroutines();
            StartCoroutine("displayTheTip");
            TipHandler.instance.disableInteractTip();
        }
    }

    public void activateFeedTip()
    {
        if (TipHandler.instance.hasplayedSelectFoodTip == false)
        {
            StopAllCoroutines();
            StartCoroutine("displayFeedTip");
            TipHandler.instance.disableSelectFoodTip();
        }
    }

    public void activateDragFoodTip()
    {
        if (TipHandler.instance.hasPlayedDragFoodTip == false)
        {
            StopAllCoroutines();
            StartCoroutine("displayDragFoodTip");
            TipHandler.instance.disableDragFoodTip();
        }
    }


    public IEnumerator displayDragFoodTip()
    {
        yield return new WaitForSeconds(1);
        anim.SetBool("dragFoodTip", true);
        yield return new WaitForSeconds(5);
        anim.SetBool("dragFoodTip", false);
        anim.SetBool("fadeOut", true);
        yield return new WaitUntil(() => tipBox.color.a == 0);
        anim.SetBool("fadeOut", false);
    }

    public IEnumerator displayFeedTip()
    {
        yield return new WaitForSeconds(1);
        anim.SetBool("feedTip", true);
        yield return new WaitForSeconds(5);
        anim.SetBool("feedTip", false);
        anim.SetBool("fadeOut", true);
        yield return new WaitUntil(() => tipBox.color.a == 0);
        anim.SetBool("fadeOut", false);
    }

    public IEnumerator displayTheTip()
    {
        yield return new WaitForSeconds(1);
        anim.SetBool("activateTip", true);
        yield return new WaitForSeconds(5);
        anim.SetBool("activateTip", false);
        anim.SetBool("fadeOut", true);
        yield return new WaitUntil(() => tipBox.color.a == 0);
        anim.SetBool("fadeOut", false);
    }
}