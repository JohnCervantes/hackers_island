using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DragFood : MonoBehaviour {


    Vector3 mousePos;

    void OnMouseDrag()
    {
        mousePos = Input.mousePosition;
        mousePos.z = 50f;
        this.transform.position = Camera.main.ScreenToWorldPoint(mousePos);
    }

	
}
