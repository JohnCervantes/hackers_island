using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SideWall : MonoBehaviour {

    void OnCollisionEnter2D(Collision2D coll)
    {

        if (coll.gameObject.tag == "bullet")
        {
            Destroy(coll.gameObject);
                
        }
    }
}
