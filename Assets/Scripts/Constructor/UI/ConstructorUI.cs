using System;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.UI;

public class ConstructorUI : MonoBehaviour
{
    private const float CURSOR_ONE_MOVE_THRESHOLD = 0.1f;
    private const float CURSOR_START_MOVING_THRESHOLD = 0.6f;
    private ThresholdedActionOnKey _thresholdedLeftArrow = new ThresholdedActionOnKey();
    private ThresholdedActionOnKey _thresholdedRightArrow = new ThresholdedActionOnKey();

    [SerializeField] private PreviewHolder _previewHolder;
    [SerializeField] private GameObject _gridObjectsMenuLayout;
    [SerializeField] private GameObject _gridObjectsMenu;

    private const int BUTTONS_IN_ROW = 9;
    private GridObjectThumbnailButtonCursor _gridObjectThumbnailButtonCursor = new GridObjectThumbnailButtonCursor();
    private GridObjectThumbnailButton _selectedGridObjectThumbnailButton = null;
    [SerializeField] private Dictionary<int, List<Button>> _buttons = new Dictionary<int, List<Button>>();
    [SerializeField] private Button _buttonPrefab;

    [SerializeField] private Toggle[] _filterToggles;

    [SerializeField] private SelectedToolButton _selectedToolButton;

    [SerializeField] private Button _undoButton;
    [SerializeField] private Button _redoButton;

    [SerializeField] private GameObject _mirroredText;

    private bool _isMirroring = false;
    private bool _isStampReplacingCell = false;

    public void InitUI()
    {
        for (int i = 0; i < PrefabHolder.Instance.Length; i++)
        {
            GridObject gridObject = PrefabHolder.Instance.Get(i);

            if (!(gridObject.IsShownInConstructor)) continue;

            Button button = Instantiate(_buttonPrefab).GetComponent<Button>();
            button.transform.SetParent(_gridObjectsMenu.transform);
            
            Image image = button.GetComponent<Image>();
            image.sprite = gridObject.Thumbnail;
            image.rectTransform.localScale = Vector3.one;

            GridObjectThumbnailButton gridObjectThumbnailButton = button.GetComponent<GridObjectThumbnailButton>();
            gridObjectThumbnailButton.SetPrefab(gridObject);
            _gridObjectThumbnailButtonCursor.Add(gridObjectThumbnailButton);

            button.onClick.AddListener(() => SetSelectedGridObjectPreview(gridObjectThumbnailButton));
            button.gameObject.SetActive(true);

            int type = (int)gridObject.Type;
            if (!_buttons.ContainsKey(type))
            {
                _buttons.Add(type, new List<Button>());
            }
            _buttons[type].Add(button);
        }

        SetSelectedGridObjectPreview(_gridObjectThumbnailButtonCursor.First());
        _selectedToolButton.InitUI();
        _mirroredText.SetActive(_isMirroring);
    }

    public void Handle()
    {
        _thresholdedLeftArrow.Handle(KeyCode.LeftArrow, CursorMoveLeft, CURSOR_ONE_MOVE_THRESHOLD, CURSOR_START_MOVING_THRESHOLD);

        _thresholdedRightArrow.Handle(KeyCode.RightArrow, CursorMoveRight, CURSOR_ONE_MOVE_THRESHOLD, CURSOR_START_MOVING_THRESHOLD);

        if (Input.GetKeyDown(KeyCode.UpArrow)) CursorMoveUp();

        if (Input.GetKeyDown(KeyCode.DownArrow)) CursorMoveDown();

        if (Input.GetKeyDown(KeyCode.R)) RotatePreview();
    }

    private void SetSelectedGridObjectPreview(GridObjectThumbnailButton gridObjectThumbnailButton)
    {
        GridObject prefab = gridObjectThumbnailButton.GetPrefab();

        _previewHolder.SetPreview(prefab);
        SelectGridObjectButton(gridObjectThumbnailButton);
        _gridObjectThumbnailButtonCursor.SetPointer(gridObjectThumbnailButton);
    }

    private void SelectGridObjectButton(GridObjectThumbnailButton gridObjectThumbnailButton)
    {
        _selectedGridObjectThumbnailButton?.Unselect();
        _selectedGridObjectThumbnailButton = gridObjectThumbnailButton;
        _selectedGridObjectThumbnailButton.Select();
    }

    public void CheckFilters(int type)
    {
        List<Button> buttons = _buttons[type];
        bool isOn = _filterToggles[type].isOn;
        foreach(Button button in buttons)
        {
            button.gameObject.SetActive(isOn);
        }

        if (IsAnyToggleIsOn())
        {
            _previewHolder.gameObject.SetActive(true);
            _gridObjectThumbnailButtonCursor.MoveToNearest();
        }
        else
        {
            _previewHolder.gameObject.SetActive(false);
        }
    }

    private bool IsAnyToggleIsOn()
    {
        bool isAnyToggleIsOn = false;

        foreach(Toggle toggle in _filterToggles)
        {
            if (toggle == null) continue;

            if (toggle.isOn)
            {
                isAnyToggleIsOn = true;
                break;
            }
        }

        return isAnyToggleIsOn;
    }

    public void CursorMoveLeft()
    {
        _gridObjectThumbnailButtonCursor.MoveToPrevious();
    }

    public void CursorMoveRight()
    {
        _gridObjectThumbnailButtonCursor.MoveToNext();
    }

    public void CursorMoveUp()
    {
        _gridObjectThumbnailButtonCursor.MoveToPrevious(times: BUTTONS_IN_ROW);
    }

    public void CursorMoveDown()
    {
        _gridObjectThumbnailButtonCursor.MoveToNext(times: BUTTONS_IN_ROW);
    }

    public void ToggleMirroring()
    {
        _isMirroring = !_isMirroring;
        _mirroredText.SetActive(_isMirroring);
    }

    public void ToggleStampReplacingCell()
    {
        _isStampReplacingCell = !_isStampReplacingCell;
    }

    public void ToggleShowGridObjectsLayout()
    {
        bool isActive = _gridObjectsMenuLayout.activeSelf;
        isActive = !isActive;
        _gridObjectsMenuLayout.SetActive(isActive);
        HexPointer.Instance.ShowCursor(!isActive);
    }

    public void SwitchUIForTool(ToolType toolType)
    {
        _previewHolder.SwitchPreviewsForTool(toolType);

        if (toolType == ToolType.Eraser ||
            toolType == ToolType.Stamp)
        {
            _gridObjectsMenuLayout.SetActive(false);
        }
    }

    public void RotatePreview()
    {
        _previewHolder.RotatePreview();
    }

    #region Properties
    public GridObject Preview
    {
        get
        {
            return _previewHolder.Preview;
        }
    }

    public List<Decoration> Decorations
    {
        get
        {
            return _previewHolder.Decorations;
        }
    }

    public StampAdditionalPreview StampAdditionalPreview
    {
        get
        {
            return _previewHolder.StampAdditionalPreview;
        }
    }

    public SelectedToolButton SelectedToolButton
    {
        get
        {
            return _selectedToolButton;
        }
    }

    public Button UndoButton
    {
        get
        {
            return _undoButton;
        }
    }

    public Button RedoButton
    {
        get
        {
            return _redoButton;
        }
    }

    public bool IsMirroring
    {
        get
        {
            return _isMirroring;
        }
    }

    public bool IsStampReplacingCell
    {
        get
        {
            return _isStampReplacingCell;
        }
    }

    #endregion
}
