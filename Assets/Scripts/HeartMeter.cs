using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HeartMeter : MonoBehaviour
{
    public GameObject hint;
    public Animator heart;

    void OnMouseEnter()
    {
     hint.gameObject.SetActive(true);   
    }

    void OnMouseExit()
    {
        hint.gameObject.SetActive(false);
    }

    public void updateHeartStatus()
    {
        if (QuestManager.instance.feedCount == 0 || QuestManager.instance.feedCount == 1)
        {
            heart.SetTrigger("level0");
        }
        else if (QuestManager.instance.feedCount >=  2 && QuestManager.instance.feedCount < 7)
        {
            heart.ResetTrigger("level0");
            heart.SetTrigger("level1");
            QuestManager.instance.forteMultiplier = 2;
        }
        else if (QuestManager.instance.feedCount >= 7  && QuestManager.instance.feedCount < 12)
        {
            heart.ResetTrigger("level1");
            heart.SetTrigger("level2");
            QuestManager.instance.forteMultiplier = 3;
        }
        else if (QuestManager.instance.feedCount >= 12)
        {
            heart.ResetTrigger("level2");
            heart.SetTrigger("level3");
            QuestManager.instance.forteMultiplier = 4;
        }
    }
}
