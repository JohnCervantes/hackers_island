using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HintHover : MonoBehaviour {

    public GameObject hint;

    void OnMouseEnter()
    {
        hint.gameObject.SetActive(true);
    }

    void OnMouseExit()
    {
        hint.gameObject.SetActive(false);
    }


}
