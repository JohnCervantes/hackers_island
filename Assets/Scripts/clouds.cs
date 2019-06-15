using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class clouds : MonoBehaviour {

    public float Speed;
    private Renderer _renderer;

    private void Start()
    {
        
        _renderer = this.GetComponent<Renderer>();
        
    }

    private void Update()
    {
       
        if (this.gameObject.name == "BackGround")
        {
           
            _renderer.material.mainTextureOffset = new Vector2(Time.time * Speed, Time.time * Speed);
        }
        else
        _renderer.material.mainTextureOffset = new Vector2(Time.time *Speed, 0);
    }
}
