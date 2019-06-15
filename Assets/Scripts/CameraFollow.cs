using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraFollow : MonoBehaviour
{

    public GameObject player;

    private float xMax;
    private float yMax;

    private float xMin;
    private float yMin;

    private Transform target;



    void Start ()
    {
        target = player.transform;
    }
	    

    void LateUpdate()
    {
        transform.position = new Vector3(Mathf.Clamp(target.position.x,xMin,xMax), Mathf.Clamp(target.position.y, yMin, yMax), transform.position.z);
    }
}
