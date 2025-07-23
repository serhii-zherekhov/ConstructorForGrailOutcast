using System;
using System.Collections;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class ToolButton : MonoBehaviour
{
    public event EventHandler<ToolButtonEventArgs> OnClick;

    [SerializeField] private ToolType _toolType;
    [SerializeField] private Image _toolImage;

    public void Click()
    {
        ToolButtonEventArgs args = new()
        {
            ToolButton = this
        };
        OnClick?.Invoke(this, args);
    }

    #region Properties

    public ToolType ToolType
    {
        get
        {
            return _toolType;
        }
    }

    public Image Image
    {
        get
        {
            return _toolImage;
        }
    }

    #endregion
}
