using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class shuriken : MonoBehaviour
{

    public float speed;
    private Rigidbody2D rb;
    public Transform target;
    public Transform source;
    private Vector3 angle;
    private GameObject canvas;
    private Transform player;


    void Awake()
    {
        canvas = GameObject.Find("Canvas");
        source = GameObject.Find("source").transform;
        target = GameObject.Find("heart").transform;
        player = GameObject.Find("player").transform;
    }
    void Start()
    {
        this.transform.SetParent(canvas.transform);
        angle = target.position - source.position;
        rb = GetComponent<Rigidbody2D>();
    }

    void Update()
    {
        rb.velocity = (angle * speed);
    }

    void OnTriggerEnter2D(Collider2D col)
    {
        if (col.gameObject.tag == "player")
        {
            col.gameObject.GetComponent<PlayerMovement>().StartCoroutine("hit");
        }
    }
}

