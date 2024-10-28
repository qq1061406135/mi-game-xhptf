using System.Collections;
using System.Collections.Generic;
using System.Net;
using UnityEngine;

public class Skill1 : MonoBehaviour
{
    public GameObject swordPrefab; // 剑的预制体
    public int level = 1; // 角色的等级
    public float radius = 5.0f; // 剑的半径
    public float minRadius = 2.0f;//剑的最小半径
    public float speed = 5.0f; // 剑的速度
    public float rotationSpeed = 20.0f; // 剑的旋转速度
    public float launchTime = 3.0f; // 剑的发射时间

    void Start()
    {
        // 根据等级创建剑
        int swordCount = Mathf.Min(level + 5, 12);
        float f = radius - minRadius;
        for (int i = 0; i < swordCount; i++)
        {
            // 在3到5的范围内随机实例化剑
            // 在3到5的范围内随机实例化剑
            //float randomRadius = Random.Range(0.0f, radius - minRadius);
            //Vector2 randomPos = (Random.insideUnitCircle.normalized * minRadius) + (Random.insideUnitCircle * randomRadius);
            //Log.Debug(randomPos.ToString());

            Vector2 randomPos = Random.insideUnitCircle.normalized * minRadius + Random.insideUnitCircle.normalized * Random.Range(0,f);
            // 随机实例化剑
            //Vector2 randomPos = Random.insideUnitCircle * (radius - minRadius);
            GameObject sword = Instantiate(swordPrefab,transform.position + new Vector3(randomPos.x, randomPos.y, 0), Quaternion.identity);
            sword.transform.parent = transform;
            // 启动剑的旋转和发射
            StartCoroutine(RotateAndLaunch(sword));
        }
    }

    IEnumerator RotateAndLaunch(GameObject sword)
    {
        float time = 0.0f;
        while (time < launchTime)
        {
            // 让剑围绕角色旋转
            Vector2 relativePos = sword.transform.position - transform.position;
            relativePos = Quaternion.Euler(0, 0, rotationSpeed * Time.deltaTime) * relativePos;
            sword.transform.position = transform.position + new Vector3(relativePos.x, relativePos.y, 0);
            sword.transform.up = -relativePos;

            time += Time.deltaTime;
            yield return null;
        }


        //Vector3 targetPos = new Vector3(5, 5, 0); // 目标位置，可以替换成动态目标
        //Vector3 startPos = sword.transform.position;

        //// 计算控制点的位置
        //Vector3 directionToTarget = (targetPos - transform.position).normalized;
        //Vector3 directionToSword = (startPos - transform.position).normalized;

        //// 获取垂直于角色到终点方向的向量
        //Vector3 perpendicular = Vector3.Cross(directionToTarget, Vector3.forward).normalized;

        //// 确定控制点位置为起点和终点的中点并偏移垂直方向
        //float randomSign = Vector3.Dot(directionToSword, perpendicular) > 0 ? 1 : -1;
        //Vector3 controlPoint = (startPos + targetPos) / 2 + perpendicular * randomSign * 5; // 增加偏移量

        //// 增加起点偏移
        //startPos += perpendicular * randomSign * 2;
        //speed = 0.5f;

        //// 先将飞剑移动到startPos，同时调整朝向
        //float moveTime = 0.0f;
        //Vector3 initialPos = sword.transform.position;
        //while (moveTime < 1.0f)
        //{
        //    moveTime += Time.deltaTime * speed;
        //    Vector3 newPos = Vector3.Lerp(initialPos, startPos, moveTime);
        //    Vector3 dir = newPos - sword.transform.position;
        //    float angle = Mathf.Atan2(dir.y, dir.x) * Mathf.Rad2Deg;
        //    sword.transform.rotation = Quaternion.Euler(0, 0, angle);
        //    sword.transform.position = newPos;
        //    yield return null;
        //}


        //// 逐渐移动到目标点
        //float t = 0;
        //while (t < 1)
        //{
        //    t += Time.deltaTime * speed;
        //    Vector3 m1 = Vector3.Lerp(startPos, controlPoint, t);
        //    Vector3 m2 = Vector3.Lerp(controlPoint, targetPos, t);
        //    Vector3 newPos = Vector3.Lerp(m1, m2, t);
        //    Vector3 dir = newPos - sword.transform.position;
        //    float angle = Mathf.Atan2(dir.y, dir.x) * Mathf.Rad2Deg;
        //    sword.transform.rotation = Quaternion.Euler(0, 0, angle);
        //    sword.transform.position = newPos;
        //    yield return null;
        //}


        Vector3 targetPos = new Vector3(5, 5, 0); // 目标位置，可以替换成动态目标
        Vector3 startPos = sword.transform.position;

        // 计算控制点的位置
        Vector3 directionToTarget = (targetPos - transform.position).normalized;
        Vector3 directionToSword = (startPos - transform.position).normalized;

        // 获取垂直于角色到终点方向的向量
        Vector3 perpendicular = Vector3.Cross(directionToTarget, Vector3.forward).normalized;

        // 确定控制点位置为起点和终点的中点并偏移垂直方向
        float randomSign = Vector3.Dot(directionToSword, perpendicular) > 0 ? 1 : -1;
        Vector3 controlPoint = (startPos + targetPos) / 2 + perpendicular * randomSign * 5; // 增加偏移量
        // 增加起点偏移
        startPos += perpendicular * randomSign ;

        // 先将飞剑移动到startPos，同时调整朝向
        float moveTime = 0.0f;
        Vector3 initialPos = sword.transform.position;
        while (moveTime < 1.0f)
        {
            moveTime += Time.deltaTime * speed;
            Vector3 newPos = Vector3.Lerp(initialPos, startPos, moveTime);
            Vector3 dir = newPos - sword.transform.position;
            float angle = Mathf.Atan2(dir.y, dir.x) * Mathf.Rad2Deg;
            Quaternion targetRotation = Quaternion.Euler(0, 0, angle);
            sword.transform.rotation = Quaternion.Lerp(sword.transform.rotation, targetRotation, moveTime);
            sword.transform.position = newPos;
            yield return null;
        }
        speed = 1;

        // 逐渐移动到目标点
        float t = 0;
        while (t < 1)
        {
            t += Time.deltaTime * speed;
            Vector3 m1 = Vector3.Lerp(startPos, controlPoint, t);
            Vector3 m2 = Vector3.Lerp(controlPoint, targetPos, t);
            Vector3 newPos = Vector3.Lerp(m1, m2, t);
            Vector3 dir = newPos - sword.transform.position;
            float angle = Mathf.Atan2(dir.y, dir.x) * Mathf.Rad2Deg;
            Quaternion targetRotation = Quaternion.Euler(0, 0, angle);
            sword.transform.rotation = Quaternion.Lerp(sword.transform.rotation, targetRotation, t);
            sword.transform.position = newPos;
            yield return null;
        }

    }
}
