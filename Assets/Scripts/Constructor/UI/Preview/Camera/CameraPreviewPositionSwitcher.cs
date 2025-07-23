using System.Collections.Generic;
using UnityEngine;

public class CameraPreviewPositionSwitcher : MonoBehaviour
{
    [SerializeField] private CameraPreviewPosition[] _cameraPreviewPositions;
    private Dictionary<BuildingType, Transform> _showingBuildingPositions = new Dictionary<BuildingType, Transform>();
    private Dictionary<DecorationType, Transform> _showingDecorationPositions = new Dictionary<DecorationType, Transform>();
    private Dictionary<ResourceType, Transform> _showingResourcePositions = new Dictionary<ResourceType, Transform>();
    private Camera _camera;
    private Transform _showingCellPosition;
    private Transform _showingObeliskPosition;

    private void Awake()
    {
        _camera = GetComponent<Camera>();

        foreach(CameraPreviewPosition cameraPreviewPosition in _cameraPreviewPositions)
        {
            if(cameraPreviewPosition == null) continue;

            if(cameraPreviewPosition.Type == GridObjectType.Cell)
            {
                _showingCellPosition = cameraPreviewPosition.transform;
            }

            if (cameraPreviewPosition.Type == GridObjectType.Building && (_showingBuildingPositions.ContainsKey(cameraPreviewPosition.BuildingType) == false))
            {
                _showingBuildingPositions.Add(cameraPreviewPosition.BuildingType, cameraPreviewPosition.transform);
            }

            if(cameraPreviewPosition.Type == GridObjectType.Decoration && (_showingDecorationPositions.ContainsKey(cameraPreviewPosition.DecorationType) == false))
            {
                _showingDecorationPositions.Add(cameraPreviewPosition.DecorationType, cameraPreviewPosition.transform);
            }

            if(cameraPreviewPosition.Type == GridObjectType.Resource && (_showingResourcePositions.ContainsKey(cameraPreviewPosition.ResourceType) == false))
            {
                _showingResourcePositions.Add(cameraPreviewPosition.ResourceType, cameraPreviewPosition.transform);
            }

            if (cameraPreviewPosition.Type == GridObjectType.Obelisk)
            {
                _showingObeliskPosition = cameraPreviewPosition.transform;
            }
        }
    }

    public void Switch(GridObjectType type) 
    {
        if (type == GridObjectType.Cell)
        {
            Transform transform = _showingCellPosition;
            _camera.transform.SetParent(transform);
            _camera.transform.SetPositionAndRotation(transform.position, transform.rotation);
        }

        if (type == GridObjectType.Obelisk)
        {
            Transform transform = _showingObeliskPosition;
            _camera.transform.SetParent(transform);
            _camera.transform.SetPositionAndRotation(transform.position, transform.rotation);
        }
    }

    public void Switch(BuildingType buildingType)
    {
        if ((buildingType == BuildingType.Undefined)) return;

        Transform transform = _showingBuildingPositions[buildingType];
        _camera.transform.SetParent(transform);
        _camera.transform.SetPositionAndRotation(transform.position, transform.rotation);
    }

    public void Switch(DecorationType decorationType)
    {
        if ((decorationType == DecorationType.Undefined)) return;

        Transform transform = _showingDecorationPositions[decorationType];
        _camera.transform.SetParent(transform);
        _camera.transform.SetPositionAndRotation(transform.position, transform.rotation);
    }

    public void Switch(ResourceType resourceType)
    {
        if ((resourceType == ResourceType.Undefined)) return;

        Transform transform = _showingResourcePositions[resourceType];
        _camera.transform.SetParent(transform);
        _camera.transform.SetPositionAndRotation(transform.position, transform.rotation);
    }
}
