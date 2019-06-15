using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Xml;
using System.IO;
using UnityEngine.SceneManagement;
using UnityEngine.Audio;


public class TextBoxManager : MonoBehaviour
{
    public GameObject textBox;
    public Text testText;
    public Text mainUIText;
    public Text optionText;
    public int selectOption;
    public Button button1;
    public Button button2;
    public Button button3;
    public Button button4;
    public int[] destinationCount;
    public string[] scripts;
    public int count;
    public int nodeTracker;
    public InputField nameField;
    public string username;
    private bool isTyping = false;
    private bool cancelTyping = false;
    public int score;
    public string optionTextHolder;
    public Animator anim;
    public Image black;
 
   


    // Use this for initialization
    void Start()
    {
        username = "";
        nodeTracker = 0;
        setSelectOption(0);
        showMainText();
        hideInput();
        hideOptions();
        runDialogue();
    }

    void runDialogue()
    {
        StartCoroutine(run());
    }
    
    public IEnumerator fading()
    {
        anim.SetBool("fade", true);
        yield return new WaitUntil (()=>black.color.a==1);
        SceneManager.LoadScene("gameover");
    }

    public IEnumerator textScroll (string lineOfText)
    {
        int letter = 0;
        mainUIText.text = "";
        isTyping = true;
        cancelTyping = false;
        while(isTyping && !cancelTyping && (letter<=lineOfText.Length-1))
        {
            mainUIText.text = mainUIText.text + lineOfText[letter];
            letter++;
            yield return new WaitForSeconds(0.02f);
        }
        mainUIText.text = lineOfText;
        isTyping = false;
        cancelTyping = false;
    }

   
    public IEnumerator run()
    {
        
        while (selectOption != -1)  //-1 means game over
        {
            loadDialogue(selectOption);
            showMainText();
            setSelectOption(-2);
            while (selectOption == -2)
            {
                yield return new WaitForSeconds(0.25f);
            }
          
            hideOptions();
            hideMainText();
        }
        StartCoroutine(fading());
        textBox.gameObject.SetActive(false);
       
    }



    void setSelectOption(int x)
    {
        selectOption = x;
    }



    void loadDialogue(int dialogueDestination)
    {
        XmlDocument xmlDoc = new XmlDocument();
        xmlDoc.Load("Assets/Scripts/Test_dia.xml");
        nodeTracker = dialogueDestination;
        //XmlNodeList nodeList = xmlDoc.GetElementsByTagName("DialogueOptionsID");
        //texts = GameObject.Find("UIText");

        /*counting the total nodes with the same tag
       
        UIText.text = nodeList.Count.ToString();*/

        foreach (XmlNode node in xmlDoc.GetElementsByTagName("DialogueNode"))
        {

            if (node["NodeID"].InnerText == dialogueDestination.ToString()  /*== selected option*/)
            {
                scripts = new string[node["UIText"].ChildNodes.Count];
            
                destinationCount = new int[node["Options"].ChildNodes.Count];

                optionText.text = node["optionText"].InnerText;
                

                for (int i = 0; i < node["UIText"].ChildNodes.Count; i++)
                {
                    scripts[i] = node["UIText"].ChildNodes[i].InnerText;
                }

                for (int i = 0; i< node["Options"].ChildNodes.Count; i++)
                {
                    destinationCount[i] = int.Parse(node["Options"].ChildNodes[i].ChildNodes[1].InnerText);
                }



                if (dialogueDestination == 3 || dialogueDestination == 4)
                {
                    for (int i = 0; i < node["Options"].ChildNodes.Count; i++)
                    {
                        switch (i)
                        {
                            case 0:
                                button1.GetComponentInChildren<Text>().text = node["Options"].ChildNodes[0].ChildNodes[0].InnerText;
                                button1.onClick.AddListener(delegate { setSelectOption(destinationCount[0]); score = score + int.Parse(node["Options"].ChildNodes[0].ChildNodes[2].InnerText); });

                                break;
                            case 1:
                                button2.GetComponentInChildren<Text>().text = node["Options"].ChildNodes[1].ChildNodes[0].InnerText;
                                button2.onClick.AddListener(delegate { setSelectOption(destinationCount[1]); score = score + int.Parse(node["Options"].ChildNodes[1].ChildNodes[2].InnerText); });

                                break;
                            case 2:
                                button3.GetComponentInChildren<Text>().text = node["Options"].ChildNodes[2].ChildNodes[0].InnerText;
                                button3.onClick.AddListener(delegate { setSelectOption(destinationCount[2]); score = score + int.Parse(node["Options"].ChildNodes[2].ChildNodes[2].InnerText); });

                                break;
                            case 3:
                                button4.GetComponentInChildren<Text>().text = node["Options"].ChildNodes[3].ChildNodes[0].InnerText;
                                button4.onClick.AddListener(delegate { setSelectOption(destinationCount[3]); score = score + int.Parse(node["Options"].ChildNodes[3].ChildNodes[2].InnerText); });

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
                                button1.GetComponentInChildren<Text>().text = node["Options"].ChildNodes[0].ChildNodes[0].InnerText;
                                button1.onClick.AddListener(delegate { setSelectOption(destinationCount[0]); });

                                break;
                            case 1:
                                button2.GetComponentInChildren<Text>().text = node["Options"].ChildNodes[1].ChildNodes[0].InnerText;
                                button2.onClick.AddListener(delegate { setSelectOption(destinationCount[1]); });

                                break;
                            case 2:
                                button3.GetComponentInChildren<Text>().text = node["Options"].ChildNodes[2].ChildNodes[0].InnerText;
                                button3.onClick.AddListener(delegate { setSelectOption(destinationCount[2]); });

                                break;
                            case 3:
                                button4.GetComponentInChildren<Text>().text = node["Options"].ChildNodes[3].ChildNodes[0].InnerText;
                                button4.onClick.AddListener(delegate { setSelectOption(destinationCount[3]); });

                                break;
                        }
                    }
                }
                if (dialogueDestination == 1)
                {
                    StartCoroutine(textScroll(scripts[0] + username));
                }
                else 
                {
                    StartCoroutine(textScroll(scripts[0]));
                }




                //important!!!!!
                //button1.onClick.AddListener(delegate { setSelectOption(int.Parse(node["Options"].ChildNodes[0].ChildNodes[1].InnerText)); hideOptions();  });
                //button2.onClick.AddListener(delegate { changeOption(0); hideOptions();  });













                //UIText.text = node["UIText"].InnerText + "\n";
                //UIText.text = node["Options"].InnerText;

                // UIText.text = node["Options"].ChildNodes[0].InnerText;
                // UIText.text = node["Options"].ChildNodes[1].InnerText;

                // count how many options 
                //UIText.text = node["Options"].ChildNodes.Count.ToString();

                //Text of buttons
                //UIText.text = node["Options"].ChildNodes[0].ChildNodes[0].InnerText;

                //Destination on buttons.
                // UIText.text = node["Options"].ChildNodes[0].ChildNodes[1].InnerText;



            }

        }



    }

