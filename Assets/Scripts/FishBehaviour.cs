using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;
using Random = UnityEngine.Random;

public class FishBehaviour : MonoBehaviour
{
    public AudioClip miniSuccess;
    public AudioClip miniFail;
    public AudioSource source;
    public Sprite[] fishes;
    public Image fish;
    public Texture2D catchCursor;
    public Texture2D defaultCursor;
    public int turnt = 0;
    public CursorMode curMode = CursorMode.Auto;
    public Vector2 hotSpot = Vector2.zero;
    public Text UrlText;
    private string[] LegitUrls = { "https://paypal.com", "www.amazon.com/microwaves", "facebook.com/alderson", "https://twitter.com", "www.ebay.com/help", "www.google.com", "https://reddit.com/r/aww", "www.fbi.gov" };
    private string[] urlPool = { "https://paypal.com", "www.amazon.com/microwaves", "facebook.com/alderson", "https://twitter.com", "www.ebay.com/help", "www.google.com", "https://reddit.com/r/aww", "www.fbi.gov", "www.fbi.com", "http://bankofamerica.net", "http://12xc.se21x.bankofamerica.net", "www.yuotube.com", "http://wikipedia.inc", "http://yahoo.net", "http://instagram.gov", "www.microsoft.net" };
    public Transform child;
    public GameObject hint;
    private System.Random ran;
    private System.Random ranFish;
    private int power;
    private int num;
    private int rand;
    public GameObject fishSpawnHandler;


    void Awake()
    {
        if (fishSpawnHandler == null)
        {
            fishSpawnHandler = GameObject.FindGameObjectWithTag("phish");
        }
    }
    void OnMouseEnter()
    {
        Cursor.SetCursor(catchCursor, hotSpot, curMode);
        hint.gameObject.SetActive(true);
    }

    void OnMouseOver()
    {
        if (Input.GetKeyDown(KeyCode.Mouse0)) // left click
        {
            if (LegitUrls.Contains(UrlText.text))
            {
                source.PlayOneShot(miniSuccess, 1);
                this.GetComponent<CircleCollider2D>().enabled = false;
                fishSpawnHandler.GetComponent<FishSpawnHandler>().AddScore();
                Destroy(this.gameObject, 0.5f);
            }
            else
            {
                source.PlayOneShot(miniFail, 0.5f);
                this.GetComponent<CircleCollider2D>().enabled = false;
                Destroy(this.gameObject, 0.5f);
            }
            Cursor.SetCursor(defaultCursor, hotSpot, curMode);
        }
        else if (Input.GetKeyDown(KeyCode.Mouse1)) //right click
        {
            if (!LegitUrls.Contains(UrlText.text))
            {
                source.PlayOneShot(miniSuccess, 1);
                this.GetComponent<CircleCollider2D>().enabled = false;
                fishSpawnHandler.GetComponent<FishSpawnHandler>().AddScore();
                Destroy(this.gameObject, 0.5f);
            }
            else
            {
                source.PlayOneShot(miniFail, 0.5f);
                this.GetComponent<CircleCollider2D>().enabled = false;
                Destroy(this.gameObject, 0.5f);
            }
            Cursor.SetCursor(defaultCursor, hotSpot, curMode);

        }

    }

    void Update()
    {
        child.transform.rotation = Quaternion.Euler(0.0f, 0.0f, this.transform.parent.rotation.z * -1.0f);
    }

    void OnMouseExit()
    {
        Cursor.SetCursor(defaultCursor, hotSpot, curMode);
        hint.gameObject.SetActive(false);
    }

    void Start()
    {
        ran = new System.Random();
        power = ran.Next(0, urlPool.Length);

        ranFish = new System.Random();
        num = ranFish.Next(0, fishes.Length);

        fish.sprite = fishes[num];
        UrlText.text = urlPool[power];
        InvokeRepeating("goMove", 0, 6);
    }

    void goMove()
    {
        StartCoroutine("move");
    }


    IEnumerator move()
    {
        rand = Random.Range(-2, 3);
        this.GetComponent<Rigidbody2D>().velocity = Vector2.zero;

        if (rand >= 0)
        {
            while (turnt >= 0)
            {
                this.transform.eulerAngles = new Vector3(0, turnt = turnt - 4, 0);
                yield return new WaitForSeconds(0.01f);
            }
        }
        else
        {
            while (turnt <= 160)
            {
                this.transform.eulerAngles = new Vector3(0, turnt = turnt + 4, 0);
                yield return new WaitForSeconds(0.01f);
            }
        }


        this.GetComponent<Rigidbody2D>().velocity = new Vector3(rand, 0, this.transform.position.z);

        for (int i = 0; i < 2; i++)
        {
            this.transform.position = new Vector3(this.transform.position.x, this.transform.position.y + 0.1f, this.transform.position.z);
            yield return new WaitForSeconds(1f);
        }

        for (int i = 0; i < 2; i++)
        {
            this.transform.position = new Vector3(this.transform.position.x, this.transform.position.y - 0.1f, this.transform.position.z);
            yield return new WaitForSeconds(1f);
        }
    }
}