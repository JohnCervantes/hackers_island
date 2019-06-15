using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class EnableSpymon : MonoBehaviour
{
    public GameObject parent;
    public AudioSource cameraAudio;
    public AudioClip introMusic;
    public AudioClip battle;
    public GameObject main;
    public Animator spymon;
    public GameObject camera;
    public Text text;
    public GameObject hpBar;
    private bool hasPlayedFirewall;
    private bool hasPlayedChangePassword;
    public GameObject cleared;
    private int hackSteps;
    private bool intro;
    public GameObject fadeout;
    public int multiplier;
    public GameObject hint;


    void Start()
    {
        text.text = "";
    }

    public void playy()
    {
        multiplier = QuestManager.instance.forteMultiplier;
        StartCoroutine("playTitleScreen");
    }


    public IEnumerator playTitleScreen()
    {
        camera.GetComponent<Animator>().SetBool("fadeIn", true);
        cameraAudio.clip = introMusic;
        cameraAudio.Play();
        yield return new WaitForSeconds(0.8f);
        main.gameObject.SetActive(false);
        camera.GetComponent<Animator>().SetBool("fadeIn", false);
        StartCoroutine("playTitle");
        


    }
    IEnumerator playTitle()
    {

        intro = false;
        parent.GetComponent<Animator>().SetTrigger("title");

        while (intro==false)
        {
            if (Input.GetKey(KeyCode.Return))
            {
                if (intro == false)
                {
                    camera.GetComponent<TransitionHandler>().playMouseClickPlay();
                }
                yield return new WaitForSeconds(2);
                StartCoroutine("Intro");
                hpBar.GetComponent<HpBarHandler>().refreshValues();
                spymon.GetComponent<Image>().fillAmount = 1;
                hackSteps = 0;
                intro = true;
                

            }
            yield return new WaitForSeconds(0.1f);
        }
        StopCoroutine("playTitle");
    }

    public void fadeIn()
    {
        camera.GetComponent<TransitionHandler>().StartCoroutine("fadeIn");
    }


    public void playFirewall()
    {
        StartCoroutine("firewall");
    }

    public void playChangePassword()
    {
        StartCoroutine("changePassword");
    }

    public void playUpdate()
    {
        StartCoroutine("update");
    }

    public void playDefendMenu()
    {
        StartCoroutine("defendMenu");
    }

    public void playCatch()
    {
        StartCoroutine("trace");
    }

    public void playSpymonHack()
    {
        StartCoroutine("spymonHack");
    }

    public void playReformat()
    {
        StartCoroutine("reformat");
    }

    IEnumerator spymonHack()
    {
        yield return new WaitForSeconds(2);

        int rand = Random.Range(1, 11);
        bool badLuck = false;

        if (hackSteps >= 2 && rand <= 1)
        {
            StartCoroutine(textScroll("Enemy Spymon needs more time for its next attack."));
        }
        else
        {
            badLuck = true;
            hackSteps++;
        }

        if (badLuck)
        {
            if (hackSteps == 1)
            {
                StartCoroutine(textScroll("Enemy Spymon starts injecting packets into your network!"));
            }
            else if (hackSteps == 2)
            {
                StartCoroutine(textScroll("Enemy Spymon gained access to your computer!"));
            }
            else if (hackSteps == 3)
            {
                StartCoroutine(textScroll("Enemy Spymon now has full root access to your computer!"));
            }
            else if (hackSteps == 4)
            {
                StartCoroutine(textScroll("Enemy Spymon has created a backdoor into your computer!"));
            }
            else if (hackSteps == 5)
            {
                StartCoroutine(textScroll("Enemy Spymon has deleted all the log files and is ready to escape!"));
            }
            else
            {
                StartCoroutine(textScroll("Enemy Spymon has fled and successfuly hacked your network. . ."));
                yield return new WaitForSeconds(2);          
                main.gameObject.SetActive(true);
                yield return new WaitForSeconds(5);
                fadeout.gameObject.SetActive(true);
                yield return new WaitForSeconds(0.5f);
                this.gameObject.GetComponent<Animator>().SetBool("default", true);
                yield return new WaitForSeconds(0.2f);
                this.gameObject.GetComponent<Animator>().SetBool("default", false);
                yield return new WaitForSeconds(0.8f);
            }
        }
        yield return new WaitForSeconds(5);
        this.gameObject.GetComponent<Animator>().SetBool("menu", true);
    }


    public IEnumerator firewall()
    {
        this.GetComponent<Animator>().SetBool("firewall", true);
        if (!hasPlayedFirewall)
        {
            StartCoroutine(textScroll("You activated the firewall!"));
            hasPlayedFirewall = true;
        }
        else
        {
            StartCoroutine(textScroll("You upgraded your firewall's software!"));
        }
        yield return new WaitForSeconds(3);
        spymon.SetBool("hit", true);
        yield return new WaitForSeconds(1);
        hpBar.GetComponent<HpBarHandler>().useFirewall();
        this.GetComponent<Animator>().SetBool("firewall", false);
        yield return new WaitForSeconds(0.5f);
        spymon.SetBool("hit", false);

        yield return new WaitForSeconds(1);
        if (hpBar.transform.GetChild(1).GetComponent<Image>().fillAmount <= 0)
        {
            this.GetComponent<Animator>().SetBool("run", true);
            yield return new WaitForSeconds(.45f);
            this.GetComponent<Animator>().SetBool("run", false);
            StopCoroutine("spymonHack");
            yield return new WaitForSeconds(1);
            StartCoroutine(textScroll("Enemy Spymon has escaped and failed to hack your system."));
            QuestManager.instance.hasFinishedSpymon = true;
            yield return new WaitForSeconds(3);
            cleared.GetComponent<AddScore>().score = 30 * multiplier ;
            cleared.GetComponent<AddScore>().playCleared();
            yield return new WaitForSeconds(7);
            main.gameObject.SetActive(true);
            fadeout.gameObject.SetActive(true);
            yield return new WaitForSeconds(0.5f);
            this.gameObject.GetComponent<Animator>().SetBool("default", true);
            yield return new WaitForSeconds(0.2f);
            this.gameObject.GetComponent<Animator>().SetBool("default", false);
            yield return new WaitForSeconds(0.8f);          
        }
    }


    public IEnumerator changePassword()
    {
        this.GetComponent<Animator>().SetBool("changePassword", true);

        if (!hasPlayedChangePassword)
        {
            StartCoroutine(textScroll("You changed your password!"));
            hasPlayedChangePassword = true;
        }
        else
        {
            StartCoroutine(textScroll("Your password's complexity has improved!"));
        }
        yield return new WaitForSeconds(3);
        spymon.SetBool("hit", true);
        yield return new WaitForSeconds(1);
        hpBar.GetComponent<HpBarHandler>().useChangePassword();
        this.GetComponent<Animator>().SetBool("changePassword", false);
        yield return new WaitForSeconds(0.5f);
        spymon.SetBool("hit", false);

        yield return new WaitForSeconds(1);
        if (hpBar.transform.GetChild(1).GetComponent<Image>().fillAmount <= 0)
        {
            this.GetComponent<Animator>().SetBool("run", true);
            yield return new WaitForSeconds(.45f);
            this.GetComponent<Animator>().SetBool("run", false);
            StopCoroutine("spymonHack");
            yield return new WaitForSeconds(1);
            StartCoroutine(textScroll("Enemy Spymon has escaped and failed to hack your system."));
            QuestManager.instance.hasFinishedSpymon = true;
            yield return new WaitForSeconds(2);
            cleared.GetComponent<AddScore>().score = 30 * multiplier;
            cleared.GetComponent<AddScore>().playCleared();
            yield return new WaitForSeconds(7);
            main.gameObject.SetActive(true);
            fadeout.gameObject.SetActive(true);
            yield return new WaitForSeconds(0.5f);
            this.gameObject.GetComponent<Animator>().SetBool("default", true);
            yield return new WaitForSeconds(0.2f);
            this.gameObject.GetComponent<Animator>().SetBool("default", false);
            yield return new WaitForSeconds(0.8f);
        }
    }


    public IEnumerator reformat()
    {
        this.GetComponent<Animator>().SetBool("reformat", true);
        StartCoroutine(textScroll("You reformated your system!"));
        yield return new WaitForSeconds(3);
        spymon.SetBool("hit", true);
        yield return new WaitForSeconds(1);
        hpBar.GetComponent<HpBarHandler>().useReformat();
        this.GetComponent<Animator>().SetBool("reformat", false);
        yield return new WaitForSeconds(0.5f);
        spymon.SetBool("hit", false);

        yield return new WaitForSeconds(1);
        if (hpBar.transform.GetChild(1).GetComponent<Image>().fillAmount <= 0)
        {
            this.GetComponent<Animator>().SetBool("run", true);
            yield return new WaitForSeconds(.45f);
            this.GetComponent<Animator>().SetBool("run", false);
            StopCoroutine("spymonHack");
            yield return new WaitForSeconds(1);
            StartCoroutine(textScroll("Enemy Spymon has escaped and failed to hack your system."));
            QuestManager.instance.hasFinishedSpymon = true;
            yield return new WaitForSeconds(2);
            cleared.GetComponent<AddScore>().score = 30 * multiplier;
            cleared.GetComponent<AddScore>().playCleared();
            yield return new WaitForSeconds(7);
            main.gameObject.SetActive(true);
            fadeout.gameObject.SetActive(true);
            yield return new WaitForSeconds(0.5f);
            this.gameObject.GetComponent<Animator>().SetBool("default", true);
            yield return new WaitForSeconds(0.2f);
            this.gameObject.GetComponent<Animator>().SetBool("default", false);
            yield return new WaitForSeconds(0.8f); 
        }
    }

    public IEnumerator update()
    {
        this.GetComponent<Animator>().SetBool("update", true);
        StartCoroutine(textScroll("You updated your system to the latest version!"));
        yield return new WaitForSeconds(3);
        spymon.SetBool("hit", true);
        yield return new WaitForSeconds(1);
        hpBar.GetComponent<HpBarHandler>().useUpdate();
        this.GetComponent<Animator>().SetBool("update", false);
        yield return new WaitForSeconds(0.5f);
        spymon.SetBool("hit", false);

        yield return new WaitForSeconds(1);
        if (hpBar.transform.GetChild(1).GetComponent<Image>().fillAmount <= 0)
        {
            this.GetComponent<Animator>().SetBool("run", true);
            yield return new WaitForSeconds(.45f);
            this.GetComponent<Animator>().SetBool("run", false);
            StopCoroutine("spymonHack");
            yield return new WaitForSeconds(1);
            StartCoroutine(textScroll("Enemy Spymon has escaped and failed to hack your system."));
            QuestManager.instance.hasFinishedSpymon = true;
            yield return new WaitForSeconds(2);
            cleared.GetComponent<AddScore>().score = 30 * multiplier;
            cleared.GetComponent<AddScore>().playCleared();
            yield return new WaitForSeconds(7);
            main.gameObject.SetActive(true);
            fadeout.gameObject.SetActive(true);
            yield return new WaitForSeconds(0.5f);
            this.gameObject.GetComponent<Animator>().SetBool("default", true);
            yield return new WaitForSeconds(0.2f);
            this.gameObject.GetComponent<Animator>().SetBool("default", false);
            yield return new WaitForSeconds(0.8f);
        }
    }

    public IEnumerator trace()
    {
        this.gameObject.GetComponent<Animator>().SetBool("menu", false);
        this.GetComponent<Animator>().SetBool("catch", true);
        text.text = "Tracing Enemy Spymon .";
        yield return new WaitForSeconds(1);
        text.text = "Tracing Enemy Spymon . .";
        yield return new WaitForSeconds(1);
        text.text = "Tracing Enemy Spymon . . .";
        yield return new WaitForSeconds(2);

        int rand = Random.Range(1, 11);
        float hp = hpBar.transform.GetChild(1).GetComponent<Image>().fillAmount;

        if (hp == 1)
        {
            StartCoroutine(textScroll("failed to traced enemy Spymon at this time."));
            yield return new WaitForSeconds(4);
            this.GetComponent<Animator>().SetBool("catch", false);
        }

        else if (hp <= 1 && hp >= .7f)
        {
            //20%
            if (rand < 3)
            {
                spymon.GetComponent<Animator>().SetBool("caught", true);
                StartCoroutine(textScroll("You Successfully traced enemy Spymon!"));
                QuestManager.instance.hasFinishedSpymon = true;
                yield return new WaitForSeconds(2);
                cleared.GetComponent<AddScore>().score = 50 * multiplier;
                cleared.GetComponent<AddScore>().playCleared();
                yield return new WaitForSeconds(7);
                main.gameObject.SetActive(true);
                fadeout.gameObject.SetActive(true);
                this.GetComponent<Animator>().SetBool("catch", false);
                yield return new WaitForSeconds(0.5f);
                this.gameObject.GetComponent<Animator>().SetBool("default", true);
                yield return new WaitForSeconds(0.2f);
                this.gameObject.GetComponent<Animator>().SetBool("default", false);
                yield return new WaitForSeconds(0.8f);
            }
            else
            {
                StartCoroutine(textScroll("failed to traced enemy Spymon at this time."));
                yield return new WaitForSeconds(4);
                this.GetComponent<Animator>().SetBool("catch", false);
            }
        }
        else if (hp <= 6.9f && hp >= 5)
        {
            //30%
            if (rand < 4)
            {
                spymon.GetComponent<Animator>().SetBool("caught", true);
                StartCoroutine(textScroll("You Successfully traced enemy Spymon!"));
                QuestManager.instance.hasFinishedSpymon = true;
                yield return new WaitForSeconds(2);
                cleared.GetComponent<AddScore>().score = 50 * multiplier;
                cleared.GetComponent<AddScore>().playCleared();
                yield return new WaitForSeconds(7);
                main.gameObject.SetActive(true);
                fadeout.gameObject.SetActive(true);
                this.GetComponent<Animator>().SetBool("catch", false);
                yield return new WaitForSeconds(0.5f);
                this.gameObject.GetComponent<Animator>().SetBool("default", true);
                yield return new WaitForSeconds(0.2f);
                this.gameObject.GetComponent<Animator>().SetBool("default", false);
                yield return new WaitForSeconds(0.8f);
            }
            else
            {
                StartCoroutine(textScroll("failed to traced enemy Spymon at this time."));
                yield return new WaitForSeconds(2);
                this.GetComponent<Animator>().SetBool("catch", false);
            }
        }
        else if (hp <= 4.9f && hp >= 3)
        {
            //40%
            if (rand < 5)
            {
                spymon.GetComponent<Animator>().SetBool("caught", true);
                StartCoroutine(textScroll("You Successfully traced enemy Spymon!"));
                QuestManager.instance.hasFinishedSpymon = true;
                yield return new WaitForSeconds(2);
                cleared.GetComponent<AddScore>().score = 50 * multiplier;
                cleared.GetComponent<AddScore>().playCleared();
                yield return new WaitForSeconds(7);
                main.gameObject.SetActive(true);
                fadeout.gameObject.SetActive(true);
                this.GetComponent<Animator>().SetBool("catch", false);
                yield return new WaitForSeconds(0.5f);
                this.gameObject.GetComponent<Animator>().SetBool("default", true);
                yield return new WaitForSeconds(0.2f);
                this.gameObject.GetComponent<Animator>().SetBool("default", false);
                yield return new WaitForSeconds(0.8f);
            }
            else
            {
                StartCoroutine(textScroll("failed to traced enemy Spymon at this time."));
                yield return new WaitForSeconds(4);
                this.GetComponent<Animator>().SetBool("catch", false);
            }
        }
        else
        {
            //50%
            if (rand < 6)
            {
                spymon.GetComponent<Animator>().SetBool("caught", true);
                StartCoroutine(textScroll("You Successfully traced enemy Spymon!"));
                QuestManager.instance.hasFinishedSpymon = true;
                yield return new WaitForSeconds(2);
                cleared.GetComponent<AddScore>().score = 50 * multiplier;
                cleared.GetComponent<AddScore>().playCleared();
                yield return new WaitForSeconds(7);
                main.gameObject.SetActive(true);
                fadeout.gameObject.SetActive(true);
                this.GetComponent<Animator>().SetBool("catch", false);
                yield return new WaitForSeconds(0.5f);
                this.gameObject.GetComponent<Animator>().SetBool("default", true);
                yield return new WaitForSeconds(0.2f);
                this.gameObject.GetComponent<Animator>().SetBool("default", false);
                yield return new WaitForSeconds(0.8f);
            }
            else
            {
                StartCoroutine(textScroll("failed to traced enemy Spymon at this time."));
                yield return new WaitForSeconds(4);
                this.GetComponent<Animator>().SetBool("catch", false);
            }
        }
    }


    public IEnumerator defendMenu()
    {
        this.gameObject.GetComponent<Animator>().SetBool("menu", false);
        this.GetComponent<Animator>().SetBool("defend", true);
        yield return new WaitForSeconds(0.5f);
        this.GetComponent<Animator>().SetBool("defend", false);
    }

    public IEnumerator Intro()
    {
        cameraAudio.clip = battle;
        cameraAudio.Play();
        hint.gameObject.SetActive(true);
        parent.GetComponent<Animator>().SetBool("intro", true);
        yield return new WaitForSeconds(0.5f);
        parent.GetComponent<Animator>().SetBool("intro", false);
    }

    public void enableSpymon()
    {
        spymon.enabled = true;
        StartCoroutine(textScroll("A Wild Spymon appeared!"));
    }

    public void disableSpymon()
    {
        spymon.enabled = false;
    }

    public void opacity()
    {
        Color temp = spymon.gameObject.GetComponent<Image>().color;
        temp.a = 0;
        spymon.gameObject.GetComponent<Image>().color = temp;
    }

    public IEnumerator textScroll(string lineOfText)
    {
        int letter = 0;
        text.text = "";

        while (letter <= lineOfText.Length - 1)
        {
            text.text = text.text + lineOfText[letter];
            letter++;
            yield return new WaitForSeconds(0.04f);
        }
    }
}