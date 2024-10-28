using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UILeqent : UILayerBase
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void OnCloseClick()
    {
        GameEntry.UI.Close<UILeqent>(UIConfigs.UILeqent);
    }
}
