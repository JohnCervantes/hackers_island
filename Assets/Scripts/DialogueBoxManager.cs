using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Xml;
using UnityEngine.SceneManagement;
using Kino;

public class DialogueBoxManager : MonoBehaviour {


    public Animator cam;
    public Text ameliaNameTag;
    public GameObject dialogueBoxMain;
    public Text textMain;
    public Text optionText;
    public Button button1;
    public Button button2;
    public Button button3;
    public Button button4;
    public Button inputFieldButton;
    public int scriptCount = 0;
    public float selectededDialogueID;
    public string[] scripts;
    public InputField inputFieldBox;
    public string userName;
    public float nodeTracker;
    public float[] destinationID;
    public GameObject goNext;
    public AudioSource source;
    public AudioClip beep;
    public string rename;
    bool isTyping;
    bool cancelTyping;
    public GameObject ameliaAnimationStates;
    public AudioClip exitDoor;
    private int score;
    public TextAsset xml;
 


	
	void Awake () {
        this.GetComponent<BoxCollider2D>().enabled = false;
        inputFieldButton.onClick.AddListener(delegate { StartCoroutine("saveUserName"); });
        inputFieldButton.gameObject.SetActive(false);
        goNext.SetActive(false);
        isTyping = false;
        cancelTyping = false;
        disableAllButtons();
        textMain.gameObject.SetActive(true);
        inputFieldBox.gameObject.SetActive(false);
        optionText.gameObject.SetActive(false);
        setSelectedOption(0);
        userName = "";
		
	}

    void addScore(int x)
    {
        score = score + x;
    }

    void setSelectedOption(float x)
    {
        selectededDialogueID = x;
    }

    public void beginDialogue()
    {
        this.GetComponent<BoxCollider2D>().enabled = true;
        textMain.fontSize = 30;
        textMain.alignment = TextAnchor.UpperLeft;
        loadDialogue(selectededDialogueID);
    }

    
    public void OnMouseDown()
    {
        goNext.SetActive(false);
        if (!isTyping)
        {
            if (scriptCount == scripts.Length - 1)
            {
                textMain.gameObject.SetActive(false);
                optionText.gameObject.SetActive(true);
                this.GetComponent<BoxCollider2D>().enabled = false;
                scriptCount = 0;

                if (nodeTracker == 0)
                {
                    
                    inputFieldBox.gameObject.SetActive(true);
                    inputFieldBox.Select();
                    inputFieldButton.gameObject.SetActive(true);
                    setSelectedOption(1);
                    ameliaNameTag.text = "Amelia";
                }
                else if (nodeTracker == 1)
                {      
                    button1.gameObject.SetActive(true);
                    button2.gameObject.SetActive(true);
                }
                else if (nodeTracker == 2.1f)
                {
                    inputFieldButton.interactable = true;
                    inputFieldBox.gameObject.SetActive(true);
                    inputFieldButton.gameObject.SetActive(true);
                    setSelectedOption(2);
                }
                else if (nodeTracker == 2)
                { 
                    enableAllButtons();
                }
                else if (nodeTracker == 3)
                {
                    enableAllButtons();
                }
                else if (nodeTracker == 4)
                {
                    setSelectedOption(5);
                    loadDialogue(selectededDialogueID);
                }
                else if (nodeTracker == 5)
                {
                    StartCoroutine("exitTheBar");
                }

            }
           
            else
            {
                scriptCount++;
                StartCoroutine(textScroll(scripts[scriptCount]));
            }

        }
        else if (isTyping && !cancelTyping)
        {
            cancelTyping = true;
        }

    }

    IEnumerator exitTheBar()
    {
        QuestManager.instance.hasTakenTheQuestionaire = true;
        source.PlayOneShot(exitDoor);
        yield return new WaitForSeconds(1);    
        cam.SetBool("fadeOut", true);
        yield return new WaitUntil(() => cam.GetComponent<AnalogGlitch>()._scanLineJitter >= 0.95);
       // GameObject.Find("DiallogueSceneManager").gameObject.GetComponent<DialogueSceneManager>().castleSign.GetComponent<EnterTheCastle>().allowedToEnterCastle();      
        SceneManager.LoadScene("IslandDay");
    }


