using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveGemCom : MonoBehaviour
{

    private GameGemCom gem;

    private IEnumerator moveCoroutine;//得到其他指令时可以随时停止

    private void Awake()
    {
        gem = GetComponent<GameGemCom>();
    }
    
    public void Move(int newX,int newY,float time)
    {
        //gem.X = newX;
        //gem.Y = newY;
        //gem.transform.localPosition = gem.planeCom.CorrectPosition(newX, newY);
        if(moveCoroutine != null)
        {
            StopCoroutine(moveCoroutine);
        }
        moveCoroutine = MoveCoroutine(newX, newY, time);
        StartCoroutine(moveCoroutine);
    }

    private IEnumerator MoveCoroutine(int newX,int newY,float time)
    {
        gem.X = newX;
        gem.Y = newY;

        Vector3 startPos = transform.localPosition;
        Vector3 endPos = gem.planeCom.CorrectPosition(newX,newY);

        for(float t = 0;t < time; t += Time.deltaTime)
        {
            gem.transform.localPosition = Vector3.Lerp(startPos, endPos, t / time);
            yield return 0; 
        }

        gem.transform.localPosition = endPos;
    }
}
