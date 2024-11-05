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
        //if (!UnityEditorInternal.InternalEditorUtility.tags.Equals("TrapBox"))
        //{
        //    UnityEditorInternal.InternalEditorUtility.AddTag("TrapBox");
        //}
        //gameObject.tag = "TrapBox";
        gameObject.name = "TrapBox";
        sprite = GetComponent<SpriteRenderer>();
    }

    public bool SetSelect(TrapConfig config)
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
        ChangeAlpha(0.1f);
    }

    private void ChangeAlpha(float alpha)
    {
        // ÐÞ¸ÄÍ¸Ã÷¶È
        Color currentColor = sprite.color;
        currentColor.a = alpha;
        sprite.color = currentColor;
    }

    public async void AddTrap(TrapConfig config)
    {
        GameObject fab = await ResourceComponent.Instance.LoadAssetAsync<GameObject>(config.res);
        if (fab != null)
        {
            GameObject trapNode = Instantiate(fab, transform);
            trap = trapNode.GetComponent<Trap>();
            trap.SetTrapConfig(config);
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
