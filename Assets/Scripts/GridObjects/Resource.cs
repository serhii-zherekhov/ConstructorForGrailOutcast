using UnityEngine;

public class Resource : GridObject
{
    [SerializeField] private ResourceType _resourceType;

    #region Properties
    public ResourceType ResourceType
    {
        get
        {
            return _resourceType;
        }
    }
    #endregion
}
