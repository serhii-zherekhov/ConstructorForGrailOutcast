using UnityEngine;

public class UnitElement : MonoBehaviour
{
    [SerializeField] private Unit _unit;

    #region Properties
    public Unit Unit
    {
        get
        {
            return _unit;
        }
    }
    #endregion
}
