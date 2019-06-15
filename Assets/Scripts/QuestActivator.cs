using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class QuestActivator : MonoBehaviour
{
    public GameObject questManager;
    public GameObject camera;
    public GameObject bird;
    public GameObject campfire;


    public void OnMouseDown()
    {
        if (this.gameObject.name == "campFire" && campfire.tag == "Finish")
        {
            if (this.GetComponent<BoxCollider2D>().enabled == true)
            {
                this.gameObject.tag = "CampFire";

                if (QuestManager.instance.hasClearedQuestBuildFire == false)
                {
                    QuestManager.instance.activateQuestBuildFire();
                }
            }
        }
        else if(this.gameObject.name == "bird")
        {
            if (QuestManager.instance.hasClearedQuestShootBirds == false)
            {
                this.gameObject.GetComponent<Animator>().SetBool("fly", true);
            }
            else
            {
                StartCoroutine("playMusic");
            }
        }
    }

    public void activateShootBirdsQuest()
    {
        if (questManager != null)
        {
            questManager.GetComponent<QuestManager>().activateQuestShootBirds();
        }
        else
        {
            QuestManager.instance.activateQuestShootBirds();
        }
    }

    public void changeCampFireTag()
    {
        if (this.gameObject.name == "campFire")
        {
            this.gameObject.tag = "Finish";
        }
    }

    public IEnumerator playMusic()
    {
        camera.GetComponent<TransitionHandler>().playBirdSing();
        this.transform.GetChild(0).gameObject.SetActive(true);
        yield return new WaitForSeconds(2);
        this.transform.GetChild(0).gameObject.SetActive(false);
    }

    public void playGameplayMusic()
    {
        camera.GetComponent<TransitionHandler>().playGameplaySound();
    }

    public void playChirp()
    {
        camera.GetComponent<TransitionHandler>().playChirpSound();
    }

    public void returnToDefault()
    {
        camera.GetComponent<TransitionHandler>().playIslandDay();
        bird.GetComponent<Animator>().SetBool("fly",false);
    }


}