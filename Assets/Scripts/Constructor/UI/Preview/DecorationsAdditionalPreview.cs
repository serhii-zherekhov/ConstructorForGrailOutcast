using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Linq;

public class DecorationsAdditionalPreview : MonoBehaviour
{
    [SerializeField] private Transform _decorationsPreviewTransform;
    [SerializeField] private Toggle[] _positionToggles;
    [SerializeField] private Button[] _rotationButtons;
    [SerializeField] private Image[] _rotationButtonsImages;

    private GridObject _gridObjectPreview;
    private bool _isDecorationWithMultipleSetup = false;

    private Dictionary<OnHexPosition, Decoration> _decorations = new Dictionary<OnHexPosition, Decoration>();

    public void SetPreview(GridObject gridObjectPreview)
    {
        _isDecorationWithMultipleSetup = (gridObjectPreview.Decoration?.SetupType == DecorationSetupType.Multiple);

        gameObject.SetActive(_isDecorationWithMultipleSetup);
        ClearDecorations();
        ResetUI();
        _gridObjectPreview = gridObjectPreview;
    }

    public void ToggleSetDecoration(int onHexPosition)
    {
        bool isOn = _positionToggles[onHexPosition].isOn;

        if (isOn)
        {
            SetDecoration((OnHexPosition)onHexPosition);
        }
        else
        {
            DeleteDecoration((OnHexPosition)onHexPosition);
        }

        _rotationButtons[onHexPosition].enabled = isOn;
        _rotationButtonsImages[onHexPosition].gameObject.SetActive(isOn);
    }

    private bool HasDecorations()
    {
        return (_decorations?.Count > 0);
    }

    private void SetDecoration(OnHexPosition onHexPosition)
    {
        if (_gridObjectPreview.Decoration?.SetupType != DecorationSetupType.Multiple) return;

        GridObject gridObject = Instantiate(_gridObjectPreview);
        Decoration decoration = (Decoration)gridObject; 
        decoration.Init(_decorationsPreviewTransform.position, _decorationsPreviewTransform, _gridObjectPreview.Rotation, onHexPosition);

        if (!_decorations.ContainsKey(onHexPosition))
        {
            _decorations.Add(onHexPosition, decoration);
        }
        else
        {
            _decorations[onHexPosition] = decoration;
        }
    }

    private void DeleteDecoration(OnHexPosition onHexPosition)
    {
        if (_decorations.ContainsKey(onHexPosition))
        {
            Decoration decoration = _decorations[onHexPosition];
            Destroy(decoration.gameObject);
            _decorations.Remove(onHexPosition);
        }
    }

    public void ButtonRotateDecoration(int onHexPosition)
    {
        RotateDecoration((OnHexPosition)onHexPosition);
    }

    private void RotateDecoration(OnHexPosition onHexPosition)
    {
        if (_gridObjectPreview.Decoration?.SetupType != DecorationSetupType.Multiple) return;

        if (_decorations.ContainsKey(onHexPosition))
        {
            Decoration decoration = _decorations[onHexPosition];
            decoration.Rotate();
        }
    }

    private void ClearDecorations()
    {
        foreach (KeyValuePair<OnHexPosition, Decoration> decoration in _decorations)
        {
            Destroy(decoration.Value.gameObject);
        }
        _decorations.Clear();
    }

    private void ResetUI()
    {
        for (int i = 0; i < Enum.GetNames(typeof(OnHexPosition)).Length; i++)
        {
            if (i == 0) continue;

            _positionToggles[i].isOn = false;
            _rotationButtons[i].enabled = false;
            _rotationButtonsImages[i].gameObject.SetActive(false);
        }        
    }

    #region Properties
    public List<Decoration> Decorations
    {
        get
        {
            if (HasDecorations())
            {
                return _decorations.Select(decoration => decoration.Value).ToList();
            }
            else
            {
                return null;
            }
        }
    }
    #endregion
}
