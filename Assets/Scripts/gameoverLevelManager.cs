using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;

public class gameoverLevelManager : MonoBehaviour {

    public string name; 
    

    public void loadScene(string name)
    {
       
        SceneManager.LoadScene(name);

    }
}
