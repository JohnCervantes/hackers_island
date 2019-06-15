using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BossFinal : MonoBehaviour
{

    public GameObject textBox;
    public AudioSource cameraSource;
    public GameObject playerTextBox;
    public GameObject ameliaTextBox;
    public Text textMain;
    public Text playerText;
    public Text ameliaText;
    public GameObject ready;
    public GameObject canvas;

    public AudioSource source;
    public AudioClip beep;
    public AudioClip beepFemale;
    private int health = 60;
    public Transform target;
    private Transform playerHeart;
    public GameObject shuriken;
    public Transform pos;
    public Animator brocoleetAnim;
    private bool restart;
    private bool deathScene;
    private bool introScene;
    public Animator cell;
    public GameObject gameover;
    private string name;
    public AudioClip victory;
    public AudioClip hitt;


    void Start()
    {
        StartCoroutine("intro");
        name = QuestManager.instance.playerName;
    }

    void OnTriggerEnter2D(Collider2D coll)
    {

        if (coll.gameObject.tag == "bullet")
        {
            Destroy(coll.gameObject);
            health--;
            StartCoroutine("hit");
            source.PlayOneShot(hitt);
        }
        else if (coll.gameObject.tag == "player")
        {
            coll.gameObject.GetComponent<PlayerMovement>().StartCoroutine("hit");
        }
    }
    //
    void Update()
    {
        if (health > 1)
        {
            if (introScene == true && restart == false)
            {
               StartCoroutine("spin");
            }
        }
        else if (health < 1)
        {
            if (deathScene == false)
            {
                StopCoroutine("spin");
                StartCoroutine("bye");
            }
        }    
    }




    void fire()
    {
        brocoleetAnim.SetTrigger("shuriken");
        GameObject clone = Instantiate(shuriken, pos.position, Quaternion.identity)  as GameObject;
        clone.transform.SetParent(canvas.transform);
        clone.transform.localPosition = pos.localPosition;
        brocoleetAnim.ResetTrigger("shuriken"); 
    }


    IEnumerator hit()
    {
        this.GetComponent<Image>().color = new Color32(255, 0, 0, 190);
        yield return new WaitForSeconds(0.1f);
        this.GetComponent<Image>().color = new Color32(255, 255, 255, 255);
        yield return new WaitForSeconds(0.1f);
        this.GetComponent<Image>().color = new Color32(255, 0, 0, 190);
        yield return new WaitForSeconds(0.1f);
        this.GetComponent<Image>().color = new Color32(255, 255, 255, 255);
    }


    IEnumerator intro()
    {
        if (introScene == false)
        {
            this.GetComponent<BoxCollider2D>().enabled = false;
            yield return new WaitForSeconds(2);
            ameliaTextBox.SetActive(true);
            yield return new WaitForSeconds(0.1f);
            //QuestManager.instance.playerName + "
            yield return StartCoroutine(textScrollAmelia("save me! " +  name));
            yield return new WaitForSeconds(1);
            ameliaTextBox.SetActive(false);
            playerTextBox.SetActive(true);
            yield return new WaitForSeconds(0.1f);
            yield return StartCoroutine(textScrollPlayer("Broccol33t, what did you do to Amelia?!"));
            yield return new WaitForSeconds(1.2f);
            playerTextBox.SetActive(false);
            textBox.SetActive(true);
            yield return new WaitForSeconds(0.1f);
            yield return StartCoroutine(textScroll("She managed to win the tournament, but she's mine now!"));
            yield return new WaitForSeconds(1.8f);
            textBox.SetActive(false);
            playerTextBox.SetActive(true);
            yield return new WaitForSeconds(0.1f);
            yield return StartCoroutine(textScrollPlayer("Don't worry Amelia. I'm going to save you!"));
            yield return new WaitForSeconds(0.8f);
            playerTextBox.SetActive(false);
          
            
            yield return new WaitForSeconds(1);
            ready.gameObject.SetActive(true);
            ready.transform.GetChild(0).GetComponent<Text>().text = "R E A D Y";
            yield return new WaitForSeconds(1);
            ready.transform.GetChild(0).GetComponent<Text>().text = "G O";
            yield return new WaitForSeconds(1);
            ready.gameObject.SetActive(false);
            this.GetComponent<BoxCollider2D>().enabled = true;

            introScene = true;

        }
    }


    IEnumerator spin()
    {
        restart = true;
        
        brocoleetAnim.SetTrigger("preSpin");
        yield return new WaitForSeconds(0.9f);
        brocoleetAnim.SetTrigger("spin");
        this.gameObject.GetComponent<Rigidbody2D>().AddForce(new Vector2(-2200, 0));
        yield return new WaitForSeconds(1.5f);
        this.gameObject.GetComponent<Rigidbody2D>().velocity = Vector3.zero;
        yield return new WaitForSeconds(1);
        this.gameObject.GetComponent<Rigidbody2D>().AddForce(new Vector2(2400, 0));
        yield return new WaitForSeconds(1.5f);
        this.gameObject.GetComponent<Rigidbody2D>().velocity = Vector3.zero;
        yield return new WaitForSeconds(1);
        this.gameObject.GetComponent<Rigidbody2D>().AddForce(new Vector2(-2600, 0));
        yield return new WaitForSeconds(1.5f);
        this.gameObject.GetComponent<Rigidbody2D>().velocity = Vector3.zero;
        yield return new WaitForSeconds(1);
        this.gameObject.GetComponent<Rigidbody2D>().AddForce(new Vector2(2800, 0));
        brocoleetAnim.ResetTrigger("spin");
        yield return new WaitForSeconds(1);
        this.gameObject.GetComponent<Rigidbody2D>().velocity = Vector3.zero;
        brocoleetAnim.SetTrigger("postSpin");
        yield return new WaitForSeconds(1);
        brocoleetAnim.SetTrigger("teleportUp");
        this.gameObject.transform.localPosition = new Vector3(532, 196, 0);
        yield return new WaitForSeconds(1);
        fire();
        yield return new WaitForSeconds(1);
        fire();
        yield return new WaitForSeconds(0.2f);
        fire();
        yield return new WaitForSeconds(0.2f);
        fire();
        yield return new WaitForSeconds(1);
        fire();
        yield return new WaitForSeconds(0.5f);
        fire();
        yield return new WaitForSeconds(0.5f);
        fire();
        yield return new WaitForSeconds(0.5f);
        fire();
        yield return new WaitForSeconds(0.5f);
        fire();
        yield return new WaitForSeconds(1);
        brocoleetAnim.SetTrigger("teleportUp");
        this.gameObject.transform.localPosition = new Vector3(445, -160, 0);
        restart = false;
    }


    IEnumerator bye()
    {
        deathScene = true;
        this.gameObject.GetComponent<Rigidbody2D>().velocity = Vector3.zero;
        this.gameObject.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Static;
        this.gameObject.GetComponent<BoxCollider2D>().enabled = false;
        brocoleetAnim.SetTrigger("death");
        cameraSource.clip = null;
        yield return new WaitForSeconds(2);
        textBox.SetActive(true);
        yield return StartCoroutine(textScroll("Not bad for a rookie!"));
        yield return new WaitForSeconds(1);
        yield return StartCoroutine(textScroll("I'll be back stronger than ever. See you next time!"));
        yield return new WaitForSeconds(2);
        textBox.SetActive(false);
        yield return new WaitForSeconds(1);
        textBox.SetActive(false);
        brocoleetAnim.ResetTrigger("death");
        brocoleetAnim.SetTrigger("teleportdeath");
        yield return new WaitForSeconds(1);
        this.GetComponent<Image>().color = new Color32(255, 255, 255, 0);
        textBox.SetActive(false);
        yield return new WaitForSeconds(1);
        cell.SetTrigger("open");
        cameraSource.clip = victory;
        cameraSource.Play();
        yield return new WaitForSeconds(6);
        ameliaTextBox.SetActive(true);
        yield return new WaitForSeconds(0.1f);
        yield return StartCoroutine(textScrollAmelia("Thank you so much for saving me!"));
        yield return new WaitForSeconds(1);
        yield return StartCoroutine(textScrollAmelia("<3"));
        yield return new WaitForSeconds(1);
        yield return StartCoroutine(textScrollAmelia("Let's head back to town and celebrate our victory!"));
        yield return new WaitForSeconds(1.5f);
        ameliaTextBox.SetActive(false);
        gameover.SetActive(true);
    }

    public IEnumerator textScroll(string lineOfText)
    {
       
        int letter = 0;
        textMain.text = "";
        while (letter <= lineOfText.Length - 1)
        {
            if (lineOfText[letter] != ' ')
            {
                source.PlayOneShot(beep, 0.5f);
            }
            textMain.text = textMain.text + lineOfText[letter];
            letter++;
            yield return new WaitForSeconds(0.05f);
        }
        yield return new WaitForSeconds(3);
        textMain.text = "";
    }

    public IEnumerator textScrollPlayer(string lineOfText)
    {

        int letter = 0;
        playerText.text = "";
        while (letter <= lineOfText.Length - 1)
        {
            if (lineOfText[letter] != ' ')
            {
                source.PlayOneShot(beep, 0.5f);
            }
            playerText.text = playerText.text + lineOfText[letter];
            letter++;
            yield return new WaitForSeconds(0.05f);
        }
        yield return new WaitForSeconds(3);
        playerText.text = "";
    }

    public IEnumerator textScrollAmelia(string lineOfText)
    {

        int letter = 0;
        ameliaText.text = "";
        while (letter <= lineOfText.Length - 1)
        {
            if (lineOfText[letter] != ' ')
            {
                source.PlayOneShot(beepFemale, 0.5f);
            }
            ameliaText.text = ameliaText.text + lineOfText[letter];
            letter++;
            yield return new WaitForSeconds(0.05f);
        }
        yield return new WaitForSeconds(3);
        ameliaText.text = "";
    }
}
