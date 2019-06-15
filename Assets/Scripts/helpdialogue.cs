using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class helpdialogue : MonoBehaviour {

    public Text text;
    private string[] dialogue = new string[4];
    int count;

    private void Start()
    {
        count = 0;
        set();
        InvokeRepeating("changeDialogue", 1f, 5.0f);
      
    }

    void set()
    {
        dialogue[0] = "HELP!";
        dialogue[1] = "SAVE \n" + "ME!";
        dialogue[2] = "<3";
        dialogue[3] = ". . . ";
    }

    void changeDialogue()
    {
        
        StartCoroutine(textScroll(dialogue[count]));
        count++;


        if (count == 4)
        {
            count = 0;
        }
    }


    public IEnumerator textScroll(string lineOfText)
    {
        int letter = 0;
        text.text = "";
        
        while (letter <= lineOfText.Length - 1)
        {
            text.text = text.text + lineOfText[letter];
            letter++;
            yield return new WaitForSeconds(0.30f);
        }
      
    }   


}
