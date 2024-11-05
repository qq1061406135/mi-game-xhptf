using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using TMPro;

public class TrapItemCom : MonoBehaviour, IBeginDragHandler, IDragHandler, IEndDragHandler
{
    public GameObject iconNode;

    public TextMeshProUGUI numText;

    private RectTransform rectTransform; // UI 元素的 RectTransform
    private Vector2 originalPosition; // 记录元素的原始位置

    private TrapSeat selectTrapSeat;

    private TrapConfig config;
    private int trapNum = 0;//陷阱数量

    // Start is called before the first frame update
    void Start()
    {
        rectTransform = iconNode.GetComponent<RectTransform>();
        originalPosition = rectTransform.anchoredPosition;
    }

    public void SetInfo(int id,int num)
    {
        trapNum = num;
        config = ConfigComponent.Instance.trapConfigs.Find(p => p.Id == id);
        UpdateNum();
        SetTrapIcon(config.icon);
    }

    public async void SetTrapIcon(string icon)
    {
        Image img = iconNode.GetComponent<Image>();
        await ResourceComponent.Instance.LoadSprite(img, icon);
    }

    public void UpdateNum()
    {
        numText.text = trapNum.ToString();
    }

    void IBeginDragHandler.OnBeginDrag(PointerEventData eventData)
    {
        selectTrapSeat = null;
    }

    void IDragHandler.OnDrag(PointerEventData eventData)
    {
        if (trapNum <= 0) return;
        //itemBeginDragged.transform.position = Input.mousePosition;
        Vector2 pos;
        RectTransformUtility.ScreenPointToLocalPointInRectangle(rectTransform.parent.GetComponent<RectTransform>(),
            eventData.position,eventData.pressEventCamera, out pos);

        rectTransform.anchoredPosition = pos;
        IsValidDropArea(eventData.position);
    }

    void IEndDragHandler.OnEndDrag(PointerEventData eventData)
    {
        if (trapNum <= 0) return;
        rectTransform.anchoredPosition = originalPosition;
        TrapSeat trap = IsValidDropArea(eventData.position);
        if (trap != null)
        {
            trap.AddTrap(config);
            trapNum--;
            UpdateNum();
        }
    }

    private TrapSeat IsValidDropArea(Vector2 position)
    {
        //RaycastHit2D hit = Physics2D.Raycast(Camera.main.ScreenToWorldPoint(position), Vector2.zero);
        RaycastHit2D hit = Physics2D.Raycast(GameController.instance.camera.ScreenToWorldPoint(position), Vector2.zero);
        //if(hit.collider != null && hit.collider.CompareTag("TrapBox"))
        if (hit.collider != null && hit.collider.gameObject != null && hit.collider.gameObject.name == "TrapBox")
            {
            TrapSeat trap = hit.collider.gameObject.GetComponent<TrapSeat>();
            if(trap != null)
            {
                if (selectTrapSeat != null && selectTrapSeat != trap)
                {
                    selectTrapSeat.ClearSelect();
                }
                selectTrapSeat = trap;
                if (selectTrapSeat.SetSelect(config))
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
