using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class EndPortalFinal : MonoBehaviour {
    void OnTriggerStay2D(Collider2D other)
    {
        if (Input.GetKeyDown(KeyCode.W))
        {
            SceneManager.LoadScene("CastleStageFinal");
        }
    }
}
