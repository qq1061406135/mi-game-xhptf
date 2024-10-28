using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameScene : MonoBehaviour
{
    private void Awake()
    {
        if (!GameEntry.IsInit)
        {
            return;
        }
        OnAwake();
    }

    private void Start()
    {
        if (!GameEntry.IsInit)
        {
            return;
        }
        OnStart();
    }

    public virtual void OnAwake()
    {

    }

    public virtual void OnStart()
    {

    }


}
