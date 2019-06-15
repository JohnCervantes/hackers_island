using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class QuestManager : MonoBehaviour
{

    public static QuestManager instance;

    public GameObject triggers;
    public GameObject questBuildFire;
    public GameObject questShootBirds;

    public bool hasPlayedFirstCutscene = false;
    public bool hasPlayedSecondCutscene = false;
    public bool canEnterCastle = false;

    //objectives
    public bool hasTakenTheQuestionaire = false;
    public bool hasClearedQuestBuildFire = false;
    public bool hasClearedQuestShootBirds = false;
    public bool hasFinishedWifi = false;
    public bool hasFinishedPhish = false;
    public bool hasFinishedSpymon = false;

    public int feedCount = 0;
    public int forteMultiplier = 1;

    public string playerName;



    public void enterTheCasle()
    {
        if (hasTakenTheQuestionaire && hasFinishedWifi && hasFinishedSpymon && hasFinishedPhish)
        {
            canEnterCastle = true;
        }
    }


    private void Awake()
    {
        playerName = "";
        feedCount = 0;

        if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(instance);
        }
        else
        {
            if (instance != this)
            {
                Destroy(this.gameObject);
            }
        }
    }


    public void barClosed()
    {
        hasTakenTheQuestionaire = true;
    }
    public void activateQuestBuildFire()
    {
        if (hasClearedQuestBuildFire == false)
        {
            questAttacher();
            triggers.GetComponent<TriggersAndAnimation>().disableTriggersForCampFire();
            questBuildFire.GetComponent<Animator>().SetBool("activate", true);
        }
    }

    public void questBuildFireCleared()
    {
        if (hasClearedQuestBuildFire == false)
        {
            triggers.GetComponent<TriggersAndAnimation>().activateTriggersAndAnimation();
            questBuildFire.GetComponent<Animator>().SetBool("cleared", true);
            hasClearedQuestBuildFire = true;
        }
    }

    public void activateQuestShootBirds()
    {
        if (hasClearedQuestShootBirds == false)
        {
            questAttacher();
            triggers.GetComponent<TriggersAndAnimation>().disableTriggersAndAnimation();
            questShootBirds.GetComponent<Animator>().SetBool("activate", true);

        }
    }

    public void questShootBirdsCleared()
    {
        if (hasClearedQuestShootBirds == false)
        {
            questShootBirds.GetComponent<Animator>().SetBool("cleared", true);
            hasClearedQuestShootBirds = true;
        }
    }

    public void questAttacher()
    {
        triggers = GameObject.FindGameObjectWithTag("trigger");

        if (questShootBirds == null)
        {
            questShootBirds = GameObject.FindGameObjectWithTag("QuestShootBird");
        }
        if (questBuildFire == null)
        {
            questBuildFire = GameObject.FindGameObjectWithTag("QuestBuildFire");
        }
    }

    public void disableCutscene()
    {
        hasPlayedFirstCutscene = true;
    }
}
