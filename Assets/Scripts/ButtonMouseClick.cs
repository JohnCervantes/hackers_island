using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonMouseClick : MonoBehaviour {

    public AudioSource source;
    public AudioClip clip;

	public void playClickSound()
    {
        source.PlayOneShot(clip);
    }
}
