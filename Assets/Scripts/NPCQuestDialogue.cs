using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class NPCQuestDialogue : MonoBehaviour
{
    private int count;
    private bool isBlinking;
    private string cursor;
    public Text dialogueText;
    private bool isTyping;
    private bool cancelTyping;
    private string[] forteScript;
    public AudioSource canvas;
    public AudioClip forte;


    void Awake()
    {
        isBlinking = true;
        count = 0;

        forteScript = new string[]
        {
            "Lets Play!",
            "Which game do you want to play?",
            "good job! I'll definitely win next time.",
            "ha ha! you can't beat me."
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
        int letter = 0;
        dialogueText.text = "_";

        isTyping = true;
        cancelTyping = false;
        while (isTyping && !cancelTyping && (letter <= lineOfText.Length - 1))
        {
            if (lineOfText[letter] != ' ')
            {
                canvas.PlayOneShot(forte);
            }

            dialogueText.text = dialogueText.text.Remove(dialogueText.text.Length - 1) + lineOfText[letter] + cursor;
            letter++;
            yield return new WaitForSeconds(0.04f);

            if (letter == lineOfText.Length)
            {
                dialogueText.text = dialogueText.text.Remove(dialogueText.text.Length - 1);
            }
        }


        /* //if count is == 10 etc
         while (letter == lineOfText.Length)
         {
             string temp = dialogueText.text.Remove(dialogueText.text.Length - 1) + cursor;
             dialogueText.text = temp;
             yield return new WaitForSeconds(0.01f);
         }*/


        isTyping = false;
        cancelTyping = false;
    }

    public void loadDialogue()
    {
        StartCoroutine("cursorBlink");
        StartCoroutine(textScroll(forteScript[0]));
    }
}