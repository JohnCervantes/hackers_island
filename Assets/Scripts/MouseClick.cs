using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MouseClick : MonoBehaviour {

    public AudioSource source;
    public AudioClip clip;

	// Use this for initialization
	void Start () {
        source.clip = clip;
	}

    public void mouseClicked()
    {
        source.Play();
    }
}
