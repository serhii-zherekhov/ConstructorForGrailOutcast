using System;
using UnityEngine;
using UnityEngine.UI;

public class SelectedToolButton : MonoBehaviour
{
    public event EventHandler<ToolTypeEventArgs> OnToolTypeChanged;

    [SerializeField] private GameObject _toolsPanel;
    [SerializeField] private ToolButton[] _toolButtons;
    [SerializeField] private Image _toolImage;
    private ToolType _toolType;
    private bool _isShown;

    public void InitUI()
    {
        for(int i = 0; i < _toolButtons.Length; i++)
        {
            if (i == 0) continue;
            _toolButtons[i].OnClick += ToolSelect_OnClick;
        }

        _toolButtons[(int)ToolType.Pencil].Click();
    }

    private void ToolSelect_OnClick(object sender, ToolButtonEventArgs e)
    {
        _toolType = e.ToolButton.ToolType;

        Image senderImage = e.ToolButton.Image;

        _toolImage.sprite = senderImage.sprite;
        _toolImage.transform.localPosition = senderImage.transform.localPosition;
        _toolImage.rectTransform.sizeDelta = senderImage.rectTransform.sizeDelta;

        HideToolsPanel();

        ToolTypeEventArgs args = new()
        {
            ToolType = _toolType
        };

        OnToolTypeChanged?.Invoke(this, args);
    }

    public void ToggleToolsPanel()
    {
        _isShown = !_isShown;
        _toolsPanel.SetActive(_isShown);
    }

    private void HideToolsPanel()
    {
        _isShown = false;
        _toolsPanel.SetActive(false);
    }

    private void OnDestroy()
    {
        for (int i = 0; i < _toolButtons.Length; i++)
        {
            if (i == 0) continue;
            _toolButtons[i].OnClick -= ToolSelect_OnClick;
        }
    }
}
