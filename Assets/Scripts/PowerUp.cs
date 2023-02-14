using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PowerUp : MonoBehaviour
{
    public GameObject[] powerups;


    public int powerupCount;

    private int StartTime = 4;
    private int spawnTime;


    //public EnemyFollow _enemyFollow;

    private void Start()
    {
        spawnTime = Random.Range(5, 12);
        StartCoroutine(spawnPowerups());    
    }

    private void Update()
    {
        //_enemyFollow = agent.GetComponent<EnemyFollow>();
        //agent = GameObject.FindGameObjectWithTag("Enemy");
    }


    IEnumerator spawnPowerups()
    {
        yield return new WaitForSeconds(StartTime);
        while (powerupCount > 0)
        {
            for (int i = 0; i < powerupCount; i++)
            {
                GameObject collectibles = powerups[Random.Range(0, powerups.Length)];
                Vector3 spawnPosition = new Vector3(Random.Range(-14, 14), 12, Random.Range(-14, 14));
                Quaternion spawnRotation = Quaternion.identity;
                Instantiate(collectibles, spawnPosition, spawnRotation);
                yield return new WaitForSeconds(spawnTime);

            }
        }
    }
}
