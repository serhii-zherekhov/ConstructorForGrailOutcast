using System.Collections.Generic;
using UnityEngine;

public class PreviewHolder : MonoBehaviour
{
    [SerializeField] private GameObject _preview;
    [SerializeField] private DecorationsAdditionalPreview _decorationsAdditionalPreview;
    [SerializeField] private StampAdditionalPreview _stampAdditionalPreview;

    [SerializeField] private CameraPreviewPositionSwitcher _camera;
    [SerializeField] private Transform _gridObjectPreviewPosition;

    private GridObject _gridObjectPreview;

    public void SetPreview(GridObject previewPrefab)
    {
        if (_gridObjectPreview != null) Destroy(_gridObjectPreview.gameObject);
        GridObject gridObject = Instantiate(previewPrefab);
        gridObject.Init(_gridObjectPreviewPosition.position, _gridObjectPreviewPosition, previewPrefab.InitialRotation);
        _gridObjectPreview = gridObject;

        _decorationsAdditionalPreview.SetPreview(_gridObjectPreview);

        SetPreviewCamera(_gridObjectPreview.Type);
    }

    private void SetPreviewCamera(GridObjectType type)
    {
        if (type == GridObjectType.Cell)
        {
            _camera.Switch(GridObjectType.Cell);
        }

        if (type == GridObjectType.Building)
        {
            Building buildingPreview = (Building)_gridObjectPreview;
            _camera.Switch(buildingPreview.BuildingType);
        }

        if (type == GridObjectType.Decoration)
        {
            Decoration decorationPreview = (Decoration)_gridObjectPreview;
            _camera.Switch(decorationPreview.DecorationType);
        }

        if (type == GridObjectType.Resource)
        {
            Resource resourcePreview = (Resource)_gridObjectPreview;
            _camera.Switch(resourcePreview.ResourceType);
        }

        if(type == GridObjectType.Obelisk)
        {
            _camera.Switch(GridObjectType.Obelisk);
        }
    }

    public void RotatePreview()
    {
        if (_preview.gameObject.activeSelf == true)
        {
            _gridObjectPreview.Rotate();
        }

        if (_stampAdditionalPreview.gameObject.activeSelf == true)
        {
            _stampAdditionalPreview.RotatePreview();
        }
    }

    public void SwitchPreviewsForTool(ToolType toolType)
    {
        if (toolType == ToolType.Pencil ||
           toolType == ToolType.Brush)
        {
            _preview.SetActive(true);
            if (_gridObjectPreview.Decoration?.SetupType == DecorationSetupType.Multiple)
            {
                _decorationsAdditionalPreview.gameObject.SetActive(true);
            }
            _stampAdditionalPreview.gameObject.SetActive(false);
        }
        else if (toolType == ToolType.Eraser)
        {
            _preview.SetActive(false);
            _decorationsAdditionalPreview.gameObject.SetActive(false);
            _stampAdditionalPreview.gameObject.SetActive(false);
        }
        else if (toolType == ToolType.Stamp)
        {
            _preview.SetActive(false);
            _decorationsAdditionalPreview.gameObject.SetActive(false);
            _stampAdditionalPreview.gameObject.SetActive(true);
        }
    }

    #region Properties
    public GridObject Preview
    {
        get
        {
            return _gridObjectPreview;
        }
    }

    public List<Decoration> Decorations
    {
        get
        {
            return _decorationsAdditionalPreview.Decorations;
        }
    }

    public StampAdditionalPreview StampAdditionalPreview
    {
        get
        {
            return _stampAdditionalPreview;
        }
    }
    #endregion
}
