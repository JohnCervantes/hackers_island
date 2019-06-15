using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MovementHint : MonoBehaviour
{

    
    public GameObject text;

    void OnTriggerEnter2D(Collider2D other)
    {
       
        text.gameObject.SetActive(true);


    }

    void OnTriggerExit2D(Collider2D other)
    {

       text.gameObject.SetActive(false);

    }
}
