using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScreenShake : MonoBehaviour {
    public GameObject cam;
    Vector3 origPos;
    float shake;
   
	// Use this for initialization
	void Start () {
        origPos = cam.transform.position;
        shake = 20;
       
	}
	
	public void startShake()
    {
        InvokeRepeating("Shake", 0, 0.01f);
    }

    void Shake()
    {
        Vector3 camPos = cam.transform.position;
        float offSetX = Random.value * shake * 2 - shake;
        float offSetY = Random.value * shake * 2 - shake;
        camPos.x = offSetX;
        camPos.y = offSetY;
        cam.transform.position = camPos;
      
    }

    public void stopShake()
    {
        CancelInvoke("Shake");
        cam.transform.position = origPos;
    }
}
