using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class ScoringSystem : MonoBehaviour
{
    public static int score;
    public TMP_Text scoreText;


    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        scoreText.text = "Score: " + score;
    }

   /* private void OnCollisionEnter(Collision collision)
    {
       /* if(collision.gameObject.tag == "Enemy")
        {
            score++;
            scoreText.text = "Score: " + score;
        }
    }*/
}
