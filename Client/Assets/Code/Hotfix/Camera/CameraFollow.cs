using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraFollow : MonoBehaviour
{
    /// <summary>
    /// 要跟随的角色
    /// </summary>
    public Transform target;
    /// <summary>
    /// 平滑移动的时间
    /// </summary>
    public float smoothTime = 0.3f;
    /// <summary>
    /// 用于计算平滑移动的速度
    /// </summary>
    private Vector3 velocity = Vector3.zero;
    /// <summary>
    /// 相机距离目标的偏移量
    /// </summary>
    public Vector3 offset = new Vector3(0, 0, -10);

    public void SetTarget(Transform target)
    {
        this.target = target;
    }

    private void LateUpdate()
    {
        if (target == null) return; // 如果目标不存在则返回
                                    // 计算出相机应该到达的位置
        Vector3 targetPosition = target.position + offset;

        //SmoothDamp函数可以实现平滑移动的效果。它的参数意义如下：
        //current：当前位置。
        //target：目标位置。
        //currentVelocity：当前速度，使用 ref 关键字传递，表示引用传递，用于在函数内部修改变量值。
        //smoothTime：平滑移动的时间间隔。
        //你可以根据具体需求调整 smoothTime 的值，以达到最佳效果。
        // 使用SmoothDamp函数实现平滑移动
        //transform.position = Vector3.SmoothDamp(transform.position, targetPosition, ref velocity, smoothTime);


        transform.position = targetPosition;
    }
}
