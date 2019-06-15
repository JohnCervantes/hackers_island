using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class LevelManager : MonoBehaviour {

    public Image black;
    public Animator anim;
    public GameObject fadein;
    public AudioClip musicClip;
    public AudioSource musicSource;
    public GameObject logo;
    public GameObject load;


    private void Start()
    {
        PlayerPrefs.SetInt("privacyAmmount",0);
        musicSource.clip = musicClip;
    }
    public IEnumerator scene()
    {
        
        fadeOut();
        yield return new WaitForSeconds(1.5f);
        SceneManager.LoadScene("IslandDay");
    }

    public void fadeOut()
    {
        anim.SetTrigger("fadeout");
    }

    public void fadeIn()
    {
        anim.SetTrigger("fadein");
       
    }

    public void playMusic()
    {
        musicSource.Play();
    }



    public void loadScene()
    {
       
        StartCoroutine("scene");
        
    }

    public void quitGame()
    {
        Application.Quit();
    }
}
