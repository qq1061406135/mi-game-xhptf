using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TrapManager : MonoBehaviour
{

    public GameObject trapItemPrefab;
    // Start is called before the first frame update
    void Start()
    {
        InitTrap();
    }

    void InitTrap()
    {
        List<int[]> info = new List<int[]>();
        info.Add(new int[2] { 3001, 5 });
        info.Add(new int[2] { 3011, 3 });
        info.Add(new int[2] { 3021, 3 });
        info.Add(new int[2] { 3031, 1 });
        info.Add(new int[2] { 3041, 1 });

        for(int i = 0;i < info.Count; i++)
        {
            GameObject item = Instantiate(trapItemPrefab, transform);
            TrapItemCom com = item.GetComponent<TrapItemCom>();
            com.SetInfo(info[i][0], info[i][1]);
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
