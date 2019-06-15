using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class EndPortal : MonoBehaviour
{

    public GameObject hint;

    void OnTriggerEnter2D(Collider2D other)
    { 
        hint.gameObject.SetActive(true);
    }


    void OnTriggerStay2D(Collider2D other)
    {
        if (Input.GetKeyDown(KeyCode.W))
        {
            SceneManager.LoadScene("CastleStageBridge");
        }
    }

    void OnTriggerExit2D(Collider2D other)
    {
        {
            hint.gameObject.SetActive(false);
        }
    }
}
