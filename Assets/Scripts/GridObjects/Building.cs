using UnityEngine;

public class Building : GridObject
{
    [SerializeField] protected BuildingType _buildingType;

    #region Properties
    public BuildingType BuildingType
    {
        get
        {
            return _buildingType;
        }
    }
    #endregion
}