    public IEnumerator textScroll(string lineOfText)
    {
        int letter = 0;
        textMain.text = "";

        isTyping = true;
        cancelTyping = false;
        while (isTyping && !cancelTyping && (letter <= lineOfText.Length - 1))
        {
            if (lineOfText[letter] != ' ')
            {
                source.PlayOneShot(beep, 0.5f);
            }
            textMain.text = textMain.text + lineOfText[letter];
            letter++;
            yield return new WaitForSeconds(0.05f);
            if (letter == lineOfText.Length - 1)
            {
                goNext.SetActive(true);
            }
        }
        textMain.text = scripts[scriptCount];
        goNext.SetActive(true);
        isTyping = false;
        cancelTyping = false;

    }



    void loadDialogue(float dialogueDestination)
    {
        XmlDocument xmlDoc = new XmlDocument();
        xmlDoc.LoadXml(xml.text);
        nodeTracker = dialogueDestination;
        removeButtonListeners();
        foreach (XmlNode node in xmlDoc.GetElementsByTagName("DialogueNode"))
        {

            if (node["NodeID"].InnerText == dialogueDestination.ToString())
            {
                scripts = new string[node["UIText"].ChildNodes.Count];

                destinationID = new float[node["Options"].ChildNodes.Count];

                optionText.text = node["optionText"].InnerText;


                for (int i = 0; i < node["UIText"].ChildNodes.Count; i++)
                {
                    scripts[i] = node["UIText"].ChildNodes[i].InnerText;
                }

                for (int i = 0; i < node["Options"].ChildNodes.Count; i++)
                {
                    destinationID[i] = float.Parse(node["Options"].ChildNodes[i].ChildNodes[1].InnerText);
                }

                  

                if (dialogueDestination == 2 || dialogueDestination == 3)
                {
                        for (int i = 0; i < node["Options"].ChildNodes.Count; i++)
                        {
                            switch (i)
                            {
                                case 0:
                                    button1.GetComponentInChildren<Text>().text = node["Options"].ChildNodes[i].ChildNodes[0].InnerText;
                                    button1.onClick.AddListener(delegate { setSelectedOption(destinationID[0]); addScore( int.Parse(node["Options"].ChildNodes[0].ChildNodes[2].InnerText)); StartCoroutine(loadDialogueForButtons()); });

                                    break;
                                case 1:
                                    button2.GetComponentInChildren<Text>().text = node["Options"].ChildNodes[i].ChildNodes[0].InnerText;
                                    button2.onClick.AddListener(delegate { setSelectedOption(destinationID[1]); addScore( int.Parse(node["Options"].ChildNodes[1].ChildNodes[2].InnerText)); StartCoroutine(loadDialogueForButtons()); });

                                    break;
                                case 2:
                                    button3.GetComponentInChildren<Text>().text = node["Options"].ChildNodes[i].ChildNodes[0].InnerText;
                                    button3.onClick.AddListener(delegate { setSelectedOption(destinationID[2]); addScore( int.Parse(node["Options"].ChildNodes[2].ChildNodes[2].InnerText)); StartCoroutine(loadDialogueForButtons()); });

                                    break;
                                case 3:
                                    button4.GetComponentInChildren<Text>().text = node["Options"].ChildNodes[i].ChildNodes[0].InnerText;
                                    button4.onClick.AddListener(delegate { setSelectedOption(destinationID[3]);  addScore(int.Parse(node["Options"].ChildNodes[3].ChildNodes[2].InnerText)); StartCoroutine(loadDialogueForButtons()); });

                                    break;
                            }
                    }
                }

                else
                {
                        for (int i = 0; i < node["Options"].ChildNodes.Count; i++)
                        {
                            switch (i)
                            {
                                case 0:
                                    button1.GetComponentInChildren<Text>().text = node["Options"].ChildNodes[i].ChildNodes[0].InnerText;
                                    button1.onClick.AddListener(delegate { setSelectedOption(destinationID[0]); StartCoroutine(loadDialogueForButtons()); });

                                    break;
                                case 1:
                                    button2.GetComponentInChildren<Text>().text = node["Options"].ChildNodes[i].ChildNodes[0].InnerText;
                                    button2.onClick.AddListener(delegate { setSelectedOption(destinationID[1]); StartCoroutine(loadDialogueForButtons()); });

                                    break;
                                case 2:
                                    button3.GetComponentInChildren<Text>().text = node["Options"].ChildNodes[i].ChildNodes[0].InnerText;
                                    button3.onClick.AddListener(delegate { setSelectedOption(destinationID[2]); StartCoroutine(loadDialogueForButtons()); });

                                    break;
                                case 3:
                                    button4.GetComponentInChildren<Text>().text = node["Options"].ChildNodes[i].ChildNodes[0].InnerText;
                                    button4.onClick.AddListener(delegate { setSelectedOption(destinationID[3]); StartCoroutine(loadDialogueForButtons()); });

                                    break;
                            }
                        }
                }

                if (dialogueDestination == 1)
                {
                    scripts[0] = scripts[0] + userName;             
                }
            }
         
        }
        disableAllButtons();
        textMain.gameObject.SetActive(true);
        optionText.gameObject.SetActive(false);
        this.GetComponent<BoxCollider2D>().enabled = true;
        //load animations here
        if (nodeTracker == 1)
        {
            ameliaAnimationStates.GetComponent<AnimationStateHandler>().ameliaAnim.SetBool("angry", false);
            ameliaAnimationStates.GetComponent<AnimationStateHandler>().ameliaAnim.SetBool("bump", false);
        }
        else if (nodeTracker == 5)
        {
            ameliaAnimationStates.GetComponent<AnimationStateHandler>().ameliaAnim.SetBool("smirk", true);
        }
        StartCoroutine(textScroll(scripts[scriptCount]));
    }

