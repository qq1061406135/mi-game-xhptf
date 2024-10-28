using System.Collections;
using System.Collections.Generic;
using System.Net;
using UnityEngine;

public class Skill1 : MonoBehaviour
{
    public GameObject swordPrefab; // ����Ԥ����
    public int level = 1; // ��ɫ�ĵȼ�
    public float radius = 5.0f; // ���İ뾶
    public float minRadius = 2.0f;//������С�뾶
    public float speed = 5.0f; // �����ٶ�
    public float rotationSpeed = 20.0f; // ������ת�ٶ�
    public float launchTime = 3.0f; // ���ķ���ʱ��

    void Start()
    {
        // ���ݵȼ�������
        int swordCount = Mathf.Min(level + 5, 12);
        float f = radius - minRadius;
        for (int i = 0; i < swordCount; i++)
        {
            // ��3��5�ķ�Χ�����ʵ������
            // ��3��5�ķ�Χ�����ʵ������
            //float randomRadius = Random.Range(0.0f, radius - minRadius);
            //Vector2 randomPos = (Random.insideUnitCircle.normalized * minRadius) + (Random.insideUnitCircle * randomRadius);
            //Log.Debug(randomPos.ToString());

            Vector2 randomPos = Random.insideUnitCircle.normalized * minRadius + Random.insideUnitCircle.normalized * Random.Range(0,f);
            // ���ʵ������
            //Vector2 randomPos = Random.insideUnitCircle * (radius - minRadius);
            GameObject sword = Instantiate(swordPrefab,transform.position + new Vector3(randomPos.x, randomPos.y, 0), Quaternion.identity);
            sword.transform.parent = transform;
            // ����������ת�ͷ���
            StartCoroutine(RotateAndLaunch(sword));
        }
    }

    IEnumerator RotateAndLaunch(GameObject sword)
    {
        float time = 0.0f;
        while (time < launchTime)
        {
            // �ý�Χ�ƽ�ɫ��ת
            Vector2 relativePos = sword.transform.position - transform.position;
            relativePos = Quaternion.Euler(0, 0, rotationSpeed * Time.deltaTime) * relativePos;
            sword.transform.position = transform.position + new Vector3(relativePos.x, relativePos.y, 0);
            sword.transform.up = -relativePos;

            time += Time.deltaTime;
            yield return null;
        }


        //Vector3 targetPos = new Vector3(5, 5, 0); // Ŀ��λ�ã������滻�ɶ�̬Ŀ��
        //Vector3 startPos = sword.transform.position;

        //// ������Ƶ��λ��
        //Vector3 directionToTarget = (targetPos - transform.position).normalized;
        //Vector3 directionToSword = (startPos - transform.position).normalized;

        //// ��ȡ��ֱ�ڽ�ɫ���յ㷽�������
        //Vector3 perpendicular = Vector3.Cross(directionToTarget, Vector3.forward).normalized;

        //// ȷ�����Ƶ�λ��Ϊ�����յ���е㲢ƫ�ƴ�ֱ����
        //float randomSign = Vector3.Dot(directionToSword, perpendicular) > 0 ? 1 : -1;
        //Vector3 controlPoint = (startPos + targetPos) / 2 + perpendicular * randomSign * 5; // ����ƫ����

        //// �������ƫ��
        //startPos += perpendicular * randomSign * 2;
        //speed = 0.5f;

        //// �Ƚ��ɽ��ƶ���startPos��ͬʱ��������
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


        //// ���ƶ���Ŀ���
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


        Vector3 targetPos = new Vector3(5, 5, 0); // Ŀ��λ�ã������滻�ɶ�̬Ŀ��
        Vector3 startPos = sword.transform.position;

        // ������Ƶ��λ��
        Vector3 directionToTarget = (targetPos - transform.position).normalized;
        Vector3 directionToSword = (startPos - transform.position).normalized;

        // ��ȡ��ֱ�ڽ�ɫ���յ㷽�������
        Vector3 perpendicular = Vector3.Cross(directionToTarget, Vector3.forward).normalized;

        // ȷ�����Ƶ�λ��Ϊ�����յ���е㲢ƫ�ƴ�ֱ����
        float randomSign = Vector3.Dot(directionToSword, perpendicular) > 0 ? 1 : -1;
        Vector3 controlPoint = (startPos + targetPos) / 2 + perpendicular * randomSign * 5; // ����ƫ����
        // �������ƫ��
        startPos += perpendicular * randomSign ;

        // �Ƚ��ɽ��ƶ���startPos��ͬʱ��������
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

        // ���ƶ���Ŀ���
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
