using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraFollow : MonoBehaviour
{
    /// <summary>
    /// Ҫ����Ľ�ɫ
    /// </summary>
    public Transform target;
    /// <summary>
    /// ƽ���ƶ���ʱ��
    /// </summary>
    public float smoothTime = 0.3f;
    /// <summary>
    /// ���ڼ���ƽ���ƶ����ٶ�
    /// </summary>
    private Vector3 velocity = Vector3.zero;
    /// <summary>
    /// �������Ŀ���ƫ����
    /// </summary>
    public Vector3 offset = new Vector3(0, 0, -10);

    public void SetTarget(Transform target)
    {
        this.target = target;
    }

    private void LateUpdate()
    {
        if (target == null) return; // ���Ŀ�겻�����򷵻�
                                    // ��������Ӧ�õ����λ��
        Vector3 targetPosition = target.position + offset;

        //SmoothDamp��������ʵ��ƽ���ƶ���Ч�������Ĳ����������£�
        //current����ǰλ�á�
        //target��Ŀ��λ�á�
        //currentVelocity����ǰ�ٶȣ�ʹ�� ref �ؼ��ִ��ݣ���ʾ���ô��ݣ������ں����ڲ��޸ı���ֵ��
        //smoothTime��ƽ���ƶ���ʱ������
        //����Ը��ݾ���������� smoothTime ��ֵ���Դﵽ���Ч����
        // ʹ��SmoothDamp����ʵ��ƽ���ƶ�
        //transform.position = Vector3.SmoothDamp(transform.position, targetPosition, ref velocity, smoothTime);


        transform.position = targetPosition;
    }
}