    public IEnumerator saveUserName()
    {
        if (inputFieldBox.text != "")
        {
            inputFieldButton.interactable = false;
            yield return new WaitForSeconds(0.5f);
            userName = inputFieldBox.text;
            QuestManager.instance.playerName = userName;
            inputFieldBox.gameObject.SetActive(false);
            inputFieldButton.gameObject.SetActive(false);
            loadDialogue(selectededDialogueID);
        }
    }

     void disableAllButtons()
    {
        button1.gameObject.SetActive(false);
        button2.gameObject.SetActive(false);
        button3.gameObject.SetActive(false);
        button4.gameObject.SetActive(false);
    }

    void enableAllButtons()
    {
        StartCoroutine("animateButtons");
    }

    IEnumerator animateButtons()
    {
        button1.enabled = false;
        button2.enabled = false;
        button3.enabled = false;
        button4.enabled = false;
        List<Button> arrayButton = new List<Button>
        {
            button1,
            button2,
            button3,
            button4
        };
        foreach (Button x in arrayButton)
        {
            x.gameObject.SetActive(true);
            yield return new WaitForSeconds(0.3f);
        }
        button1.enabled = true;
        button2.enabled = true;
        button3.enabled = true;
        button4.enabled = true;
    }

    void removeButtonListeners()
    {
        button1.GetComponent<Button>().onClick.RemoveAllListeners();
        button2.GetComponent<Button>().onClick.RemoveAllListeners();
        button3.GetComponent<Button>().onClick.RemoveAllListeners();
        button4.GetComponent<Button>().onClick.RemoveAllListeners();
    }

    IEnumerator loadDialogueForButtons()
    {
            button1.enabled = false;
            button2.enabled = false;
            button3.enabled = false;
            button4.enabled = false;
            yield return new WaitForSeconds(0.45f);
            disableAllButtons();
            textMain.gameObject.SetActive(true);
            optionText.gameObject.SetActive(false);
            this.GetComponent<BoxCollider2D>().enabled = true;
            loadDialogue(selectededDialogueID);
    }
}
