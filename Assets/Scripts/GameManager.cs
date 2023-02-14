using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.AI;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
	public static GameManager gm;

	public GameObject gameOverOutline;
	public GameObject youWinOutline;

	public GameObject RestartLevelButtons_GameOver;
	//public GameObject QuitLevelButtons_GameOver;
    public GameObject RestartLevelButtons_YouWin;
    //public GameObject QuitLevelButtons_YouWin;

    public GameObject SpawnContestants;
    public GameObject SpawnPowerups;

	public AudioSource MainGameAudioSource;
    public AudioSource EndGameAudioSource;
    public AudioClip YouWinAudioClip;

   // private List<GameObject> contestants = new List<GameObject>();

    private GameObject[] enemies;

    public GameObject[] powerups;

	public float TimeLeft;

	public TMP_Text TimerText;

	private bool TimerOn = false;
    public bool isGameOver = false;


    void Start()
    {

        TimerOn = true;

        if (gm == null)
        {
            gm = this.gameObject.GetComponent<GameManager>();
        }

        if(gameOverOutline)
        {
            gameOverOutline.SetActive(false);
        }

        if(youWinOutline)
        {
            youWinOutline.SetActive(false);
        }

        if(RestartLevelButtons_GameOver)
        {
            RestartLevelButtons_GameOver.SetActive(false);
        }

        /*if(QuitLevelButtons_GameOver)
        {
            QuitLevelButtons_GameOver.SetActive(false);
        }*/

        if (RestartLevelButtons_YouWin)
        {
            RestartLevelButtons_YouWin.SetActive(false);
        }

        /*if (QuitLevelButtons_YouWin)
        {
            QuitLevelButtons_YouWin.SetActive(false);
        }*/


        SpawnContestants.SetActive(true);
        powerups[0].SetActive(true);
        powerups[1].SetActive(true);
        powerups[2].SetActive(true);
        SpawnPowerups.SetActive(true);

        EndGameAudioSource.volume = 0;


    }

    void Update()
    {

        CheckTimer();

        enemies = GameObject.FindGameObjectsWithTag("Enemy");


        if (!isGameOver)
        {
            /*if(isGameOver == true)
            {
                EndGame();
            }*/

            if(TimeLeft <= 0)
            {
                Sucess();
            }
        }

    }


    void CheckTimer()
    {
        if (TimerOn)
        {
            if (TimeLeft > 0)
            {
                TimeLeft -= Time.deltaTime;
                updateTimer(TimeLeft);
            }
            else
            {
                TimeLeft = 0;
                TimerOn = false;
            }
        }
    }

    void updateTimer(float currentTime)
    {
        currentTime += 1;

        float minutes = Mathf.FloorToInt(currentTime / 60);
        float seconds = Mathf.FloorToInt(currentTime % 60);

        TimerText.text = string.Format("{00:00} : {1:00}", minutes, seconds);
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Enemy")
        {
            Debug.Log("Game Over");
            isGameOver = true;
            //Time.timeScale = 0;

            TimerOn = false;

            other.gameObject.GetComponent<NavMeshAgent>().isStopped = true;   
            other.gameObject.GetComponent<Animator>().enabled = false;

            if(isGameOver == true)
            {
                foreach (GameObject enemy in enemies)
                {
                    enemy.SetActive(false);
                }

                powerups[0].SetActive(false);
                powerups[1].SetActive(false);
                powerups[2].SetActive(false);
                SpawnContestants.SetActive(false);
                SpawnPowerups.SetActive(false);
            }



            if (gameOverOutline)
            {
                gameOverOutline.SetActive(true);
            }

            if(youWinOutline)
            {
                youWinOutline.SetActive(false);
            }

            if (RestartLevelButtons_GameOver)
            {
                RestartLevelButtons_GameOver.SetActive(true);
            }

            /*if (QuitLevelButtons_GameOver)
            {
                QuitLevelButtons_GameOver.SetActive(true);
            }*/

            if (MainGameAudioSource)
            {
                MainGameAudioSource.pitch = 0.5f;
            }
        }
    }

    void Sucess()
    {
        //Debug.Log("You win");

        if(gameOverOutline)
        {
            gameOverOutline.SetActive(false);
        }

        if (youWinOutline)
        {
            youWinOutline.SetActive(true);
        }

        if (RestartLevelButtons_YouWin)
        {
            RestartLevelButtons_YouWin.SetActive(true);
        }

        /*if (QuitLevelButtons_YouWin)
        {
            QuitLevelButtons_YouWin.SetActive(true);
        }*/

        if (MainGameAudioSource)
        {
            MainGameAudioSource.Stop();
            EndGameAudioSource.volume = 0.4f;
        }

        foreach (GameObject enemy in enemies)
        {
            enemy.SetActive(false);
        }

        powerups[0].SetActive(false);
        powerups[1].SetActive(false);
        powerups[2].SetActive(false);
        SpawnContestants.SetActive(false);
        SpawnPowerups.SetActive(false);

    }

    public void RestartGame()
    {
        //Application.LoadLevel(0);
        SceneManager.LoadScene(1);
    }
    public void QuitGame()
    {
        Application.Quit();
    }

}
