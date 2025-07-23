using UnityEngine;

public class CameraPreviewPosition : MonoBehaviour
{
    [SerializeField] private GridObjectType _gridObjectType;
    [SerializeField] private BuildingType _buildingType;
    [SerializeField] private DecorationType _decorationType;
    [SerializeField] private ResourceType _resourceType;

    #region Properties
    public GridObjectType Type
    {
        get
        {
            return _gridObjectType;
        }
    }

    public BuildingType BuildingType
    {
        get
        {
            return _buildingType;
        }
    }

    public DecorationType DecorationType
    {
        get
        {
            return _decorationType;
        }
    }

    public ResourceType ResourceType
    {
        get
        {
            return _resourceType;
        }
    }
    #endregion
}
