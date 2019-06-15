using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BirdCollision : MonoBehaviour {

    public Texture2D target;
    public Texture2D defaultCur;
    public CursorMode curMode = CursorMode.Auto;
    public Vector2 hotSpot = Vector2.zero;

    // Use this for initialization
    void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    private void OnMouseEnter()
    {
        Cursor.SetCursor(target, hotSpot, curMode);
    }

    private void OnMouseExit()
    {
        Cursor.SetCursor(defaultCur, hotSpot, curMode);
    }
}
