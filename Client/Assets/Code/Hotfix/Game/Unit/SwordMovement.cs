using UnityEngine;

public class SwordMovement : MonoBehaviour
{
    public Transform character;
    public Transform target; // 目标点的 Transform
    public Vector3 targetPos;
    public float rotationSpeed = 50f;
    public float radius = 2f;
    public float flightSpeed = 10f; // 飞剑飞向目标点的速度
    public AnimationCurve flightCurve; // 曲线运动的动画曲线

    private bool isFlyingToTarget = false;
    private Vector3 startPosition;
    private float flightTime;
    private float totalFlightTime = 1f; // 飞剑飞向目标点的总时间

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
            //// 围绕角色旋转
            //transform.RotateAround(character.position, Vector3.up, rotationSpeed * Time.deltaTime);

            //// 保持飞剑与角色的距离
            //Vector3 desiredPosition = (transform.position - character.position).normalized * radius + character.position;
            //transform.position = desiredPosition;

            //// 检测是否发现目标点（可以根据需要添加检测逻辑）
            //if (Input.GetKeyDown(KeyCode.Space)) // 按下空格键开始飞向目标点
            //{
            //    isFlyingToTarget = true;
            //    startPosition = transform.position;
            //    flightTime = 0f;
            //}
        }
        else
        {
            // 飞向目标点
            flightTime += Time.deltaTime / totalFlightTime;
            float curveValue = flightCurve.Evaluate(flightTime);
            transform.position = Vector3.Lerp(startPosition, targetPos, flightTime) + Vector3.up * curveValue;

            // 飞剑到达目标点后停止飞行
            if (flightTime >= 1f)
            {
                isFlyingToTarget = false;
            }
        }
    }
}
