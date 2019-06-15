using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ActivateObjectives : MonoBehaviour
{
    private bool isActivated;
    public GameObject objectivesBoard;

    public void activateBoard()
    {
        if (isActivated == false)
        {
            objectivesBoard.gameObject.SetActive(true);
            objectivesBoard.GetComponent<ObjectivesStatus>().updateStatus();
            isActivated = true;
        }
        else
        {
            objectivesBoard.gameObject.SetActive(false);
            isActivated = false;
        }
    }
}
