using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class DialogueSceneManager : MonoBehaviour
{
    private DialogueSceneManager instance;
    public Animator privacy;
    public GameObject cam;
    public GameObject parent;
    public GameObject npcDog;
    public GameObject npcKid;
    public GameObject blackImage;
    public GameObject nameLeft;
    public GameObject nameRight;
    public Text nameTextLeft;
    public Text nameTextRight;
    public GameObject dialogueBox;
    public Text dialogueText;
    public Animator dog;
    public Animator kid;
    public AudioSource source;
    public AudioClip beepDog;
    public AudioClip beepKid;
    public int count;
    public bool isTyping;
    public bool cancelTyping;
    private bool hasPlayedBossCutscene;
    public string cursor;
    public bool isBlinking;
    private int letter;
    public Animator tipbox;
    public GameObject objectives;

    public GameObject bossCutsene;

    //entry animations
    public GameObject triggersAndAnimations;

    public string[] script;
    private bool isDogSpeaking;
    private bool isKidSpeaking;


    // Use this for initialization
    void Start()
    {
        if (QuestManager.instance.hasPlayedFirstCutscene == false)
        {
            QuestManager.instance.disableCutscene();
            triggersAndAnimations.GetComponent<TriggersAndAnimation>().disableTriggersAndAnimation();
            isTyping = false;
            cancelTyping = false;
            nameTextLeft.text = "? ? ?";
            nameTextRight.text = "? ? ?";
            letter = 0;
            count = 0;
            npcDog.SetActive(false);
            npcKid.SetActive(false);
            dialogueBox.SetActive(false);
            blackImage.SetActive(false);      
            dialogues();
            isBlinking = true;
            StartCoroutine("cursorBlink");
            StartCoroutine(activateDialogueScene());
        }
        else
        {
            Destroy(parent.gameObject);
        }
    }


    void dialogues()
    {
        script = new string[]
        {
            "Greetings! \nWelcome to hacker's island.",
            "Every year, hackers around the world travel here to join the most prestigious hacking tournament.",
            "Are you going to join too?",
            "My name is Forte. It's very nice to meet you!",
            "how good are you at hacking?",
            "You can join the tournament even if you're not good at it",
            "but there's no chance that you'll win, ha ha.",
            "By the way, My name is Eldritch.",
            "Yikes! \nI'm not feeling good today, because I heard that the competition is going to be tough.",
            "Brighten up Kiddo! With that attitude, you'll forever be a \"script kiddie\" level hacker.",
            "Hmffff . .        \n why are you so mean, Forte. . .",
            "*sobs*",
            "(sigh, he's crying again)",
            "the famous hacker \"brocco133t\" is also joining the tournament.",
            "He's the most notorious hacker in the planet.",
            "Oh, If you wan't to buy something here, your paper money has no value.",
            "We use a cryptocurrency called \"Privacy\".",
            "privacy is such a beautiful thing, eh?",
            "Here, Take some of my privacy, my friend",  
            "I have some games just for you. I'll give you more of my privacy if you beat me.",
            "I recommend you to check out the bar. The drinks there are really good!",
            "and don't forget to click the objective button to check your tasks",
            "Enjoy your stay here and we'll see you around!"
        };
    }

    public IEnumerator cursorBlink()
    {
        while (isBlinking)
        {
            cursor = "_";
            yield return new WaitForSeconds(0.5f);
            cursor = " ";
            yield return new WaitForSeconds(0.5f);
        }
    }

    public IEnumerator textScroll(string lineOfText)
    {
        letter = 0;
        dialogueText.text = "_";

        isTyping = true;
        cancelTyping = false;
        while (isTyping && !cancelTyping && (letter <= lineOfText.Length - 1))
        {
            if (lineOfText[letter] != ' ')
            {
                if (isKidSpeaking && !isDogSpeaking)
                {
                    source.PlayOneShot(beepKid);
                }
                else
                {
                    source.PlayOneShot(beepDog);
                }
            }
            if (count == 11)
            {
                dialogueText.color = Color.yellow;
            }
            else if (count == 12)
            {
                dialogueText.color = Color.green;
            }
            else
            {
                dialogueText.color = Color.white;
            }

            dialogueText.text = dialogueText.text.Remove(dialogueText.text.Length - 1) + lineOfText[letter] + cursor;
            letter++;
            yield return new WaitForSeconds(0.04f);

        }
        dialogueText.text = lineOfText + cursor;
        letter = lineOfText.Length;

        while (letter == lineOfText.Length)
        {
            isTyping = false;
            cancelTyping = false;
            string temp = dialogueText.text.Remove(dialogueText.text.Length - 1) + cursor;
            dialogueText.text = temp;
            yield return new WaitForSeconds(0.01f);
        }     
        
    }

    IEnumerator activateDialogueScene()
    {
        nameRight.SetActive(false);
        yield return new WaitForSeconds(1);
        blackImage.SetActive(true);
        yield return new WaitForSeconds(2);
        npcDog.SetActive(true);
        yield return new WaitForSeconds(1);
        dialogueBox.SetActive(true);
        StartCoroutine(textScroll(script[count]));
    }

    public void nextLine()
    {
        letter = 0;
        if (!isTyping)
        {
            if (count == 14)
            {
                if (!hasPlayedBossCutscene)
                {
                    hasPlayedBossCutscene = true;
                    bossCutsene.SetActive(true);
                    StartCoroutine(cam.GetComponent<TransitionHandler>().cutsceneGlitch());
                    dialogueText.text = "";
                    count++;
                }
            }
            else
            {
                count++;

                if (count == script.Length)
                {
                    QuestManager.instance.disableCutscene();
                    triggersAndAnimations.GetComponent<TriggersAndAnimation>().activateTriggersAndAnimation();
                    Destroy(parent.gameObject);
                }
                else
                {
                    if (count == 3)
                    {
                        dogReveal();
                    }
                    else if (count == 4)
                    {
                        isKidSpeaking = true;
                        isDogSpeaking = false;
                        nameLeft.SetActive(false);
                        dog.SetBool("standby", true);
                        npcKid.SetActive(true);
                        nameRight.SetActive(true);
                    }
                    else if (count == 7)
                    {
                        kidReveal();
                    }
                    else if (count == 9 || count == 12 || count == 18)
                    {
                        dogConvo();
                        if (count == 18)
                        {
                            privacy.SetBool("add", true);
                        }
                    }

                    else if (count == 10)
                    {
                        kidConvo();
                    }
                    else if (count == 16)
                    {
                        Destroy(bossCutsene);
                        kid.SetBool("standby", true);
                        dog.SetBool("standby", true);
                        privacy.SetBool("intro", true);
                    }

                    
                    else if (count == 21)
                    {
                        objectives.gameObject.SetActive(true);
                    }
                    else if (count == 22 || count == 23)
                    {
                        dog.SetBool("standby", false);
                        kid.SetBool("standby", false);
                        
                    }

                    StartCoroutine(textScroll(script[count]));
                }
            }
        }
        else if (isTyping && !cancelTyping)
        {
            cancelTyping = true;
        }
    }

    void dogConvo()
    {
        isDogSpeaking = true;
        isKidSpeaking = false;
        nameLeft.SetActive(true);
        nameRight.SetActive(false);
        dog.SetBool("standby", false);
        kid.SetBool("standby", true);
    }

    void dogReveal()
    {
        isDogSpeaking = true;
        isKidSpeaking = false;
        nameTextLeft.text = "Forte";
        dog.SetBool("reveal", true);
    }

    void kidConvo()
    {
        isDogSpeaking = false;
        isKidSpeaking = true;
        nameLeft.SetActive(false);
        nameRight.SetActive(true);
        dog.SetBool("standby", true);
        kid.SetBool("standby", false);
    }

    void kidReveal()
    {
        isDogSpeaking = false;
        isKidSpeaking = true;
        nameTextRight.text = "Eldritch";
        kid.SetBool("reveal", true);
    }
}