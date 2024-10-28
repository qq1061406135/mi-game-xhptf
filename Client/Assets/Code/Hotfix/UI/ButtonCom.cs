using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using UnityEngine.Serialization;
using UnityEngine.UI;

public class ButtonCom : MonoBehaviour, IPointerClickHandler, ISubmitHandler
{
    [FormerlySerializedAs("onClick")]
    [SerializeField]
    public UnityEvent m_OnClick;

    public void OnPointerClick(PointerEventData eventData)
    {
        m_OnClick?.Invoke();
    }

    public void OnSubmit(BaseEventData eventData)
    {
        m_OnClick?.Invoke();
    }
}

