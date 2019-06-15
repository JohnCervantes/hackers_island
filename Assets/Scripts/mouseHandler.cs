using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;


public class mouseHandler : MonoBehaviour
{
    public Texture2D catchCursor;
    public Texture2D defaultCursor;
    public Texture2D pointCursor;
    public Texture2D talkCursor;
    public Texture2D EnterHouse;
    public Texture2D target;
    public Texture2D discover;
    public CursorMode curMode = CursorMode.Auto;
    public Vector2 hotSpot = Vector2.zero;
   

    void Start()
    {
        Cursor.SetCursor(defaultCursor, hotSpot, curMode);
    }


    public void clickCastle()
    {
        Cursor.SetCursor(pointCursor, hotSpot, curMode);
    }

    public void clickNpc()
    {
        Cursor.SetCursor(talkCursor, hotSpot, curMode);
    }

 




public void OnMouseEnter()
    {
        if (gameObject.tag == "House")
        {
            Cursor.SetCursor(EnterHouse, hotSpot, curMode);
        }
        else if (gameObject.tag == "ShootBird" || gameObject.tag == "Bird")
        {
            Cursor.SetCursor(target, hotSpot, curMode);
        }
        else if (gameObject.tag == "Finish")
        {
            Cursor.SetCursor(discover, hotSpot, curMode);
        }
        else if (gameObject.tag == "fish")
        {
            Cursor.SetCursor(talkCursor, hotSpot, curMode);
        }

       
    }

    public void OnMouseExit()
    {
        Cursor.SetCursor(defaultCursor, hotSpot, curMode);
    }

    public void OnMouseDown()
    {
        if (gameObject.tag == "ShootBird")
        {
            this.gameObject.GetComponent<Bird>().count++;
            this.gameObject.transform.GetChild(0).GetComponent<Animator>().SetBool("hit", true);


            if (this.gameObject.GetComponent<Bird>().count > 2 && this.gameObject.name == "GoldenBirdParent(Clone)")
            {
                BirdSpawnHandler.goldenBirdsCount++;
                this.gameObject.GetComponent<BoxCollider2D>().enabled = false;
                this.gameObject.transform.GetChild(0).gameObject.GetComponent<Animator>().SetBool("dead", true);
                this.gameObject.GetComponent<Rigidbody2D>().velocity = Vector3.zero;
                this.gameObject.GetComponent<Rigidbody2D>().gravityScale = 0.5f;
                BirdSpawnHandler.totalBirdsShot++;
                BirdSpawnHandler.totalBirdsShot++;
            }
            else if (this.gameObject.GetComponent<Bird>().count > 0 &&
                     this.gameObject.name == "RegularBirdParent(Clone)")
            {
                BirdSpawnHandler.regularBirdsCount++;
                this.gameObject.GetComponent<BoxCollider2D>().enabled = false;
                this.gameObject.transform.GetChild(0).gameObject.GetComponent<Animator>().SetBool("dead", true);
                this.gameObject.GetComponent<Rigidbody2D>().velocity = Vector3.zero;
                this.gameObject.GetComponent<Rigidbody2D>().gravityScale = 0.5f;
                BirdSpawnHandler.totalBirdsShot++;
            }
        }
    }

    public void OnPointerExit()
    {
        Cursor.SetCursor(defaultCursor, hotSpot, curMode);
    }

}