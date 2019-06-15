using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EatFood : MonoBehaviour
{

    public Animator heart;
    public Animator heart2;
    public Animator heart3;
    public GameObject heartStatus;


    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.tag == "Food")
        {
            Destroy(collision.gameObject);
            StartCoroutine("playHeart");
            QuestManager.instance.feedCount++;
            heartStatus.GetComponent<HeartMeter>().updateHeartStatus();
        }
    }

    IEnumerator playHeart()
    {
        heart.SetBool("isHeart",true);
        heart2.SetBool("isHeart", true);
        heart3.SetBool("isHeart", true);
        yield return new WaitForSeconds(1);
        heart.SetBool("isHeart", false);
        heart2.SetBool("isHeart", false);
        heart3.SetBool("isHeart", false);
    }

}
