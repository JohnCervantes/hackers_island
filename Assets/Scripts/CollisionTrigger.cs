using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CollisionTrigger : MonoBehaviour {

    public GameObject Sun;
    public bool flag;
   


    // Use this for initialization
    void Start()
    {
        flag = false;
    }

    

    void OnTriggerEnter2D(Collider2D collision)
    {
        if (this.gameObject.tag == "CampFire" && collision.gameObject.tag == "FlameHover")
        {
            flag = true;   
        }
    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        flag = false;
    }
}
