using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Net.NetworkInformation;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class WIFINetworkManager : MonoBehaviour
{
    // Use this for initialization
    public GameObject[] wifi;

    public Sprite[] pics;
    public GameObject hint;

    public int slot1;
    public int slot2;
    public int slot3;
    public int slot4;
    public Image nameHolder;
    public string[] wifiNames;
    public int secured;
    private string correctAnswer;

    // public Animator button;
    public Animator button1;

    public Animator button2;
    public Animator button3;
    public Animator button4;
    public GameObject timer;

    // public GameObject hack;
    //public GameObject connect;

    IEnumerator reset()
    {
      
        slot1 = 0;
        slot2 = 0;
        slot3 = 0;
        slot4 = 0;
        yield return new WaitForSeconds(2);
        button1.SetTrigger("default");
        button2.SetTrigger("default");
        button3.SetTrigger("default");
        button4.SetTrigger("default");
        yield return new WaitForSeconds(1);
        StartCoroutine("setStoreName");
        button1.GetComponent<WIFIToggleManager>().assignPictures();
        button2.GetComponent<WIFIToggleManager>().assignPictures();
        button3.GetComponent<WIFIToggleManager>().assignPictures();
        button4.GetComponent<WIFIToggleManager>().assignPictures();

    }

    void Awake()
    {
        slot1 = 0;
        slot2 = 0;
        slot3 = 0;
        slot4 = 0;
        secured = 0;
    }

    public void setStoresName()
    {
        StartCoroutine("setStoreName");
    }

    public void endTheGame()
    {
        StartCoroutine("endGame");
    }

    IEnumerator endGame()
    {
        hint.gameObject.SetActive(false);
        StopCoroutine("setStoreName");
        button1.SetTrigger("default");
        button2.SetTrigger("default");
        button3.SetTrigger("default");
        button4.SetTrigger("default");
        slot1 = 0;
        slot2 = 0;
        slot3 = 0;
        slot4 = 0;
        yield return new WaitForSeconds(3);
        button1.GetComponent<WIFIToggleManager>().assignPictures();
        button2.GetComponent<WIFIToggleManager>().assignPictures();
        button3.GetComponent<WIFIToggleManager>().assignPictures();
        button4.GetComponent<WIFIToggleManager>().assignPictures();
    }


    IEnumerator setStoreName()
    {
        float time = 0;
        int counter = 0;
        int random = Random.Range(0, pics.Length);

        while (time < 3)
        {
            nameHolder.sprite = pics[counter];
            counter++;
            yield return new WaitForSeconds(0.01f);
            time = time + 0.1f;
            if (counter == pics.Length)
            {
                counter = 0;
            }
        }
        nameHolder.sprite = pics[random];

        yield return new WaitForSeconds(1);
        assignWifiNames();
        button1.SetTrigger("show");
        button2.SetTrigger("show");
        button3.SetTrigger("show");
        button4.SetTrigger("show");
    }


    void setWIFINames()
    {
        if (nameHolder.sprite.name == "Mcdonalds")
        {
            wifiNames = new string[]
            {
                " Mcdonald's FREE Wi-fi",
                " My Own Damn Internet",
                " Mcdonald's legit Wi-fi",
                " 1D-EW4-GXFfNETGEAR",
            };
            correctAnswer = " Mcdonald's FREE Wi-fi";
        }
        else if (nameHolder.sprite.name == "kfc")
        {
            wifiNames = new string[]
            {
                " KFC's Free Wi-fi",
                " Password is password",
                " connect to KCF's wi-fi",
                " KFC's test network",
            };
            correctAnswer = " KFC's Free Wi-fi";
        }
        else if (nameHolder.sprite.name == "starbucks")
        {
            wifiNames = new string[]
            {
                " Starbucks WiFi",
                " xFinityWiFi",
                " Big Brother WiFi",
                " Starbucks usb WiFi",
            };
            correctAnswer = " Starbucks WiFi";
        }

        else if (nameHolder.sprite.name == "walmart")
        {
            wifiNames = new string[]
            {
                " Walmartwifi",
                " FREE unlimited Wifi",
                " Deep State WiFi",
                " totally secured Wifi",
            };
            correctAnswer = " Walmartwifi";
        }
        else if (nameHolder.sprite.name == "chipotle")
        {
            wifiNames = new string[]
            {
                " Chipotle's Wi-fi",
                " +18 only WiFi",
                " NETGEAR-1G-XDAf2",
                " 192.1.464.435",
            };
            correctAnswer = " Chipotle's Wi-fi";
        }
        else if (nameHolder.sprite.name == "subway")
        {
            wifiNames = new string[]
            {
                " Subway Restaurant WiFi",
                " Subwhy?",
                " AT&T hotspot FREE",
                " Seems Legit Wi-Fi",
            };
            correctAnswer = " Subway Restaurant WiFi";
        }
        else if (nameHolder.sprite.name == "ihop")
        {
            wifiNames = new string[]
            {
                " IHOP WIFI",
                " 123.432.452-GEAR",
                " HOP WIFI",
                " 5MBPS SPEED WIFI",
            };
            correctAnswer = " IHOP WIFI";
        }
    }

    public void assignWifiNames()
    {
        int count = 0;
        setWIFINames();
        shuffle(wifiNames);

        foreach (GameObject networkName in wifi)
        {
            networkName.transform.GetChild(0).GetComponent<Text>().text = wifiNames[count];
            count++;
        }
    }

    public void shuffle(string[] k)
    {
        for (int i = 0; i < k.Length; i++)
        {
            int random = Random.Range(0, 4);
            string temp = k[i];
            k[i] = k[random];
            k[random] = temp;
        }
    }


    public void selectToggle()
    {
        foreach (GameObject toggle in wifi)
        {
            if (toggle.GetComponent<Toggle>().isOn)
            {
                Toggle x = toggle.gameObject.GetComponent<Toggle>();
                ColorBlock cb = x.colors;
                cb.normalColor = cb.highlightedColor;
                x.colors = cb;
            }
            else
            {
                Toggle x = toggle.gameObject.GetComponent<Toggle>();
                ColorBlock cb = x.colors;
                cb.normalColor = Color.black;
                x.colors = cb;
            }
        }
    }

    public void hack()
    {
        foreach (GameObject toggle in wifi)
        {
            if (toggle.GetComponent<Toggle>().isOn)
            {
                if (toggle.name == "Network1")
                {
                    if (toggle.GetComponent<WIFIToggleManager>().lockOrSignal[slot1].gameObject.GetComponent<Image>()
                            .sprite
                            .name == "lock")
                    {
                        StartCoroutine(toggle.GetComponent<WIFIToggleManager>().enableRigidBody(slot1));
                        slot1++;
                    }
                    else
                    {
                        StartCoroutine(wrongGuessHint(toggle.GetComponent<WIFIToggleManager>().lockOrSignal[slot1]
                            .gameObject.GetComponent<Image>()));
                    }

                    if (slot1 == 4)
                    {
                        if (toggle.transform.GetChild(0).GetComponent<Text>().text == correctAnswer)
                        {
                            timer.GetComponent<Timer>().addSecond();
                            button1.SetTrigger("connected");
                            StartCoroutine("reset");
                            secured++;
                        }
                        else
                        {
                            timer.GetComponent<Timer>().minusSecond();
                            button1.SetTrigger("hacked");
                        }
                    }
                }


                else if (toggle.name == "Network2")
                {
                    if (toggle.GetComponent<WIFIToggleManager>().lockOrSignal[slot2].gameObject.GetComponent<Image>()
                            .sprite
                            .name == "lock")
                    {
                        StartCoroutine(toggle.GetComponent<WIFIToggleManager>().enableRigidBody(slot2));
                        slot2++;
                    }
                    else
                    {
                        StartCoroutine(wrongGuessHint(toggle.GetComponent<WIFIToggleManager>().lockOrSignal[slot2]
                            .gameObject.GetComponent<Image>()));
                    }

                    if (slot2 == 4)
                    {
                        if (toggle.transform.GetChild(0).GetComponent<Text>().text == correctAnswer)
                        {
                            timer.GetComponent<Timer>().addSecond();
                            button2.SetTrigger("connected");
                            StartCoroutine("reset");
                            secured++;
                        }
                        else
                        {
                            timer.GetComponent<Timer>().minusSecond();
                            button2.SetTrigger("hacked");
                        }
                    }
                }

                else if (toggle.name == "Network3")
                {
                    if (toggle.GetComponent<WIFIToggleManager>().lockOrSignal[slot3].gameObject.GetComponent<Image>()
                            .sprite
                            .name == "lock")
                    {
                        StartCoroutine(toggle.GetComponent<WIFIToggleManager>().enableRigidBody(slot3));
                        slot3++;
                    }
                    else
                    {
                        StartCoroutine(wrongGuessHint(toggle.GetComponent<WIFIToggleManager>().lockOrSignal[slot3]
                            .gameObject.GetComponent<Image>()));
                    }

                    if (slot3 == 4)
                    {
                        if (toggle.transform.GetChild(0).GetComponent<Text>().text == correctAnswer)
                        {
                            timer.GetComponent<Timer>().addSecond();
                            button3.SetTrigger("connected");
                            StartCoroutine("reset");
                            secured++;
                        }
                        else
                        {
                            timer.GetComponent<Timer>().minusSecond();
                            button3.SetTrigger("hacked");
                        }
                    }
                }


                else if (toggle.name == "Network4")
                {
                    if (toggle.GetComponent<WIFIToggleManager>().lockOrSignal[slot4].gameObject.GetComponent<Image>()
                            .sprite
                            .name == "lock")
                    {
                        StartCoroutine(toggle.GetComponent<WIFIToggleManager>().enableRigidBody(slot4));
                        slot4++;
                    }
                    else
                    {
                        StartCoroutine(wrongGuessHint(toggle.GetComponent<WIFIToggleManager>().lockOrSignal[slot4]
                            .gameObject.GetComponent<Image>()));
                    }

                    if (slot4 == 4)
                    {
                        if (toggle.transform.GetChild(0).GetComponent<Text>().text == correctAnswer)
                        {
                            timer.GetComponent<Timer>().addSecond();
                            button4.SetTrigger("connected");
                            StartCoroutine("reset");
                            secured++;
                        }
                        else
                        {
                            timer.GetComponent<Timer>().minusSecond();
                            button4.SetTrigger("hacked");
                        }
                    }
                }
            }
        }
    }


    public void connect()
    {
        foreach (GameObject toggle in wifi)
        {
            if (toggle.GetComponent<Toggle>().isOn)
            {
                if (toggle.name == "Network1")
                {
                    if (toggle.GetComponent<WIFIToggleManager>().lockOrSignal[slot1].gameObject.GetComponent<Image>()
                            .sprite
                            .name == "signal")
                    {
                        StartCoroutine(toggle.GetComponent<WIFIToggleManager>().enableRigidBody(slot1));
                        slot1++;
                    }
                    else
                    {
                        StartCoroutine(wrongGuessHint(toggle.GetComponent<WIFIToggleManager>().lockOrSignal[slot1]
                            .gameObject.GetComponent<Image>()));
                    }

                    if (slot1 == 4)
                    {
                        if (toggle.transform.GetChild(0).GetComponent<Text>().text == correctAnswer)
                        {
                            timer.GetComponent<Timer>().addSecond();
                            button1.SetTrigger("connected");
                            StartCoroutine("reset");
                            secured++;
                        }
                        else
                        {
                            timer.GetComponent<Timer>().minusSecond();
                            button1.SetTrigger("hacked");
                        }
                    }
                }
                else if (toggle.name == "Network2")
                {
                    if (toggle.GetComponent<WIFIToggleManager>().lockOrSignal[slot2].gameObject.GetComponent<Image>()
                            .sprite
                            .name == "signal")
                    {
                        StartCoroutine(toggle.GetComponent<WIFIToggleManager>().enableRigidBody(slot2));
                        slot2++;
                    }
                    else
                    {
                        StartCoroutine(wrongGuessHint(toggle.GetComponent<WIFIToggleManager>().lockOrSignal[slot2]
                            .gameObject.GetComponent<Image>()));
                    }

                    if (slot2 == 4)
                    {
                        if (toggle.transform.GetChild(0).GetComponent<Text>().text == correctAnswer)
                        {
                            timer.GetComponent<Timer>().addSecond();
                            button2.SetTrigger("connected");
                            StartCoroutine("reset");
                            secured++;
                        }
                        else
                        {
                            timer.GetComponent<Timer>().minusSecond();
                            button2.SetTrigger("hacked");
                        }
                    }
                }

                else if (toggle.name == "Network3")
                {
                    if (toggle.GetComponent<WIFIToggleManager>().lockOrSignal[slot3].gameObject
                            .GetComponent<Image>()
                            .sprite
                            .name == "signal")
                    {
                        StartCoroutine(toggle.GetComponent<WIFIToggleManager>().enableRigidBody(slot3));
                        slot3++;
                    }
                    else
                    {
                        StartCoroutine(wrongGuessHint(toggle.GetComponent<WIFIToggleManager>().lockOrSignal[slot3]
                            .gameObject.GetComponent<Image>()));
                    }

                    if (slot3 == 4)
                    {
                        if (toggle.transform.GetChild(0).GetComponent<Text>().text == correctAnswer)
                        {
                            timer.GetComponent<Timer>().addSecond();
                            button3.SetTrigger("connected");
                            StartCoroutine("reset");
                            secured++;
                        }
                        else
                        {
                            timer.GetComponent<Timer>().minusSecond();
                            button3.SetTrigger("hacked");
                        }
                    }
                }

                else if (toggle.name == "Network4")
                {
                    if (toggle.GetComponent<WIFIToggleManager>().lockOrSignal[slot4].gameObject
                            .GetComponent<Image>()
                            .sprite
                            .name == "signal")
                    {
                        StartCoroutine(toggle.GetComponent<WIFIToggleManager>().enableRigidBody(slot4));
                        slot4++;
                    }
                    else
                    {
                        StartCoroutine(wrongGuessHint(toggle.GetComponent<WIFIToggleManager>()
                            .lockOrSignal[slot4]
                            .gameObject.GetComponent<Image>()));
                    }

                    if (slot4 == 4)
                    {
                        if (toggle.transform.GetChild(0).GetComponent<Text>().text == correctAnswer)
                        {
                            timer.GetComponent<Timer>().addSecond();
                            button4.SetTrigger("connected");
                            StartCoroutine("reset");
                            secured++;
                        }
                        else
                        {
                            timer.GetComponent<Timer>().minusSecond();
                            button4.SetTrigger("hacked");
                        }
                    }
                }
            }
        }
    }


    public IEnumerator wrongGuessHint(Image k)
    {
        Color x = k.color;
        x.a = 0;
        k.color = x;
        yield return new WaitForSeconds(0.1f);
        x.a = 1;
        k.color = x;
        yield return new WaitForSeconds(0.1f);
        x.a = 0;
        k.color = x;
        yield return new WaitForSeconds(0.1f);
        x.a = 1;
        k.color = x;
    }
}