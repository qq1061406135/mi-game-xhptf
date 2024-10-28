using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum TriggerEventTag
{
    Player,
    Enemy
}

public class TriggerEventComponent : MonoBehaviour
{
    public TriggerEventTag eventTag;

    public Action<Transform> onTriggerEnterAction;
    public Action<Transform> onTriggerExitAction;
    public Action<Transform> onTriggerStayAction;

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if(collision.CompareTag(eventTag.ToString()))
        {
            onTriggerEnterAction?.Invoke(collision.transform);
        }
    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.CompareTag(eventTag.ToString()))
        {
            onTriggerExitAction?.Invoke(collision.transform);
        }
    }

    private void OnTriggerStay2D(Collider2D collision)
    {
        if (collision.CompareTag(eventTag.ToString()))
        {
            onTriggerStayAction?.Invoke(collision.transform);
        }
    }
}
