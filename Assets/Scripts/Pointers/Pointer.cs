using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class Pointer : MonoBehaviour
{
    public static Pointer Instance { get; private set; }

    public event EventHandler<GameObjectEventArgs> OnRayHitGameObject;
    public event EventHandler OnRayHitNothing;

    private Vector3 _screenPosition = Vector3.zero;
    private Vector3 _worldPosition = Vector3.zero;
    private Plane _plane = new Plane(Vector3.down, 0);
    private Ray _ray = new Ray();

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

    private void Update()
    {
        _screenPosition = Input.mousePosition;

        _ray = Camera.main.ScreenPointToRay(_screenPosition);

        if (_plane.Raycast(_ray, out float distance))
        {
            _worldPosition = _ray.GetPoint(distance);
        }

        if (Physics.Raycast(_ray, out RaycastHit hit))
        {
            GameObjectEventArgs args = new()
            {
                GameObject = hit.collider.gameObject
            };
            OnRayHitGameObject?.Invoke(this, args);
        }
        else
        {
            OnRayHitNothing?.Invoke(this, EventArgs.Empty);
        }
    }

    public Vector3 GetWorldPosition()
    {
        return _worldPosition;
    }

    private bool IsMouseOverLayer(int layer)
    {
        PointerEventData pointerEventData = new PointerEventData(EventSystem.current);
        pointerEventData.position = Input.mousePosition;

        List<RaycastResult> raycastResultList = new List<RaycastResult>();
        EventSystem.current.RaycastAll(pointerEventData, raycastResultList);
        foreach (RaycastResult raycastResult in raycastResultList)
        {
            if (raycastResult.gameObject.layer == layer)
            {
                return true;
            }
        }

        return false;
    }

    #region Properties
    public bool IsMouseOverUI
    {
        get
        {
            return IsMouseOverLayer(Layer.UI);
        }
    }

    public Vector3 RayVector
    {
        get
        {
            return _ray.direction;
        }
    }
    #endregion
}
