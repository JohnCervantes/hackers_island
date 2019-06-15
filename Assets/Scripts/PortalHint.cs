using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class PortalHint : MonoBehaviour
{

    public GameObject hintBox;
    public GameObject loadLevel;

    void OnTriggerEnter2D(Collider2D other)
    {
        hintBox.gameObject.SetActive(true);

        
    }

    void OnTriggerStay2D(Collider2D other)
    {
        if (Input.GetKeyDown(KeyCode.W))
        {
            loadLevel.GetComponent<LevelLoader>().LoadLevel("IslandDay");
        }
    }

    void OnTriggerExit2D(Collider2D other)
    {
        hintBox.gameObject.SetActive(false);
    }

}
