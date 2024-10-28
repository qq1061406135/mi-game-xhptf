using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UICreatePlayer : UILayerBase
{
    public GameObject playerParent;
    public TMPro.TMP_InputField intputName;

    private GameObject _fab;
    private List<GameObject> _list;
    private PlayerConfig _playerConfig;
    private void Start()
    {
        _fab = playerParent.transform.GetChild(0).gameObject;
        _fab.SetActive(false);
        _list = new List<GameObject>();

        ConfigComponent.Instance.playerConfigs.ForEach((config) =>
        {

        });

        for (int i = 0; i < ConfigComponent.Instance.playerConfigs.Count; i++)
        {
            PlayerConfig config = ConfigComponent.Instance.playerConfigs[i];

            GameObject obj = GameObject.Instantiate(_fab, playerParent.transform);
            obj.SetActive(true);
            //obj.tag = config.Id.ToString();
            obj.transform.Find("typeTxt").GetComponent<TMPro.TextMeshProUGUI>().text = config.Name;
            _list.Add(obj);
            if (i == 0)
            {
                _playerConfig = config;
            }
            obj.transform.GetChild(0).gameObject.SetActive(i == 0);

            obj.GetComponent<Button>().onClick.AddListener(() =>
            {
                HideAllLight();
                obj.transform.GetChild(0).gameObject.SetActive(true);
                _playerConfig = config;
            });
        }
    }
    public void HideAllLight()
    {
        _list.ForEach((obj) =>
        {
            obj.transform.GetChild(0).gameObject.SetActive(false);
        });
    }

    public void OnCreateClick()
    {
        if(intputName.text == "")
        {
            Log.Debug("OnCreateClick-- �������ɫ��");
            return;
        }
        Log.Debug(_playerConfig.Name);
        NetManager.Instance.createPlayer(_playerConfig.Id,_playerConfig.Name,0, (msg) =>
        {
            if(msg.Code == StatusCode.Success)
            {
                //������Ϸ
                GameData.Instance.userData.serialize(msg.UnitData);
                //���ͽ�����Ϸ������-------------------------------
                Log.Debug("�Ѿ������˽�ɫ �������ݺ�ֱ�ӽ�����Ϸ");
                NetManager.Instance.intoGame();
            }
        });
    }

}
