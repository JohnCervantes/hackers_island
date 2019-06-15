using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ForteQuestStateHandler : MonoBehaviour
{

    public Animator forteQuest;
    public GameObject main;
    public GameObject triggers;


    public void feedState()
    {
        forteQuest.SetBool("feed", true);
    }

    public void feedToDefaultState()
    {
        forteQuest.SetBool("feed", false);
    }

    public void gameState()
    {
        forteQuest.SetBool("game", true);
    }

    public void gameToDefaultState()
    {
        forteQuest.SetBool("game", false);
    }

    public void activateMain()
    {
        StartCoroutine("activate");
    }

    public IEnumerator activate()
    {
        yield return new WaitForSeconds(0.5f);
        main.SetActive(true);
        triggers.GetComponent<TriggersAndAnimation>().activateTriggersAndAnimation();
        this.gameObject.SetActive(false);
    }
}
