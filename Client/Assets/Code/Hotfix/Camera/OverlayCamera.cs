using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Camera))]
public class OverlayCamera : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        if (GameEntry.IsInit)
            GameEntry.ManCamera.AddCamera(GetComponent<Camera>());
    }

    private void OnDestroy()
    {
        if (GameEntry.IsInit)
            GameEntry.ManCamera.RemoveCamera(GetComponent<Camera>());
    }
}