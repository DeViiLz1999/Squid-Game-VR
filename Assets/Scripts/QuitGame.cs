using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class QuitGame : MonoBehaviour
{
    public void QuitGameButton()
    {
        Debug.Log("Detect");
        Application.Quit();
    }
}
