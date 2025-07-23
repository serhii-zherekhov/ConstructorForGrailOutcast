using UnityEngine;
using TMPro;

public class Tip : MonoBehaviour
{
    private RectTransform _rectTransform;
    [SerializeField] private TMP_Text _text;
    private TipSide _tipSide;

    private void Awake()
    {
        _rectTransform = GetComponent<RectTransform>();
    }

    private void Update()
    {
        transform.position = Input.mousePosition;
    }

    public void SetText(string text)
    {
        _text.text = text;
    }

    public void SetTipSide(TipSide tipSide)
    {
        _tipSide = tipSide;

        if(_tipSide == TipSide.Left)
        {
            _rectTransform.pivot = new Vector2(1.055f, 2.2f);
        }

        if (_tipSide == TipSide.Right)
        {
            _rectTransform.pivot = new Vector2(-0.055f, 2.2f);
        }
    }
}
