using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class disableFade : MonoBehaviour
{
    public GameObject camera;
    public GameObject hintForSpymon;

    public void disableThis()
    {
        
        this.gameObject.SetActive(false);
    }


    public void disbaleMusic()
    {
        if (camera != null)
        {
            camera.GetComponent<TransitionHandler>().playIslandDay();
        }

        if (hintForSpymon != null)
        {
            hintForSpymon.SetActive(false);
        }
    }
}
