using UnityEngine;
using System.Collections;

public class Rotate : MonoBehaviour
{
    public float RotationSpeed;

    private void Start()
    {
        
    }

    private void Update()
    {
        transform.Rotate(new Vector3 (0, RotationSpeed, 0) * Time.deltaTime);
    }
}