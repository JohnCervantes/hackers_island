using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class FoodMenu : MonoBehaviour
{
    private FoodMenu instance;
    public Text totalText;
    private int sushiCount;
    private int chickenCount;
    private int cakeCount;
    private int noodlesCount;
    private int strawberryCount;
    private int pizzaCount;
    public GameObject canvas;
    public Text sushiCountText;
    public Text chickenCountText;
    public Text pizzaCountText;
    public Text noodlesCountText;
    public Text strawberryCountText;
    public Text cakeCountText;
    public GameObject sushi;
    public GameObject pizza;
    public GameObject cake;
    public GameObject chicken;
    public GameObject strawberry;
    public GameObject noodles;
    public GameObject checkout;
    private int total;
    private int totalPrivacy;
    public GameObject privacyRoot;
    public GameObject tipManager;
    GameObject clone;

    void Awake()
    {
        instance = this;
        total = 0;
        totalPrivacy = PlayerPrefs.GetInt("privacyAmmount");
        totalText.text = "Total: " + total.ToString();
    }

    /* prices: 
         chicken is 150
         pizza 50
         sushi 30
         strawberry 50
         cake 100
         noodles 20*/

    //PlayerPrefs.GetInt("privacyAmmount");
    //PlayerPrefs.SetInt("privacyAmmou");


    public void addPizza()
    {
        if (Input.GetMouseButtonDown(0))
        {
            total = total + 50;
            pizzaCount++;
            pizzaCountText.text = "X" + pizzaCount.ToString();
            updateTotalText();
        }
        else if (Input.GetMouseButtonDown(1))
        {
            if (pizzaCount > 0)
            {
                total = total - 50;
                pizzaCount--;
                pizzaCountText.text = "X" + pizzaCount.ToString();

                if (pizzaCount == 0)
                {
                    pizzaCountText.text = "";
                }
                updateTotalText();
            }
        }
    }


    public void addSushi()
    {
        if (Input.GetMouseButtonDown(0))
        {
            total = total + 30;
            sushiCount++;
            sushiCountText.text = "X" + sushiCount.ToString();
            updateTotalText();
        }
        else if (Input.GetMouseButtonDown(1))
        {
            if (sushiCount != 0)
            {
                total = total - 30;
                sushiCount--;
                sushiCountText.text = "X" + sushiCount.ToString();

                if (sushiCount == 0)
                {
                    sushiCountText.text = "";
                }
                updateTotalText();
            }
        }
    }

    public void addCake()
    {
        if (Input.GetMouseButtonDown(0))
        {
            total = total + 100;
            cakeCount++;
            cakeCountText.text = "X" + cakeCount.ToString();
            updateTotalText();
        }
        else if (Input.GetMouseButtonDown(1))
        {
            if (cakeCount != 0)
            {
                total = total - 100;
                cakeCount--;
                cakeCountText.text = "X" + cakeCount.ToString();

                if (cakeCount == 0)
                {
                    cakeCountText.text = "";
                }
                updateTotalText();
            }
        }
    }

    public void addStrawberry()
    {
        if (Input.GetMouseButtonDown(0))
        {
            total = total + 50;
            strawberryCount++;
            strawberryCountText.text = "X" + strawberryCount.ToString();
            updateTotalText();
        }
        else if (Input.GetMouseButtonDown(1))
        {
            if (strawberryCount != 0)
            {
                total = total - 50;
                strawberryCount--;
                strawberryCountText.text = "X" + strawberryCount.ToString();

                if (strawberryCount == 0)
                {
                    strawberryCountText.text = "";
                }
                updateTotalText();
            }
        }
    }

    public void addNoodles()
    {
        if (Input.GetMouseButtonDown(0))
        {
            total = total + 20;
            noodlesCount++;
            noodlesCountText.text = "X" + noodlesCount.ToString();
            updateTotalText();
        }
        else if (Input.GetMouseButtonDown(1))
        {
            if (noodlesCount != 0)
            {
                total = total - 20;
                noodlesCount--;
                noodlesCountText.text = "X" + noodlesCount.ToString();

                if (noodlesCount == 0)
                {
                    noodlesCountText.text = "";
                }
                updateTotalText();
            }
        }
    }

    public void addChicken()
    {
        if (Input.GetMouseButtonDown(0))
        {
            total = total + 150;
            chickenCount++;
            chickenCountText.text = "X" + chickenCount.ToString();
            updateTotalText();
        }
        else if (Input.GetMouseButtonDown(1))
        {
            if (chickenCount != 0)
            {
                total = total - 150;
                chickenCount--;
                chickenCountText.text = "X" + chickenCount.ToString();

                if (chickenCount == 0)
                {
                    chickenCountText.text = "";
                }
                updateTotalText();
            }
        }
    }

    void updateTotalText()
    {
        if (total > totalPrivacy)
        {
            totalText.text = "Total: <color=red>" + total.ToString() + "</color>";
        }
        else
        {
            totalText.text = "Total: " + total.ToString();
        }
    }

    public void activateCheckOut()
    {
        checkout.SetActive(true);
        if (total == 0)
        {
            checkout.transform.GetChild(0).gameObject.GetComponent<Text>().text = "Select a food";
            checkout.transform.GetChild(1).gameObject.SetActive(true);
            checkout.transform.GetChild(2).gameObject.SetActive(false);
            checkout.transform.GetChild(3).gameObject.SetActive(false);
        }
        else if (total <= totalPrivacy && total > 0)
        {
            checkout.transform.GetChild(0).gameObject.GetComponent<Text>().text =
                "confirm purchase of <color=red>" + total.ToString() + "</color> privacy?";
            checkout.transform.GetChild(1).gameObject.SetActive(false);
            checkout.transform.GetChild(2).gameObject.SetActive(true);
            checkout.transform.GetChild(3).gameObject.SetActive(true);

            //PlayerPrefs.GetInt("privacyAmmount");
            //PlayerPrefs.SetInt("privacyAmmou");
        }
        else
        {
            checkout.transform.GetChild(0).gameObject.GetComponent<Text>().text = "You don't have enough privacy!";
            checkout.transform.GetChild(1).gameObject.SetActive(true);
            checkout.transform.GetChild(2).gameObject.SetActive(false);
            checkout.transform.GetChild(3).gameObject.SetActive(false);
        }
    }

    public void purchase()
    {
        tipManager.GetComponent<TipManager>().activateDragFoodTip();
        privacyRoot.GetComponent<PrivacyStateHandler>().reduceScore(total);
        spawnFoods();
        resetValues();
        checkout.SetActive(false);
        resetValues();
    }

    public void disableCheckout()
    {
        checkout.SetActive(false);
    }

    public void resetValues()
    {
        totalText.text = "";
        sushiCount = 0;
        chickenCount = 0;
        cakeCount = 0;
        noodlesCount = 0;
        strawberryCount = 0;
        pizzaCount = 0;
        sushiCountText.text = "";
        chickenCountText.text = "";
        pizzaCountText.text = "";
        noodlesCountText.text = "";
        strawberryCountText.text = "";
        cakeCountText.text = "";
        total = 0;
    }

    void spawnFoods()
    {
        float yPos = 600f;

        for (int i = 0; i < noodlesCount; i++)
        {
            float xPos = Random.Range(-533.65f, 533.65f);
            clone = Instantiate(noodles) as GameObject;
            clone.transform.SetParent(canvas.transform);
            clone.transform.localScale = noodles.transform.localScale;
            clone.transform.localPosition = new Vector3(xPos, yPos, -50);
        }

        for (int i = 0; i < sushiCount; i++)
        {
            float xPos = Random.Range(-533.65f, 533.65f);
            clone = Instantiate(sushi) as GameObject;
            clone.transform.SetParent(canvas.transform);
            clone.transform.localScale = sushi.transform.localScale;
            clone.transform.localPosition = new Vector3(xPos, yPos, -50);
        }

        for (int i = 0; i < cakeCount; i++)
        {
            float xPos = Random.Range(-533.65f, 533.65f);
            clone = Instantiate(cake) as GameObject;
            clone.transform.SetParent(canvas.transform);
            clone.transform.localScale = cake.transform.localScale;
            clone.transform.localPosition = new Vector3(xPos, yPos, -50);
        }

        for (int i = 0; i < chickenCount; i++)
        {
            float xPos = Random.Range(-533.65f, 533.65f);
            clone = Instantiate(chicken) as GameObject;
            clone.transform.SetParent(canvas.transform);
            clone.transform.localScale = chicken.transform.localScale;
            clone.transform.localPosition = new Vector3(xPos, yPos, -50);
        }

        for (int i = 0; i < strawberryCount; i++)
        {
            float xPos = Random.Range(-533.65f, 533.65f);
            clone = Instantiate(strawberry) as GameObject;
            clone.transform.SetParent(canvas.transform);
            clone.transform.localScale = strawberry.transform.localScale;
            clone.transform.localPosition = new Vector3(xPos, yPos, -50);
        }

        for (int i = 0; i < pizzaCount; i++)
        {
            float xPos = Random.Range(-533.65f, 533.65f);
            clone = Instantiate(pizza) as GameObject;
            clone.transform.SetParent(canvas.transform);
            clone.transform.localScale = pizza.transform.localScale;
            clone.transform.localPosition = new Vector3(xPos, yPos, -50);
        }
        /* clone = Instantiate(goldBird) as GameObject;
         clone.transform.SetParent(canvas.transform);
         clone.transform.localScale = goldBird.transform.localScale;
         clone.transform.localPosition = new Vector3(xPos, -449.75f, -50);
         clone.GetComponent<Rigidbody2D>().velocity = new Vector3(0f, Random.Range(13, 17), -50);
         camera.GetComponent<TransitionHandler>().playSpawnChirpSound();
         Destroy(clone, 5);*/
    }
}