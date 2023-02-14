using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class EnemyFollow : MonoBehaviour
{
    public NavMeshAgent contestant;
    //public Transform player;

    private GameObject target;

    public Rigidbody rb;

    private float speed;
    private Animator agentAnimator;

    [SerializeField]
    private float minX = 0.10f, maxX = 0.60f, minY = 2.0f, maxY = 10f;

    // Start is called before the first frame update
    [System.Obsolete]
    void Start()
    {
        rb = GetComponent<Rigidbody>();
        target = GameObject.FindWithTag("Player");
        GetComponent<NavMeshAgent>().speed = Random.RandomRange(Random.Range(minX,maxX), Random.Range(minY,maxY));
        agentAnimator = GetComponent<Animator>();
    }

    // Update is called once per frame
    void Update()
    {
        // Sets the destination for the agent
        contestant.SetDestination(target.transform.position * speed * Time.deltaTime);

        // Sets the animation for the agent
        agentAnimator.SetFloat("Blend", contestant.speed);

    }

    void Debug22()
    {
        if(transform.position == target.transform.position)
        {
            Debug.Log("Game Over");
        }
    }

}
