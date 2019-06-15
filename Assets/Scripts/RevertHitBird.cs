using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RevertHitBird : MonoBehaviour {

    public AudioSource source;
    public AudioClip clip;
    bool ditHit;

    public void hitSound()
    {
        if (this.gameObject.name == "RegularBirdParent(Clone)" && ditHit == false)
        {
            source.PlayOneShot(clip, 1);
            ditHit = true;
        }
        else {
            source.PlayOneShot(clip, 1);
        }
        
    }

	public void revertHit()
    {
        this.GetComponent<Animator>().SetBool("hit", false);
    }
}
