using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class QuestSoundAndDestory : MonoBehaviour
{
    public AudioSource camera;
    public AudioSource canvas;
    public AudioClip newQuest;
    public AudioClip success;
    public AudioClip fail;
    public AudioClip islandTheme;
    public AudioClip finalScore;
    public AudioClip menuScore;
    public Animator bird;

    public void Start()
    { 
        if (QuestManager.instance.hasClearedQuestShootBirds == true)
        {
            Destroy(this.gameObject);

        }
        if (QuestManager.instance.hasClearedQuestBuildFire == true)
        {
            Destroy(this.gameObject);
        }
    }


    public void lowerSounds()
    {
        camera.volume = 0.5f;
    }

    public void higherSounds()
    {
        camera.volume = 1f;
    }

    public void playQuestSound()
    {
        canvas.PlayOneShot(newQuest, 1);
    }

    public void playSuccessSound()
    {
        canvas.PlayOneShot(success, 1);
    }

    public void OnDestroy()
    {
        Destroy(this.gameObject);
    }

    public void playFinalScoreSound()
    {
        if (this.gameObject.tag == "QuestShootBird")
        {
            if (this.gameObject.GetComponent<BirdSpawnHandler>().privacyReward == 150)
            {
                canvas.PlayOneShot(fail, 1);
            }
            else
            {
                canvas.PlayOneShot(finalScore, 1);
            }
        }
        else
        {
            canvas.PlayOneShot(finalScore, 1);
        }
    }

    public void playMenuScoreSound()
    {
        canvas.PlayOneShot(menuScore, 1);
    }

    public void returnToHouse()
    {
        bird.SetBool("return",true);
    }

    public void clearedQuestBuildFire()
    {
        QuestManager.instance.hasClearedQuestBuildFire = true;
    }

    public void clearedQuestShootBird()
    {
        QuestManager.instance.hasClearedQuestShootBirds = true;
    }
}