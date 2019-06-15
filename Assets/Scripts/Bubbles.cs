using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bubbles : MonoBehaviour
{
    private GameObject clone;
    public GameObject bubble;
    public GameObject canvas;

    void Start()
    {
        StartCoroutine("spawnBubbles");
    }
    IEnumerator spawnBubbles()
    {
        float time = 0;
        while (time < 50)
        {
            clone = Instantiate(bubble) as GameObject;
            clone.transform.SetParent(canvas.transform);
            clone.transform.localScale = bubble.transform.localScale;
            clone.transform.localPosition = new Vector3(-0.19994f, -187f, -50);
            clone.GetComponent<Rigidbody2D>().velocity = new Vector3(Random.Range(-1, 2), 0, 0);
            Destroy(clone, 2);
            yield return new WaitForSeconds(0.5f);
            time = time + 0.1f;
        }
    }
}
