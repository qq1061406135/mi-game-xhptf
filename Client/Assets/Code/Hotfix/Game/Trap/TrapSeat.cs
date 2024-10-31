using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TrapSeat : MonoBehaviour
{
    Trap trap;
    SpriteRenderer sprite;

    // Start is called before the first frame update
    void Start()
    {
        sprite = GetComponent<SpriteRenderer>();
    }

    public bool SetSelect(int id)
    {
        if(trap == null)
        {
            ChangeAlpha(1f);
            return true;
        }
        else
        {
            ChangeAlpha(0.5f);
        }
        return false;
    }

    public void ClearSelect()
    {
        ChangeAlpha(0f);
    }

    private void ChangeAlpha(float alpha)
    {
        // ÐÞ¸ÄÍ¸Ã÷¶È
        Color currentColor = sprite.color;
        currentColor.a = alpha;
        sprite.color = currentColor;
    }

    public async void AddTrap(int id)
    {
        GameObject fab = await ResourceComponent.Instance.LoadAssetAsync<GameObject>("Assets/Res/Game/Prefab/Trap/Trap1.prefab");
        if (fab != null)
        {
            GameObject trapNode = Instantiate(fab, transform);
            trap = trapNode.GetComponent<Trap>();
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
