using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnManager : MonoBehaviour
{
    public GameObject theContestant;
    public GameObject player;
    public GameObject walls;

    public float startWaitTime, spawnWaitTime;

    private int enemyCount = 100;

    private Vector3 spawnPosition;
    private float radius, x ,z;

    [SerializeField]
    private float offset;

    float dist;

    private void Awake()
    {
         dist = Vector3.Distance(player.transform.position, walls.transform.position);
    }
    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(SpawnContestants());
    }

    // Update is called once per frame
    void Update()
    {
        //spawnWaitTime = Mathf.Pow(0.9f, Time.timeSinceLevelLoad / 1000f);
        spawnWaitTime = Mathf.MoveTowards(2f, 0, Time.timeSinceLevelLoad / 750f);
    }

    IEnumerator SpawnContestants()
    {
        yield return new WaitForSeconds(startWaitTime);
        while (true)
        {
            radius = dist + offset;
            offset = Random.Range(10, 25);

            for (int i = 0; i < enemyCount; i++)
            {
                x = Random.Range(-radius, radius);
                z = Mathf.Sqrt((radius * radius) - (x * x));

                if(Random.Range(0,100) < 25)
                {
                    z = -z;
                }

                spawnPosition = new Vector3(x, 0.16f, z);
                Instantiate(theContestant , spawnPosition, Quaternion.identity);
                yield return new WaitForSeconds(spawnWaitTime);
            }
        }
    }
}