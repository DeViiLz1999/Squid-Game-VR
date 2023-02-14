using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class TargetEnemy : MonoBehaviour
{
    private NavMeshAgent _navmesh;

    public bool isDestroy = false;

    //public AudioSource source;
    //public AudioClip freezeSound;

    public void TakeDamage()
    {
        Die();
    }

   public void Die()
    {
        if(gameObject.tag == "Enemy")
        {
            ScoringSystem.score += 1;
        }

        isDestroy = true;
        Destroy(gameObject);
    }
}

