using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ColorGemCom : MonoBehaviour
{
    public enum ColorType
    {
        RED,
        ORANGE,
        PURPLE,
        BLUE,
        YELLOW,
        GREEN,
        COUNT
    }
    [System.Serializable]
    public struct ColorSprite
    {
        public ColorType color;
        public Sprite sprite;
    }

    public ColorSprite[] colorSprites;

    private Dictionary<ColorType, Sprite> colorSpriteDict;

    private Image sprite;

    public int NumColors
    {
        get { return colorSprites.Length; }
    }

    public ColorType Color { get => color; set => SetColor(value); }

    private ColorType color;

    private void Awake()
    {
        sprite = transform.GetComponent<Image>();
        colorSpriteDict = new Dictionary<ColorType, Sprite>();

        for(int i = 0;i < colorSprites.Length; i++)
        {
            if (!colorSpriteDict.ContainsKey(colorSprites[i].color))
            {
                colorSpriteDict.Add(colorSprites[i].color, colorSprites[i].sprite);
            }
        }
    }

    public void SetColor(ColorType newColor)
    {
        color = newColor;
        if (colorSpriteDict.ContainsKey(newColor))
        {
            sprite.sprite = colorSpriteDict[newColor];
        }
    }
}
