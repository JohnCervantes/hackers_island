using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class sortLayer : MonoBehaviour {

    public string sortLayerName;

	// Use this for initialization
	void Start () {
        foreach(SpriteRenderer sr in GetComponentsInChildren<SpriteRenderer>())
        {
            sr.GetComponent<Renderer>().sortingLayerName = sortLayerName;
        }
		
	}
	
}
