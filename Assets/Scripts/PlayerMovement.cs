using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerMovement : MonoBehaviour
{

    public float playerSpeed = 10;
    public int playerJumpPower = 1250;
    public float moveX;
    public Animator playerAnim;
    private bool isGrounded = false;
    private float jumpForce = 400;
    private Vector3 origPos;
    public GameObject rightBullet;
    public GameObject leftBullet;
    private Transform firePosLeft;
    private Transform firePosRight;
    public bool canShoot = false;
    public GameObject gunHint;
    public AudioSource canvasAudio;
    public AudioClip shoot;
    public AudioClip gb;
    private float horizontal;
    private bool isShooting;
  

    void Awake()
    {
        origPos = this.gameObject.transform.position;
        firePosLeft = transform.Find("FirePosLeft");
        firePosRight = transform.Find("FirePosRight");
    }

    // Update is called once per frame
    void Update()
    {
        horizontal = Input.GetAxis("Horizontal");
 
        if (Input.GetKeyDown(KeyCode.Space) && isGrounded)
        {
            isGrounded = false;
            this.gameObject.GetComponent<Rigidbody2D>().AddForce(new Vector2(0, jumpForce));
            playerAnim.SetTrigger("jump");
        }

        if (Input.GetKeyUp(KeyCode.Space))
        {
            playerAnim.ResetTrigger("jump");
        }

        if (canShoot == true)
        { 
            if (Input.GetKeyDown(KeyCode.Mouse0))
            {       
                if (isShooting == false)
                {
                    playerAnim.SetTrigger("fire");
                    canvasAudio.PlayOneShot(shoot);
                    StartCoroutine("fire");
                }
            }
        }

        if (horizontal > -0.1f)
        {
            this.gameObject.GetComponent<SpriteRenderer>().flipX = false;
        }
        else if (horizontal < -0.1f)
        {
            this.gameObject.GetComponent<SpriteRenderer>().flipX = true;
        }

        PlayerMove(horizontal);
        playerAnim.SetFloat("speed", Mathf.Abs(horizontal));
        playerAnim.SetBool("grounded", isGrounded);

    }

    void PlayerMove(float hor)
    {

        this.gameObject.GetComponent<Rigidbody2D>().velocity =
            new Vector2(hor * playerSpeed, this.gameObject.GetComponent<Rigidbody2D>().velocity.y);
    }

   

    void OnCollisionEnter2D(Collision2D hit)
    {
        if (hit.gameObject.tag == "ground")
        {
            isGrounded = true;
        }
        else if (hit.gameObject.tag == "deadzone")
        {
            this.gameObject.transform.position = origPos;
        }
        else if (hit.gameObject.tag == "gunblaster")
        {
            canvasAudio.PlayOneShot(gb);
            Destroy(hit.gameObject);
            canShoot = true;
            gunHint.SetActive(true);
        }
    }

    void OnCollisionExit2D(Collision2D hit)
    {
        if (hit.gameObject.tag == "ground")
        {
            isGrounded = false;
        }
    }

    IEnumerator fire()
    {
        isShooting = true;
        if (horizontal < -0.1f)
        {
            Instantiate(leftBullet, firePosLeft.position, Quaternion.identity);
        }
        else if (horizontal > -0.1f)
        {
            Instantiate(rightBullet, firePosRight.position, Quaternion.identity);
        }
        yield return null;
        isShooting = false;
    }

    IEnumerator hit()
    {
        this.GetComponent<SpriteRenderer>().color = new Color32(255, 0, 0, 190);
        yield return new WaitForSeconds(0.1f);
        this.GetComponent<SpriteRenderer>().color = new Color32(255, 255, 255, 255);
        yield return new WaitForSeconds(0.1f);
        this.GetComponent<SpriteRenderer>().color = new Color32(255, 0, 0, 190);
        yield return new WaitForSeconds(0.1f);
        this.GetComponent<SpriteRenderer>().color = new Color32(255, 255, 255, 255);
    }

}

