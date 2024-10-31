using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class TrapItemCom : MonoBehaviour, IBeginDragHandler, IDragHandler, IEndDragHandler
{
    public GameObject iconNode;

    private RectTransform rectTransform; // UI 元素的 RectTransform
    private Vector2 originalPosition; // 记录元素的原始位置

    private TrapSeat selectTrapSeat;

    // Start is called before the first frame update
    void Start()
    {
        rectTransform = iconNode.GetComponent<RectTransform>();
        originalPosition = rectTransform.anchoredPosition;
    }

    void IBeginDragHandler.OnBeginDrag(PointerEventData eventData)
    {
        selectTrapSeat = null;
    }

    void IDragHandler.OnDrag(PointerEventData eventData)
    {
        //itemBeginDragged.transform.position = Input.mousePosition;
        Vector2 pos;
        RectTransformUtility.ScreenPointToLocalPointInRectangle(rectTransform.parent.GetComponent<RectTransform>(),
            eventData.position,eventData.pressEventCamera, out pos);

        rectTransform.anchoredPosition = pos;
        IsValidDropArea(eventData.position);
    }

    void IEndDragHandler.OnEndDrag(PointerEventData eventData)
    {
        rectTransform.anchoredPosition = originalPosition;
        TrapSeat trap = IsValidDropArea(eventData.position);
        if (trap != null)
        {
            trap.AddTrap(1);
        }
    }

    private TrapSeat IsValidDropArea(Vector2 position)
    {
        //RaycastHit2D hit = Physics2D.Raycast(Camera.main.ScreenToWorldPoint(position), Vector2.zero);
        RaycastHit2D hit = Physics2D.Raycast(GameController.instance.camera.ScreenToWorldPoint(position), Vector2.zero);
        if(hit.collider != null && hit.collider.CompareTag("trap"))
        {
            TrapSeat trap = hit.collider.gameObject.GetComponent<TrapSeat>();
            if(trap != null)
            {
                if (selectTrapSeat != null && selectTrapSeat != trap)
                {
                    selectTrapSeat.ClearSelect();
                }
                selectTrapSeat = trap;
                if (selectTrapSeat.SetSelect(1))
                {
                    return selectTrapSeat;
                }
            }
        }
        else
        {
            if (selectTrapSeat)
            {
                selectTrapSeat.ClearSelect();
            }
            selectTrapSeat = null;
        }
        return null;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
