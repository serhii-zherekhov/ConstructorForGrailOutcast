using System;
using UnityEngine;

public class UnitPointer : MonoBehaviour
{
    public static UnitPointer Instance { get; private set; }

    private Unit _unit;

    private void Awake()
    {
        if (Instance != null && Instance != this)
        {
            Destroy(gameObject);
        }
        else
        {
            Instance = this;
        }
    }

    private void Start()
    {
        Pointer.Instance.OnRayHitGameObject += UnitOutlineOn_OnRayHitGameObject;
        Pointer.Instance.OnRayHitNothing += UnitOutlineOff_OnRayHitNothing;
    }

    private void UnitOutlineOn_OnRayHitGameObject(object sender, GameObjectEventArgs e)
    {
        if (_unit != null) return;

        GameObject gameObject = e.GameObject;
        UnitElement unitElement = gameObject.GetComponent<UnitElement>();
        _unit  = unitElement?.Unit;
        _unit?.OutlineOn();
    }

    private void UnitOutlineOff_OnRayHitNothing(object sender, EventArgs e)
    {
        if (_unit == null) return;

        _unit.OutlineOff();
        _unit = null;
    }

    private void OnDestroy()
    {
        Pointer.Instance.OnRayHitGameObject -= UnitOutlineOn_OnRayHitGameObject; 
        Pointer.Instance.OnRayHitNothing -= UnitOutlineOff_OnRayHitNothing;
    }

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
