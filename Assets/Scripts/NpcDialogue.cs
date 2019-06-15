using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Xml;

public class NpcDialogue : MonoBehaviour
{
    public GameObject leftBubble;
    public GameObject rightBubble;
    public Text leftBubbleText;
    public Text rightBubbleText;
    public Image leftBubbleBlack;
    public Image rightBubbleBlack;
    public Animator leftBubbleAnim;
    public Animator rightBubbleAnim;
    int Textcount;
    string[] script;
    private int random;
    public int birdScipt;
    public int fireScript;
    private int lastNumber;
    public TextAsset xml;
    //

    void Awake()
    {
        
        birdScipt = 0;
        fireScript = 0;
        leftBubble.SetActive(false);
        rightBubble.SetActive(false);
        leftBubbleText.GetComponent<Text>().enabled = false;
        rightBubbleText.GetComponent<Text>().enabled = false;
    }

    public void activateNPCTips()
    {
       InvokeRepeating("repeat",0,20);
    }

    void repeat()
    {
        loadNpcDialogue();
        StartCoroutine(textScroll(script));
    }


    public void stopNPCTips()
    {
        leftBubble.SetActive(false);
        rightBubble.SetActive(false);
        leftBubbleText.GetComponent<Text>().enabled = false;
        rightBubbleText.GetComponent<Text>().enabled = false;
        StopAllCoroutines();
        CancelInvoke();
    }

 
    void loadNpcDialogue()
    {
        if (birdScipt == 100)
        {
            random = birdScipt;
            birdScipt = 0;
        }
        else if (fireScript == 101)
        {
            random = fireScript;
            fireScript = 0;
        }
        else
        {
            random = Random.Range(1, 4);         
        }

        while (random == lastNumber)
        {
            random = Random.Range(1, 4);
        }

        lastNumber = random;

        XmlDocument xmlDoc = new XmlDocument();
        xmlDoc.LoadXml(xml.text);
        foreach (XmlNode node in xmlDoc.GetElementsByTagName("NpcDialogue"))
        {

            if (node["NpcDialogueNumber"].InnerText == random.ToString())
            {
                script = new string[node["Texts"].ChildNodes.Count];


                for (int i = 0; i < node["Texts"].ChildNodes.Count; i++)
                {
                    script[i] = node["Texts"].ChildNodes[i].InnerText;
                }

            }
        }
    }

  

    public IEnumerator textScroll(string[] lineOfText)
    {

        int letter = 0;
        leftBubbleText.text = "";
        rightBubbleText.text = "";
        int i = 0;

        yield return new WaitForSeconds(3);


        while (i < script.Length)
        {

            if (i % 2 == 0)
            {
                leftBubble.SetActive(true);
                leftBubbleAnim.SetTrigger("fadein");
                yield return new WaitUntil(() => leftBubbleBlack.color.a == 1);
                leftBubbleText.GetComponent<Text>().enabled = true;

                while (letter <= lineOfText[i].Length - 1)
                {
                    leftBubbleText.text = leftBubbleText.text + lineOfText[i][letter];
                    letter++;
                    yield return new WaitForSeconds(0.02f);
                }

                yield return new WaitForSeconds(3);
                leftBubbleAnim.SetTrigger("fadeout");
                leftBubbleText.text = "";
                leftBubbleText.GetComponent<Text>().enabled = false;
                leftBubble.SetActive(false);
            }
            else
            {
                rightBubble.SetActive(true);
                rightBubbleAnim.SetTrigger("fadein");
                yield return new WaitUntil(() => rightBubbleBlack.color.a == 1);
                rightBubbleText.GetComponent<Text>().enabled = true;
                while (letter <= lineOfText[i].Length - 1)
                {
                    rightBubbleText.text = rightBubbleText.text + lineOfText[i][letter];
                    letter++;
                    yield return new WaitForSeconds(0.02f);

                }

                yield return new WaitForSeconds(3);
                rightBubbleAnim.SetTrigger("fadeout");
                leftBubbleText.text = "";
                rightBubbleText.GetComponent<Text>().enabled = false;
                rightBubble.SetActive(false);
            }

            letter = 0;
            i++;
            yield return new WaitForSeconds(1);
        }
    }

}
