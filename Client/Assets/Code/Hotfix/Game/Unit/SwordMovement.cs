using UnityEngine;

public class SwordMovement : MonoBehaviour
{
    public Transform character;
    public Transform target; // Ŀ���� Transform
    public Vector3 targetPos;
    public float rotationSpeed = 50f;
    public float radius = 2f;
    public float flightSpeed = 10f; // �ɽ�����Ŀ�����ٶ�
    public AnimationCurve flightCurve; // �����˶��Ķ�������

    private bool isFlyingToTarget = false;
    private Vector3 startPosition;
    private float flightTime;
    private float totalFlightTime = 1f; // �ɽ�����Ŀ������ʱ��

    public void SetTarget(Vector3 pos)
    {
        targetPos  = pos;
        isFlyingToTarget = true;
    }

    void Update()
    {
        if(isFlyingToTarget)
        {
            if(target != null)
            {
                targetPos = target.position;
            }
        }


        if (!isFlyingToTarget)
        {
            //// Χ�ƽ�ɫ��ת
            //transform.RotateAround(character.position, Vector3.up, rotationSpeed * Time.deltaTime);

            //// ���ַɽ����ɫ�ľ���
            //Vector3 desiredPosition = (transform.position - character.position).normalized * radius + character.position;
            //transform.position = desiredPosition;

            //// ����Ƿ���Ŀ��㣨���Ը�����Ҫ��Ӽ���߼���
            //if (Input.GetKeyDown(KeyCode.Space)) // ���¿ո����ʼ����Ŀ���
            //{
            //    isFlyingToTarget = true;
            //    startPosition = transform.position;
            //    flightTime = 0f;
            //}
        }
        else
        {
            // ����Ŀ���
            flightTime += Time.deltaTime / totalFlightTime;
            float curveValue = flightCurve.Evaluate(flightTime);
            transform.position = Vector3.Lerp(startPosition, targetPos, flightTime) + Vector3.up * curveValue;

            // �ɽ�����Ŀ����ֹͣ����
            if (flightTime >= 1f)
            {
                isFlyingToTarget = false;
            }
        }
    }
}
