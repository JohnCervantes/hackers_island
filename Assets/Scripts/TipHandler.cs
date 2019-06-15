using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TipHandler : MonoBehaviour
{
    public static TipHandler instance;
    public bool hasPlayedInteractTip;
    public bool hasplayedSelectFoodTip;
    public bool hasPlayedDragFoodTip;

    void Awake()
    {
        if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(instance);
        }
        else
        {
            Destroy(this.gameObject);
        }
    }

    public void disableInteractTip()
    {
        hasPlayedInteractTip = true;
    }

    public void disableSelectFoodTip()
    {
        hasplayedSelectFoodTip = true;
    }

    public void disableDragFoodTip()
    {
        hasPlayedDragFoodTip = true;
    }
}