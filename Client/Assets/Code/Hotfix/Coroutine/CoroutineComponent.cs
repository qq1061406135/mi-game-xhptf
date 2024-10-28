using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class CoroutineComponent : MonoBehaviour
{

    public Coroutine DoCoroutine(IEnumerator routine)
    {
        Coroutine c = StartCoroutine(routine);
        return c;
    }
    /// <summary>
    /// �ȴ��೤ʱ��ص�   ��λ��
    /// </summary>
    /// <param name="time"></param>
    /// <param name="action"></param>
    /// <returns></returns>
    public void DeltaTime(float time, Action action)
    {
        StartCoroutine(_DeltaTime(time, action));
    }

    IEnumerator _DeltaTime(float time, Action action)
    {
        yield return new WaitForSeconds(time);
        action();
    }
}

