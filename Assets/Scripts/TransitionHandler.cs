using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Kino;
using UnityEngine.SceneManagement;

public class TransitionHandler : MonoBehaviour {
    public Animator fade;
    public GameObject cutscene;
    public AudioSource source;
    public AudioSource canvas;
    public AudioClip glitchSound;
    public AudioClip villain;
    public AudioClip closeDoor;
    public AudioClip openDoor;
    public AudioClip bar;
    public AudioClip boom;
    public AudioClip islandDay;
    public GameObject cutseneManager;
    public AudioClip gameplay;
    public AudioClip chirp;
    public AudioClip spawnChirp;
    public AudioClip sing;
    public AudioClip privacy;
    public AudioClip privacyAdd;
    public AudioClip hover;
    public AudioClip mouseClick;
    public AudioClip mouseClickPlay;
    public AudioClip shortSucess;
    public AudioClip success;
    private bool glitching;


	// Use this for initialization
	void Start () {
        if (SceneManager.GetActiveScene().name == "IslandDay")
        {
            StartCoroutine("fadeIn");
            source.clip = islandDay;
            source.Play();
            cutscene.SetActive(false); 
        }
        else if (SceneManager.GetActiveScene().name == "Bar")
        {
            StartCoroutine("barSounds");
        }
    }

    IEnumerator fadeIn()
    {
        glitching = false;
        yield return new WaitForSeconds(0.1f);

        if (SceneManager.GetActiveScene().name == "IslandDay")
        {
            glitching = true;
            StartCoroutine("glitch");
        }
    }

    public IEnumerator fadeOut()
    {      
        fade.SetBool("fadeOut", true);
        yield return new WaitForSeconds(3);
        fade.SetBool("fadeOut", false);

    }

    IEnumerator glitch()
    {
        while (glitching)
        {
            System.Random random = new System.Random();
            int numb = random.Next(4, 11);
            this.gameObject.GetComponent<Animator>().SetBool("glitch", true);
            yield return new WaitForSeconds(0.5f);
            this.gameObject.GetComponent<Animator>().SetBool("glitch", false);
            yield return new WaitForSeconds(numb);
        }

    }

    public IEnumerator cutsceneGlitch()
    {
        source.clip = villain;
        source.Play();
        source.PlayOneShot(glitchSound);
        fade.SetBool("fadeIn", true);
        yield return new WaitForSeconds(1);
        fade.SetBool("fadeIn", false);
        this.GetComponent<AnalogGlitch>()._colorDrift = 0.30f;
        this.GetComponent<AnalogGlitch>()._horizontalShake = 0.20f;
        this.GetComponent<DigitalGlitch>()._intensity = 0.30f;
        yield return new WaitForSeconds(1);
        cutscene.SetActive(true);
        this.GetComponent<AnalogGlitch>()._colorDrift = 0;
        this.GetComponent<AnalogGlitch>()._horizontalShake = 0;
        this.GetComponent<DigitalGlitch>()._intensity = 0;
      

    }

    public void fadeInCutscene()
    {
        StartCoroutine("cutsceneFade");
    }

    IEnumerator cutsceneFade()
    {
      
        source.PlayOneShot(boom);
        yield return new WaitForSeconds(1);
        source.clip = islandDay;
        source.Play();
        StartCoroutine(cutseneManager.GetComponent<DialogueSceneManager>().textScroll(cutseneManager.GetComponent<DialogueSceneManager>().script[cutseneManager.GetComponent<DialogueSceneManager>().count]));
    }

    public void playIslandDay()
    {
        source.clip = islandDay;
        source.Play();
    }


    IEnumerator barSounds()
    {
        StartCoroutine("fadeIn");
        source.PlayOneShot(closeDoor);
        yield return new WaitForSeconds(2);
        source.clip = bar;
        source.Play();
    }

    public IEnumerator openTheDoor()
    {
        source.volume = 0.5f;
        canvas.PlayOneShot(closeDoor,1);
        yield return new WaitForSeconds(1);
        source.volume = 1;
    }

    public void playGameplaySound()
    {
        source.clip = gameplay;
        source.Play();
    }

    public void playChirpSound()
    {
       source.PlayOneShot(chirp,1);
    }

    public void playSpawnChirpSound()
    {
        source.PlayOneShot(spawnChirp , 1);
    }

    public void playBirdSing()
    {
        source.PlayOneShot(sing, 1);
    }

    public void playPrivacy()
    {
        canvas.PlayOneShot(privacy,1);
    }

    public void playPrivacyAdd()
    {
        canvas.PlayOneShot(privacyAdd, 1);
    }

    public void stopPrivacy()
    {
        canvas.Stop();
    }

    public void playHover()
    {
        canvas.PlayOneShot(hover);
    }

    public void playMouseClick()
    {
        canvas.PlayOneShot(mouseClick);
    }

    public void playMouseClickPlay()
    {
        canvas.PlayOneShot(mouseClickPlay);
    }

    public void playShortSucess()
    {
        canvas.PlayOneShot(shortSucess);
    }

    public void playSuccessSound()
    {
        canvas.PlayOneShot(success, 1);
    }
}
