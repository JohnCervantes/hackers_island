using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ForteQuest : MonoBehaviour
{

    public GameObject forteQuest;
    public GameObject main;
    public Texture2D talkCursor;
    public Texture2D defaultCursor;
    public CursorMode curMode = CursorMode.Auto;
    public Vector2 hotSpot = Vector2.zero;
    public GameObject npc;
    public GameObject heart;

    public void OnMouseDown()
    {
        npc.GetComponent<NpcDialogue>().stopNPCTips();
        Cursor.SetCursor(defaultCursor, hotSpot, curMode);
        forteQuest.SetActive(true);
        heart.GetComponent<HeartMeter>().updateHeartStatus();
        main.gameObject.SetActive(false);
    }

    public void OnMouseEnter()
    {
        Cursor.SetCursor(talkCursor, hotSpot, curMode);
    }

    public void OnMouseExit()
    {
        Cursor.SetCursor(defaultCursor, hotSpot, curMode);
    }
}
