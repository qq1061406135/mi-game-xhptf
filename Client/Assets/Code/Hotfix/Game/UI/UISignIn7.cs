using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UISignIn7 : UILayerBase
{

    public UISignIn7Item[] items;
    public override bool Show(object param = null)
    {
        ActivityData activityData = (ActivityData)param;
        if(activityData != null )
        {
            
            for(int i = 0; i < items.Length; i++)
            {
                SignIn7Config in7Config = ConfigComponent.Instance.signIn7Configs[i];
                items[i].UpdateItem(in7Config.Id, in7Config.Name);
            }
        }
        return base.Show(param);
    }
}
