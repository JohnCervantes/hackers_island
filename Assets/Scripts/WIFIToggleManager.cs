using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Random = UnityEngine.Random;

public class WIFIToggleManager : MonoBehaviour
{
    public GameObject[] lockOrSignal;
    public Sprite locker;
    public Sprite signal;
    private Vector3[] origPos;
    private int someValue;
    private int count;
    public Sprite blank;


    void Awake()
    {
        origPos = new Vector3[4];
        foreach (GameObject x in lockOrSignal)
        {
            int percentage = Random.Range(1, 11);

            if (percentage <= 5)
            {
                x.GetComponent<Image>().sprite = signal;
            }
            else
            {
                x.GetComponent<Image>().sprite = locker;
            }

            origPos[count] = new Vector3(x.transform.position.x, x.transform.position.y, x.transform.position.z);
            count++;
        }
        count = 0;
    }

    // Use this for initialization
    public void assignPictures()
    {
        count = 0;      
        foreach (GameObject x in lockOrSignal)
        {
            int percentage = Random.Range(1, 11);

            if (percentage <= 5)
            {
                x.GetComponent<Image>().sprite = signal;
            }
            else
            {
                x.GetComponent<Image>().sprite = locker;
            }
            x.transform.position = origPos[count];
            x.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Static;
            count++;
        }
    }

    public IEnumerator enableRigidBody(int count)
    {
        someValue = Random.Range(0, 2) * 2 - 1;
        lockOrSignal[count].GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Dynamic;
        lockOrSignal[count].GetComponent<Rigidbody2D>().velocity = new Vector3(Convert.ToSingle(someValue), 1, -100);
        yield return new WaitForSeconds(1);
        lockOrSignal[count].transform.position = origPos[count];
        lockOrSignal[count].GetComponent<Image>().sprite = blank;
        lockOrSignal[count].GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Static;
    }
}