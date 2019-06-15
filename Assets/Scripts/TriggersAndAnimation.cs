using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class TriggersAndAnimation : MonoBehaviour
{

    public GameObject sun;
    public GameObject campFire;
    public GameObject npcTip;
    public GameObject forte;
    public GameObject house;
    public GameObject castleSign;
    public GameObject bird;
    public GameObject objectiveButton;
    public GameObject privacy;


    void Start()
    {
        activateTriggersAndAnimation();
    }
   

    public void activateTriggersAndAnimation()
    {
       
        house.GetComponent<EventTrigger>().enabled = true;
        house.GetComponent<PolygonCollider2D>().enabled = true;
        castleSign.GetComponent<EventTrigger>().enabled = true;
        castleSign.GetComponent<Collider2D>().enabled = true;
        sun.GetComponent<BoxCollider2D>().enabled = true;
        bird.GetComponent<BoxCollider2D>().enabled = true;
        campFire.GetComponent<BoxCollider2D>().enabled = true;
        forte.GetComponent<BoxCollider2D>().enabled = true;
        sun.GetComponent<FlameManager>().startTheFire();
        npcTip.GetComponent<NpcDialogue>().activateNPCTips();
        objectiveButton.GetComponent<Button>().enabled = true;
        if (QuestManager.instance.hasPlayedFirstCutscene == true)
        {
            privacy.GetComponent<PrivacyStateHandler>().playDefault();
            objectiveButton.SetActive(true);
        }

    }

    public void disableTriggersAndAnimation()
    {
        house.GetComponent<EventTrigger>().enabled = false;
        house.GetComponent<PolygonCollider2D>().enabled = false;
        castleSign.GetComponent<EventTrigger>().enabled = false;
        castleSign.GetComponent<Collider2D>().enabled = false;
        sun.GetComponent<BoxCollider2D>().enabled = false;
        campFire.GetComponent<BoxCollider2D>().enabled = false;
        bird.GetComponent<BoxCollider2D>().enabled = false;
        forte.GetComponent<BoxCollider2D>().enabled = false;
        npcTip.GetComponent<NpcDialogue>().stopNPCTips();
        objectiveButton.GetComponent<Button>().enabled = false;
    }

    public void disableTriggersForCampFire()
    {
        bird.GetComponent<BoxCollider2D>().enabled = false;
        forte.GetComponent<BoxCollider2D>().enabled = false;
        npcTip.GetComponent<NpcDialogue>().stopNPCTips();
    }
}
