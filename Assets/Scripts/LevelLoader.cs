using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;


public class LevelLoader : MonoBehaviour
{
    public Image slider;
    public Animator player;
    public GameObject platform;

    public void LoadLevel(string scene)
    {
        StartCoroutine(LoadAsynchronously(scene));
    }
    

    IEnumerator LoadAsynchronously(string scene)
    {
        if (platform.gameObject != null)
        {
            platform.gameObject.SetActive(false);
        }
        yield return new WaitForSeconds(1);
        AsyncOperation operation = SceneManager.LoadSceneAsync(scene);
        operation.allowSceneActivation = false;
      

        while (operation.isDone == false)
        {
            player.SetBool("run", true);
            slider.fillAmount = operation.progress;
            if (operation.progress == 0.9f)
            {
              
                slider.fillAmount = 1;
                operation.allowSceneActivation = true;
               
            }
            yield return null;
        }
    } 
}
