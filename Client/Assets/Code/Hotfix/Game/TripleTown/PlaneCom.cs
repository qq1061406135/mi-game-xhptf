using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlaneCom : MonoBehaviour
{
    public enum GemTyep
    {
        EMPTY,
        GEM,
        BARRIER,
        PURPLE,
    }
    //行数
    public int column;
    //列数
    public int row;

    public int gridW;

    public float fillTime;

    public GameObject gridPrefab;

    [System.Serializable]
    public struct GemPrefab
    {
        public GemTyep type;
        public GameObject prefab;
    }

    public GemPrefab[] gemPrefabs;
    public Dictionary<GemTyep, GameObject> gemPrefabDict;

    private GameGemCom[,] gems;

    //要交换的对象
    private GameGemCom pressedGem;
    private GameGemCom enteredGem;

    void Start()
    {
        initGame();
    }

    public void initGame()
    {
        //初始化宝石预制体字典
        gemPrefabDict = new Dictionary<GemTyep, GameObject>();
        for (int i = 0; i < gemPrefabs.Length; i++)
        {
            if (!gemPrefabDict.ContainsKey(gemPrefabs[i].type))
            {
                gemPrefabDict.Add(gemPrefabs[i].type, gemPrefabs[i].prefab);
            }
        }
        //初始化背景格子
        int planeW = gridW * column;
        int planeH = gridW * row;
        for (int x = 0;x < column; x++)
        {
            for(int y = 0;y < row; y++)
            {
                Vector3 pos = CorrectPosition(x,y);
                GameObject grid = Instantiate(gridPrefab, transform);
                grid.transform.localPosition = pos;
            }
        }
        //初始化第一批宝石
        gems = new GameGemCom[column, row];
        for (int x = 0; x < column; x++)
        {
            for (int y = 0; y < row; y++)
            {

                CreateNewGem(x, y, GemTyep.EMPTY);
            }
        }

        Destroy(gems[4, 4].gameObject);
        CreateNewGem(4, 4, GemTyep.BARRIER);

        StartCoroutine(AllFill());
    }

    public GameGemCom CreateNewGem(int x, int y, GemTyep type)
    {
        GameObject newGem = Instantiate(gemPrefabDict[type], transform);
        newGem.transform.localPosition = CorrectPosition(x,y);
        gems[x, y] = newGem.GetComponent<GameGemCom>();
        gems[x, y].Init(x, y, type, this);

        return gems[x, y];
    }

    public Vector3 CorrectPosition(int x, int y)
    {
        int planeW = gridW * column;
        int planeH = gridW * row;
        Vector3 pos = new Vector3(x * gridW - planeW / 2 + gridW / 2, planeH / 2 - y * gridW + gridW / 2, 0);
        return pos;
    }
    //全部填充
    public IEnumerator AllFill()
    {
        bool needRefill = true;

        while (needRefill)
        {
            yield return new WaitForSeconds(fillTime);
            while (Fill())
            {
                yield return new WaitForSeconds(fillTime);
            }

            //清除所有匹配好的
            needRefill = ClearAllMatchedGem();
        }
        
    }
    public bool Fill()
    {
        bool fillNotFinished = false;//本次填充是否完成

        for(int y = row-2;y >= 0; y--)
        {
            for(int x = 0;x < column; x++)
            {
                GameGemCom gem = gems[x, y];

                if (gem.CanMove())//垂直填充
                {
                    GameGemCom gemBelow = gems[x, y + 1];
                    if (gemBelow.Type == GemTyep.EMPTY)
                    {
                        Destroy(gemBelow.gameObject);
                        gem.MoveGemCom.Move(x, y + 1, fillTime);
                        gems[x, y + 1] = gem;
                        CreateNewGem(x, y, GemTyep.EMPTY);
                        fillNotFinished = true;
                    }
                    else//斜向填充
                    {
                        for (int down = -1; down <= 1; down++)
                        {
                            if (down != 0)
                            {
                                int downX = x + down;
                                if (downX >= 0 && downX < column)
                                {
                                    GameGemCom downGem = gems[downX, y + 1];
                                    if (downGem.Type == GemTyep.EMPTY)
                                    {
                                        bool canfill = true;
                                        for (int aboveY = y; aboveY >= 0; aboveY--)
                                        {
                                            GameGemCom gemAbove = gems[downX, aboveY];
                                            if (gemAbove.CanMove())
                                            {
                                                break;
                                            }
                                            else if (!gemAbove.CanMove() && gemAbove.Type != GemTyep.EMPTY)
                                            {
                                                canfill = false;
                                                break;
                                            }
                                        }
                                        if (!canfill)
                                        {
                                            Destroy(downGem.gameObject);
                                            gem.MoveGemCom.Move(downX, y + 1, fillTime);
                                            gems[downX, y + 1] = gem;
                                            CreateNewGem(x, y, GemTyep.EMPTY);
                                            fillNotFinished = true;
                                            break;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        //最上面一排
        for(int x = 0;x < column; x++)
        {
            GameGemCom gem = gems[x, 0];
            if (gem.Type == GemTyep.EMPTY)
            {
                GameObject newGem = Instantiate(gemPrefabDict[GemTyep.GEM], transform);
                newGem.transform.localPosition = CorrectPosition(x, -1);
                gems[x, 0] = newGem.GetComponent<GameGemCom>();
                gems[x, 0].Init(x, -1, GemTyep.GEM, this);
                gems[x, 0].MoveGemCom.Move(x,0, fillTime);
                gems[x, 0].ColorGemCom.SetColor((ColorGemCom.ColorType)Random.Range(0, gems[x,0].ColorGemCom.NumColors));
                fillNotFinished = true;
            }
        }
        return fillNotFinished;
    }
    //查看是否相邻
    private bool IsFriend(GameGemCom gem1,GameGemCom gem2)
    {
        return (gem1.X == gem2.X && Mathf.Abs(gem1.Y - gem2.Y) == 1) || (gem1.Y == gem2.Y && Mathf.Abs(gem1.X - gem2.X) == 1);
    }

    private void ExchangeGems(GameGemCom gem1, GameGemCom gem2)
    {
        if (gem1.CanMove() && gem2.CanMove())
        {
            gems[gem1.X, gem1.Y] = gem2;
            gems[gem2.X, gem2.Y] = gem1;

            if (MatchGam(gem1, gem2.X, gem2.Y) != null|| MatchGam(gem2, gem1.X, gem1.Y) != null)
            {
                Debug.Log("1满足");
                int tempX = gem1.X;
                int tempY = gem1.Y;

                gem1.MoveGemCom.Move(gem2.X, gem2.Y, fillTime);
                gem2.MoveGemCom.Move(tempX, tempY, fillTime);

                ClearAllMatchedGem();
                StartCoroutine(AllFill());
            }
            else
            {
                gems[gem1.X, gem1.Y] = gem1;
                gems[gem2.X, gem2.Y] = gem2;
            }
        }
    }

    public void PressGem(GameGemCom gem)
    {
        pressedGem = gem;
    }

    public void EnterGem(GameGemCom gem)
    {
        enteredGem = gem;
    }

    public void ReleaseGem()
    {
        if (IsFriend(pressedGem, enteredGem))
        {
            ExchangeGems(pressedGem, enteredGem);
        }
    }
    //匹配方法
    public List<GameGemCom> MatchGam(GameGemCom gem,int newX,int newY)
    {
        if (gem.CanColor())
        {
            ColorGemCom.ColorType color = gem.ColorGemCom.Color;
            List<GameGemCom> matchRowGems = new List<GameGemCom>();
            List<GameGemCom> matchLineGems = new List<GameGemCom>();
            List<GameGemCom> finishedMatchingGems = new List<GameGemCom>();

            //行
            matchRowGems.Add(gem);
            //i==0往左；i==1往右
            for(int i = 0;i <= 1; i++)
            {
                for (int xDistance = 1; xDistance < column; xDistance++)
                {
                    int x;
                    if (i == 0)
                    {
                        x = newX - xDistance;
                    }
                    else
                    {
                        x = newX + xDistance;
                    }
                    if (x < 0 || x >= column)
                    {
                        break;
                    }

                    if (gems[x, newY].CanColor() && gems[x, newY].ColorGemCom.Color == color)
                    {
                        matchRowGems.Add(gems[x, newY]);
                    }
                    else
                    {
                        break;
                    }
                }
            }

            if(matchRowGems.Count >= 3)
            {
                for (int i = 0; i < matchRowGems.Count; i++)
                {
                    finishedMatchingGems.Add(matchRowGems[i]);
                }
            }
            //L T型匹配
            //检查行遍历是否大于等于3
            if(matchRowGems.Count >= 3)
            {
                for (int i = 0; i < matchRowGems.Count; i++)
                {
                    //finishedMatchingGems.Add(matchRowGems[i]);
                    for (int j = 0; j <= 1; j++)
                    {
                        for (int yDistace = 1; yDistace < row; yDistace++)
                        {
                            int y;
                            if (j == 0)
                            {
                                y = newY - yDistace;
                            }
                            else
                            {
                                y = newY + yDistace;
                            }
                            if (y < 0 || y >= row)
                            {
                                break;
                            }
                            if(gems[matchRowGems[i].X,y].CanColor()&& gems[matchRowGems[i].X, y].ColorGemCom.Color == color)
                            {
                                matchLineGems.Add(gems[matchRowGems[i].X, y]);
                            }
                            else
                            {
                                break;
                            }
                        }
                    }
                    if (matchLineGems.Count < 2)
                    {
                        matchLineGems.Clear();
                    }
                    else
                    {
                        for (int j = 0; j < matchLineGems.Count; j++)
                        {
                            finishedMatchingGems.Add(matchLineGems[j]);
                        }
                        break;
                    }
                }
                
            }

            if (finishedMatchingGems.Count >= 3)
            {
                Debug.Log("行大于3");
                return finishedMatchingGems;
            }

            matchRowGems.Clear();
            matchLineGems.Clear();

            //列
            matchLineGems.Add(gem);

            for (int i = 0; i <= 1; i++)
            {
                for (int yDistance = 1; yDistance < row; yDistance++)
                {
                    int y;
                    if (i == 0)
                    {
                        y = newY - yDistance;
                    }
                    else
                    {
                        y = newY + yDistance;
                    }
                    if (y < 0 || y >= row)
                    {
                        break;
                    }

                    if (gems[newX, y].CanColor() && gems[newX, y].ColorGemCom.Color == color)
                    {
                        matchLineGems.Add(gems[newX, y]);
                    }
                    else
                    {
                        break;
                    }
                }
            }


            if (matchLineGems.Count >= 3)
            {
                for (int i = 0; i < matchLineGems.Count; i++)
                {
                    finishedMatchingGems.Add(matchLineGems[i]);
                }
            }

            //L T型匹配
            if (matchLineGems.Count >= 3)
            {
                for (int i = 0; i < matchLineGems.Count; i++)
                {
                    //finishedMatchingGems.Add(matchRowGems[i]);
                    for (int j = 0; j <= 1; j++)
                    {
                        for (int xDistace = 1; xDistace < column; xDistace++)
                        {
                            int x;
                            if (j == 0)
                            {
                                x = newX - xDistace;
                            }
                            else
                            {
                                x = newX + xDistace;
                            }
                            if (x < 0 || x >= column)
                            {
                                break;
                            }
                            if (gems[x, matchLineGems[i].Y].CanColor() && gems[x, matchLineGems[i].Y].ColorGemCom.Color == color)
                            {
                                matchRowGems.Add(gems[x, matchLineGems[i].Y]);
                            }
                            else
                            {
                                break;
                            }
                        }
                    }
                    if (matchRowGems.Count < 2)
                    {
                        matchRowGems.Clear();
                    }
                    else
                    {
                        for (int j = 0; j < matchRowGems.Count; j++)
                        {
                            finishedMatchingGems.Add(matchRowGems[j]);
                        }
                        break;
                    }
                }

            }

            if (finishedMatchingGems.Count >= 3)
            {
                Debug.Log("列大于3");
                return finishedMatchingGems;
            }
        }
        return null;
    }

    //清除
    public bool ClearGem(int x,int y)
    {
        if(gems[x,y].CanClear())
        {
            Debug.Log("可以清除");
            if (!gems[x, y].ClearGemCom.IsClearing)
            {
                Debug.Log("没有在清除");
                gems[x, y].ClearGemCom.Clear();
                CreateNewGem(x, y, GemTyep.EMPTY);
                return true;
            }
            else
            {
                Debug.Log("正在清除");
            }
        }
        else
        {

            Debug.Log("无法清除");
        }
        return false;
    }

    private bool ClearAllMatchedGem()
    {
        bool needRefill = false;

        for (int y = 0; y < row; y++)
        {
            for (int x = 0; x < column; x++)
            {
                if (gems[x, y].CanClear())
                {
                    List<GameGemCom> matchList = MatchGam(gems[x, y], x, y);

                    if (matchList != null)
                    {
                        Debug.Log("消除匹配满足" + matchList.Count);
                        for (int i = 0; i < matchList.Count; i++)
                        {
                            if (ClearGem(matchList[i].X, matchList[i].Y))
                            {
                                needRefill = true;
                            }
                        }
                    }
                }
            }
        }
        return needRefill;
    }
}
