using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Pickup : MonoBehaviour
{

    private AudioSource source;

    public AudioClip CollectSound1;
    public AudioClip CollectSound2;
    public AudioClip CollectSound3;

    private void Start()
    {
        source = GameObject.Find("Main Camera").GetComponent<AudioSource>();
    }
    public void PickUp()
    {
        Destroy(gameObject);
        Debug.Log("Pickup");


        if (gameObject.tag == "2x")
        {
            source.PlayOneShot(CollectSound1);
            ScoringSystem.score += 2;
        }

        if (gameObject.tag == "4x")
        {
            source.PlayOneShot(CollectSound2);
            ScoringSystem.score += 4;
        }

        if (gameObject.tag == "6x")
        {
            source.PlayOneShot(CollectSound3);
            ScoringSystem.score += 6;
        }

    }
}
