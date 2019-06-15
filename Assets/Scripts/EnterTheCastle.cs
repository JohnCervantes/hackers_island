using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class EnterTheCastle : MonoBehaviour
{
    public AudioSource source;
    public AudioClip clip;
    public Animator castleAnim;
    Vector3 mousePos;
    public CursorMode curMode = CursorMode.Auto;
    public Vector2 hotSpot = Vector2.zero;
    public Texture2D defaultCursor;

    // Use this for initialization


    public void OnMouseDown()
    {
        if (QuestManager.instance.canEnterCastle == false)
        {
            StartCoroutine("showWarning");
        }
        else
        {
            Cursor.SetCursor(defaultCursor, hotSpot, curMode);
            SceneManager.LoadScene("CastleStage");
        }
    }


    IEnumerator showWarning()
    {
        castleAnim.SetBool("fadein", true);
        castleAnim.SetBool("fadeout", false);
        source.PlayOneShot(clip);
        yield return new WaitForSeconds(2);
        castleAnim.SetBool("fadein", false);
        yield return new WaitForSeconds(1);
        castleAnim.SetBool("fadeout", true);
    }
}