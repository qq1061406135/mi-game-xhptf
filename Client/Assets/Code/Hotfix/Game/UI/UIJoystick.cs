using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class UIJoystick : UILayerBase
{
    public RectTransform joystick;
    public RectTransform joystickBG;
    public Vector2 joystickVec;
    private Vector2 joystickTouchPos;
    private Vector2 joystickOriginalPos;
    private float joystickRadius;
    private bool isDrag = false;
    void Start()
    {
        joystickOriginalPos = joystickBG.transform.localPosition;
        joystickRadius = joystickBG.sizeDelta.y / 4;
        SetJoystickVisible(false);
    }

    public void SetJoystickVisible(bool v)
    {
        joystick.gameObject.SetActive(v);
        joystickBG.gameObject.SetActive(v);
    }

    public void OnPointerDown()
    {
        ObjectHelper.SetUIElementPosition(joystick, Input.mousePosition, GetCamera());
        ObjectHelper.SetUIElementPosition(joystickBG, Input.mousePosition, GetCamera());
        joystickTouchPos = Input.mousePosition;
    }
    public void OnDrag(BaseEventData baseEventData)
    {
        SetJoystickVisible(true);
        PointerEventData pointerEventData = baseEventData as PointerEventData;
        Vector2 dragePos = pointerEventData.position;
        joystickVec = (dragePos - joystickTouchPos).normalized;

        float joystickDist = Vector2.Distance(dragePos, joystickTouchPos);
        if (joystickDist < joystickRadius)
        {
            ObjectHelper.SetUIElementPosition(joystick, joystickTouchPos + joystickVec * joystickDist, GetCamera());

        }
        else
        {
            ObjectHelper.SetUIElementPosition(joystick, joystickTouchPos + joystickVec * joystickRadius, GetCamera());
        }

        if (UnitManager.Instance.selfUnit.player)
        {
            UnitManager.Instance.selfUnit.player.inputController.SetJoystickVec(joystickVec);
        }

        isDrag = true;
    }

    public void OnPointerUp()
    {
        joystickVec = Vector2.zero;
        joystick.SetUIPosition(joystickOriginalPos, GetCamera());
        joystickBG.SetUIPosition(joystickOriginalPos, GetCamera());
        isDrag = false;
        SetJoystickVisible(false);

    }


    void Update()
    {
        if (Input.GetKey(KeyCode.W))
        {
            joystickVec.y = 1;
        }
        else if (Input.GetKey(KeyCode.S))
        {
            joystickVec.y = -1;
        }
        else
        {
            joystickVec.y = 0;
        }

        if (Input.GetKey(KeyCode.A))
        {
            joystickVec.x = -1;
        }
        else if (Input.GetKey(KeyCode.D))
        {
            joystickVec.x = 1;
        }
        else
        {
            joystickVec.x = 0;
        }

        if (UnitManager.Instance.selfUnit != null && UnitManager.Instance.selfUnit.player && !isDrag)
        {
            UnitManager.Instance.selfUnit.player.inputController.SetJoystickVec(joystickVec);
        }
    }

}
