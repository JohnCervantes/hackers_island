using System.Collections;
using System.Collections.Generic;
using Boo.Lang.Runtime.DynamicDispatching;
using UnityEngine;
using UnityEngine.UI;

public class PrivacyHandler : MonoBehaviour
{
    private static PrivacyHandler instance;
    public int privacyAmmount;
    public GameObject privacyRoot;
    public GameObject privacy;
    public GameObject privacyCount;
    private Text privacyCountText;


    private void Awake()
    {
        if (privacyRoot == null)
        {
            privacyRoot = GameObject.FindGameObjectWithTag("Privacy");
        }

        if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(instance);
        }
        else
        {
            Destroy(this.gameObject);
        }

        privacy = privacyRoot.transform.GetChild(0).gameObject;
        privacyCountText = privacyRoot.transform.GetChild(1).GetChild(0).GetComponent<Text>();
        privacyCountText.text = PlayerPrefs.GetInt("privacyAmmount").ToString();
        privacyAmmount = PlayerPrefs.GetInt("privacyAmmount");
    }

    public void addScore(int s)
    {
        StartCoroutine(score(s));
    }

    public IEnumerator score(int number)
    {
        int newTotal = privacyAmmount + number;
        while (privacyAmmount <= newTotal)
        {
            privacyCountText.text = (privacyAmmount++).ToString();
            yield return new WaitForSeconds(0.01f);
        }
        privacyAmmount = newTotal;
        PlayerPrefs.SetInt("privacyAmmount", privacyAmmount);
    }
}