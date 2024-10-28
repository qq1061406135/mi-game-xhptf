using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameGemCom : MonoBehaviour
{

    private int x;
    private int y;
    public int X { get => x; set { if (CanMove()) { x = value; } } }
    public int Y { get => y; set { if (CanMove()) { y = value; } } }

    private PlaneCom.GemTyep type;
    public PlaneCom.GemTyep Type { get => type; }

    [HideInInspector]
    public PlaneCom planeCom;

    private MoveGemCom moveGemCom;
    public MoveGemCom MoveGemCom { get => moveGemCom; }

    private ColorGemCom colorGemCom;
    public ColorGemCom ColorGemCom { get => colorGemCom; }

    private ClearGemCom clearGemCom;
    public ClearGemCom ClearGemCom { get => clearGemCom; }

    public bool CanMove()
    {
        return moveGemCom != null;
    }
    public bool CanColor()
    {
        return colorGemCom != null;
    }

    public bool CanClear()
    {
        return clearGemCom != null;
    }

    private void Awake()
    {
        moveGemCom = GetComponent<MoveGemCom>();
        colorGemCom = GetComponent<ColorGemCom>();
        clearGemCom = GetComponent<ClearGemCom>();
    }

    public void Init(int _x,int _y, PlaneCom.GemTyep _type,PlaneCom _planeCom)
    {
        x = _x;
        y = _y;
        type = _type;
        planeCom = _planeCom;
    }

    private void OnMouseEnter()
    {
        planeCom.EnterGem(this);
    }

    private void OnMouseDown()
    {
        planeCom.PressGem(this);
    }

    private void OnMouseUp()
    {
        planeCom.ReleaseGem();
    }
}
