using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ObjectivesStatus : MonoBehaviour
{

    public Sprite notChecked;
    public Sprite check;
    public GameObject[] objectives;
    public int count;
    public int subCount;

    void Start()
    {
        this.gameObject.SetActive(false);
    }
    

    public void updateStatus()
    {

        count = 0;
        subCount = 0;

        if (QuestManager.instance.hasTakenTheQuestionaire)
        {
            objectives[0].GetComponent<Image>().sprite = check;
        }
        else
        {
            objectives[0].GetComponent<Image>().sprite = notChecked;
        }

        if (QuestManager.instance.hasClearedQuestBuildFire)
        {
            subCount++;
        }

        if (QuestManager.instance.hasClearedQuestShootBirds)
        {
            subCount++;
        }

        if (QuestManager.instance.hasFinishedPhish)
        {
            count++;
        }
        if (QuestManager.instance.hasFinishedSpymon)
        {
            count++;
        }
        if (QuestManager.instance.hasFinishedWifi)
        {
            count++;
        }

        if (count == 0)
        {
            objectives[1].transform.GetChild(0).GetComponent<Text>().text = "Beat all Forte's Games (0 of 3)";
        }
        else if (count == 1)
        {
            objectives[1].transform.GetChild(0).GetComponent<Text>().text = "Beat all Forte's Games (1 of 3)";
        }
        else if
            (count == 2)
        {
            objectives[1].transform.GetChild(0).GetComponent<Text>().text = "Beat all Forte's Games (2 of 3)";
        }
        else
        {
            objectives[1].transform.GetChild(0).GetComponent<Text>().text = "Beat all Forte's Games (3 of 3)";
            objectives[1].GetComponent<Image>().sprite = check;
        }


        if (subCount == 0)
        {
            objectives[2].transform.GetChild(0).GetComponent<Text>().text = "(Optional) Complete Sub-Quests (0 of 2)";
        }
        else if (subCount == 1)
        {
            objectives[2].transform.GetChild(0).GetComponent<Text>().text = "(Optional) Complete Sub-Quests (1 of 2)";
        }
        else
        {
            objectives[2].transform.GetChild(0).GetComponent<Text>().text = "(Optional) Complete Sub-Quests (2 of 2)";
            objectives[2].GetComponent<Image>().sprite = check;
        }

        
        QuestManager.instance.enterTheCasle();
    }


   

}
