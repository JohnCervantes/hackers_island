using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Random = UnityEngine.Random;

public class HpBarHandler : MonoBehaviour
{
    public float totalHp;
    public Image hpBar;
    public Text percentage;
    


    void Awake()
    {
        totalHp = 1;
        hpBar.fillAmount = totalHp;
        percentage.text = "100%";
    }

    public void refreshValues()
    {
        hpBar.fillAmount = 1;
        totalHp = 1;
        hpBar.color = new Color(0, 1f, 0.03f);
        percentage.text = "100%";
    }
    
    public void useUpdate()
    {
        StartCoroutine("update");
    }

    IEnumerator update()
    {
        float temp = Random.Range(0.15f, 0.25f);
        float count = 0;
        while (temp >= count)
        {
            if (totalHp - count <= 0)
            {
                percentage.text = "";
            }
            else
            {
                percentage.text = Convert.ToInt32(((totalHp - count) * 100)).ToString() + "%";
            }
            hpBar.fillAmount = totalHp - count;
            count = count + 0.01f;
            yield return null;
        }
        totalHp = totalHp - temp;

        updateHpColor();
    }

    public void useFirewall()
    {
        StartCoroutine("firewall");
    }

    IEnumerator firewall()
    {
        float temp = Random.Range(0.10f, 0.15f);
        float count = 0;
        while (temp >= count)
        {
            if (totalHp - count <= 0)
            {
                percentage.text = "";
            }
            else
            {
                percentage.text = Convert.ToInt32(((totalHp - count) * 100)).ToString() + "%";
            }
            hpBar.fillAmount = totalHp - count;
            count = count + 0.01f;
            yield return null;
        }
        totalHp = totalHp - temp;

        updateHpColor();
    }

    public void useChangePassword()
    {
        StartCoroutine("password");
    }

    IEnumerator password()
    {
        float temp = Random.Range(0.20f, 0.25f);
        float count = 0;
        while (temp >= count)
        {
            if (totalHp - count <= 0)
            {
                percentage.text = "";
            }
            else
            {
                percentage.text = Convert.ToInt32(((totalHp - count) * 100)).ToString() + "%";
            }
            hpBar.fillAmount = totalHp - count;
            count = count + 0.01f;
            yield return null;
        }

        totalHp = totalHp - temp;


        updateHpColor();
    }

    public void useReformat()
    {
        StartCoroutine("reformat");
    }

    IEnumerator reformat()
    {
        float temp = Random.Range(0.25f, 0.35f);
        float count = 0;
        while (temp >= count)
        {
            if (totalHp - count <= 0)
            {
                percentage.text = "";
            }
            else
            {
                percentage.text = Convert.ToInt32(((totalHp - count) * 100)).ToString() + "%";
            }
            hpBar.fillAmount = totalHp - count;
            count = count + 0.01f;
            yield return null;
        }
        totalHp = totalHp - temp;
        updateHpColor();
    }


    void updateHpColor()
    {
        if (totalHp <= 1 && totalHp > .5)
        {
            hpBar.color = new Color(0, 1f, 0.03f);
        }
        else if (totalHp <= .5 && totalHp >= .3)
        {
            hpBar.color = new Color(1f, 0.6f, 0);
        }
        else
        {
            hpBar.color = Color.red;
        }
    }
}