    void showOptions()
    {
        optionText.gameObject.SetActive(true);
        button1.gameObject.SetActive(true);
        button2.gameObject.SetActive(true);
        button3.gameObject.SetActive(true);
        button4.gameObject.SetActive(true);
    }


    void hideOptions()
    {
        optionText.gameObject.SetActive(false);
        button1.gameObject.SetActive(false);
        button2.gameObject.SetActive(false);
        button3.gameObject.SetActive(false);
        button4.gameObject.SetActive(false);
    }

    void showInput()
    {
        nameField.gameObject.SetActive(true);
        optionText.gameObject.SetActive(true);
        nameField.Select();
    }

    void hideInput()
    {
        nameField.gameObject.SetActive(false);    
        optionText.gameObject.SetActive(false);
    }
    
    void showMainText()
    {
        mainUIText.gameObject.SetActive(true);
    }

    void hideMainText()
    {
        mainUIText.gameObject.SetActive(false);
    }




    // Update is called once per frame
    void Update()
    {

        // mainUIText.text = scripts[count];
      

        if (nodeTracker == 0)
        {
            if (Input.GetKeyDown(KeyCode.Return))
            {
                if (!isTyping)
                {
                    count++;

                    if (count == scripts.Length)
                    {
                        showInput();
                        hideMainText();
                        count = 0;

                    }
                    else if (nameField.text != "" && Input.GetKeyDown(KeyCode.Return))
                    {
                        username = nameField.text;
                        nameField.text = "";
                        hideOptions();
                        hideInput();
                        count = 0;
                        scripts[0] = "";
                        setSelectOption(1);

                    }
                    else
                    {
                        StartCoroutine(textScroll(scripts[count]));
                    }
                }
                else if (isTyping && !cancelTyping)
                {
                    cancelTyping = true;
                }

            }

        }

        else if (nodeTracker == 1)
        {
                

            if (Input.GetKeyDown(KeyCode.Return))
            {
               
                if (!isTyping)
                {
                    count++;

                    if (count == scripts.Length)
                    {
                        showOptions();
                        button3.gameObject.SetActive(false);
                        button4.gameObject.SetActive(false);
                        hideMainText();
                        count = 0;
                        scripts[0] = "";
                    }
                    else
                    {
                            StartCoroutine(textScroll(scripts[count]));
                                          
                    }

                   
                }
                else if (isTyping && !cancelTyping)
                {
                    cancelTyping = true;
                }

            }

        }

        else if (nodeTracker == 2)
        {

            if (Input.GetKeyDown(KeyCode.Return))
            {
                if (!isTyping)
                {
                    count++;

                    if (count == scripts.Length)
                    {
                        showInput();
                        hideMainText();
                        count = 0;

                    }
                    else if (nameField.text != "" && Input.GetKeyDown(KeyCode.Return))
                    {
                        username = nameField.text;
                        nameField.text = "";
                        hideOptions();
                        hideInput();
                        count = 0;
                        scripts[0] = "";
                        setSelectOption(3);

                    }
                    else
                    {
                        StartCoroutine(textScroll(scripts[count]));
                    }
                }
                else if (isTyping && !cancelTyping)
                {
                    cancelTyping = true;
                }

            }

        }


        else
        {
            //testText is use for testing XD
            //testText.text = score.ToString();

            if (Input.GetKeyDown(KeyCode.Return))
            {
                if (!isTyping)
                {
                    count++;

                    if (count == scripts.Length)
                    {
                        showOptions();
                        hideMainText();
                        count = 0;
                        scripts[0] = "";
                    }
                    else
                    {
                        StartCoroutine(textScroll(scripts[count]));
                    }
                }
                else if (isTyping && !cancelTyping)
                {
                    cancelTyping = true;
                }

            }


        }

        





    }






}
