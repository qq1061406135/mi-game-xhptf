using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InputController : MonoBehaviour
{
    internal bool GameStarting = false;
    internal bool rigidManager = true;
    public float playerSpeed;
    private Rigidbody2D rb;
    Vector3 joystickVec;

    public GameObject skill;

    public BooleanManager Bool
    {
        get
        {
            return BooleanManager.Instance;
        }
    }

    public void SetJoystickVec(Vector3 vec)
    {
        joystickVec = vec;
    }

    private void Update()
    {
        if (rigidManager == true)
        {
            rb = GetComponent<Rigidbody2D>();
            rigidManager = false;
        }

        AnimatorController();
        if (joystickVec.y != 0 || joystickVec.x != 0)
        {
            //rb.velocity = new Vector2(joystickVec.x * playerSpeed, joystickVec.y * playerSpeed);
            rb.MovePosition(rb.position + new Vector2(joystickVec.x * playerSpeed * Time.deltaTime, joystickVec.y * playerSpeed * Time.deltaTime));

            NetManager.Instance.SendSyncPosition(rb.position);
        }
        else
        {
            rb.velocity = Vector2.zero;
        }

        if(Input.GetKeyDown(KeyCode.X))
        {
            GameObject.Instantiate(skill,GetComponent<PlayerComponent>().center);
        }
    }

    void AnimatorController()
    {
        if (joystickVec.y < 0)
        {
            //Debug.Log("Going Down");
        }

        if (joystickVec.y > 0)
        {
            //Debug.Log("Going Up");
        }
    }

}
