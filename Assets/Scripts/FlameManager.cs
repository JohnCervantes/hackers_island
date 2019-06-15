using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FlameManager : MonoBehaviour {

    public Animator campFire;
    public GameObject campFireObject;
    public int count;
    private string[] animationState = new string[3];
    public GameObject flame;
    public int countFlame;
    Vector3 mousePos;
    public Texture2D dropCursor;
    public Texture2D defaultCursor;
    public CursorMode curMode = CursorMode.Auto;
    public Vector2 hotSpot = Vector2.zero;
    public AudioSource dragAndDropSource;
    public AudioClip drag;
    public AudioClip drop;
    bool alreadyPlayed;
    bool reachedLastAnimation;
    public GameObject npcDialogue;


    void Awake()
    {
        flame.gameObject.SetActive(false);
        reachedLastAnimation = false;
        alreadyPlayed = false;
        count = 0;
        set();
    }

    public void startTheFire()
    {
        if (QuestManager.instance.hasClearedQuestBuildFire == false)
        {
            InvokeRepeating("changeAnimation", 10, 10);
        }
        else
        {
            CancelInvoke("changeAnimation");
            campFire.SetBool("isCleared",true);
        }
    }
	
	

    public void OnMouseDrag()
    {
        if (!alreadyPlayed)
        {
            dragAndDropSource.PlayOneShot(drag);
            alreadyPlayed = true;
        }
        flame.gameObject.SetActive(true);
        flame.gameObject.tag = "FlameHover";
        mousePos = Input.mousePosition;
        mousePos.z = 10f;
        flame.transform.position = Camera.main.ScreenToWorldPoint(mousePos);
        Cursor.SetCursor(dropCursor, hotSpot, curMode);

    }

   

    public void OnMouseUp()
    {
        if (count == 3)
        {
            reachedLastAnimation = true;
        }
        alreadyPlayed = false;
        dragAndDropSource.PlayOneShot(drop);
        if (campFire.GetComponent<CollisionTrigger>().flag)
        {

            Cursor.SetCursor(defaultCursor, hotSpot, curMode);
            countFlame++;
            if (countFlame == 2)
            {
                countFlame = 0;
                if (count >= 1)
                {
                    if (reachedLastAnimation && count == 1)
                    {
                        npcDialogue.GetComponent<NpcDialogue>().fireScript = 101;
                        QuestManager.instance.questBuildFireCleared();  
                        startTheFire();
                    }
                    else
                    {
                        dragAndDropSource.PlayOneShot(drop);
                        count--;
                        campFire.SetBool(animationState[count], false);
                    }
                }

            }

            else
            {
                Cursor.SetCursor(defaultCursor, hotSpot, curMode);

            }

            flame.gameObject.SetActive(false);
        }
        else
        {
            flame.gameObject.SetActive(false);
            Cursor.SetCursor(defaultCursor, hotSpot, curMode);
        }

    }

    


        void set()
    {
        animationState[0] = "isCampFireWeak";
        animationState[1] = "isCampFireDead";
        animationState[2] = "isCampFireJustWood";
    }

    void changeAnimation()
    {
        if (count < animationState.Length)
        {
            campFire.SetBool(animationState[count], true);
            count++;
        }

    }


}



