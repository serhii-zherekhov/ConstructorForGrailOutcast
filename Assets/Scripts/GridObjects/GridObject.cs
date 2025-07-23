using System;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

public class GridObject : MonoBehaviour
{
    public const int HALF_AROUND_ROTATION = 3;
    public const int MAX_ROTATION = 5;
    private const float ONE_SEGMENT_ROTATION = 60f;


    #region Primary

    [SerializeField] private int _prefabIndex;

    [SerializeField] protected GridObjectType _type;

    protected Vector2Int _position;

    protected int _rotation;

    protected OnHexPosition _onHexPosition;

    #endregion


    #region Awake and Initial values

    private Vector3 _initialWorldPosition;
    private Quaternion _awakeRotation;
    [SerializeField] [Range(0, MAX_ROTATION)] protected int _initialRotation;

    #endregion


    #region Auxiliary

    [SerializeField] protected bool _isShownInConstructor;
    [SerializeField] protected bool _isRotatable;

    [SerializeField] private Sprite _thumbnail;

    private List<Material> _materials = new List<Material>();
    private static Color _darkerColor => new Color(0.5f, 0.5f, 0.5f, 1.0f);
    private static Color _transparentColor => new Color(1.0f, 1.0f, 1.0f, 0.3f);
    private static Color _defaultColor => new Color(1.0f, 1.0f, 1.0f, 1.0f);

    private MeshRenderer _renderer;
    protected Revealer _revealer;
    protected bool _isRevealed = false;
    #endregion


    private void Awake()
    {
        _awakeRotation = Quaternion.identity;

        /*if (GetComponent<MeshRenderer>() != null)
        {
            Material material = GetComponent<MeshRenderer>().material;
            
            _materials.Add(material);
        }

        if (transform.childCount > 0)
        {
            LoopThroughChildMaterials(transform);
        }*/

        _renderer = GetComponent<MeshRenderer>();

        if (TryGetComponent<Revealer>(out _revealer))
        {
            _revealer.Init();
        }
    }

    /*private void LoopThroughChildMaterials(Transform transform)
    {
        foreach (Transform child in transform)
        {
            if (child.GetComponent<MeshRenderer>() != null)
            {
                Material material = child.GetComponent<MeshRenderer>().material;
                _materials.Add(material);
            }

            if (child.childCount > 0)
            {
                LoopThroughChildMaterials(child);
            }
        }
    }*/

    public void Init(Vector3 worldPosition, Transform parent, int rotation, OnHexPosition onHexPosition)
    {
        _initialWorldPosition = worldPosition;
        SetPosition(worldPosition);
        SetRotation(rotation);
        SetOnHexPosition(onHexPosition);
        transform.SetParent(parent);
    }

    public void Init(Vector3 worldPosition, Transform parent, int rotation)
    {
        Init(worldPosition, parent, rotation, OnHexPosition.Center);
    }

    public void Init(Vector2Int position, Transform parent, int rotation, OnHexPosition onHexPosition)
    {
        Vector3 worldPosition = Hex.GetWorldPosition(position);
        Init(worldPosition, parent, rotation, onHexPosition);
        _position = position;
    }

    public void Init(Vector2Int position, Transform parent, int rotation)
    {
        Init(position, parent, rotation, OnHexPosition.Center);
    }

    private void SetPosition(Vector3 position)
    {
        transform.position = position;
    }

    public void Rotate()
    {
        if (!_isRotatable) return;

        _rotation++;
        if (_rotation > MAX_ROTATION) _rotation = 0;

        transform.RotateAround(transform.position, Vector3.up, ONE_SEGMENT_ROTATION);
    }

    private void SetRotation(int rotation)
    {
        if (!_isRotatable) return;

        _rotation = rotation % (MAX_ROTATION + 1);

        transform.rotation = _awakeRotation;
        transform.RotateAround(transform.position, Vector3.up, ONE_SEGMENT_ROTATION * _rotation);
    }

    public void SetOnHexPosition(OnHexPosition onHexPosition)
    {
        transform.position = _initialWorldPosition;

        switch (onHexPosition)
        {
            case OnHexPosition.HalfUpperLeftCorner: transform.position += Hex.HalfUpperLeftCorner; break;
            case OnHexPosition.HalfUpperCorner: transform.position += Hex.HalfUpperCorner; break;
            case OnHexPosition.HalfUpperRightCorner: transform.position += Hex.HalfUpperRightCorner; break;
            case OnHexPosition.Center: break;
            case OnHexPosition.HalfLowerLeftCorner: transform.position += Hex.HalfLowerLeftCorner; break;
            case OnHexPosition.HalfLowerCorner: transform.position += Hex.HalfLowerCorner; break;
            case OnHexPosition.HalfLowerRightCorner: transform.position += Hex.HalfLowerRightCorner; break;
        }

        _onHexPosition = onHexPosition;
    }

    public void SetPrefabIndex(int prefabIndex)
    {
        _prefabIndex = prefabIndex;
    }

    public void Select()
    {
        foreach (Material material in _renderer.materials)
        { 
            material.color = _darkerColor; 
        }
    }

    public void Unselect()
    {
        foreach (Material material in _renderer.materials)
        {
            material.color = _defaultColor;
        }
    }

    public void MakeTransparent()
    {
        foreach (Material material in _materials)
        {
            material.color = _transparentColor;
        }
    }

    public void MakeDefault()
    {
        foreach (Material material in _materials)
        {
            material.color = _defaultColor;
        }
    }

    [System.Serializable]
    public class SaveObject
    {
        public int _prefabIndex;
        public Vector2Int _position;
        public int _rotation;
        public int _onHexPosition;
    }

    public virtual SaveObject Save()
    {
        return new SaveObject
        {
            _prefabIndex = _prefabIndex,
            _position = _position,
            _rotation = _rotation
        };
    }

    #region Properties
    public Cell Cell
    {
        get
        {
            if (_type == GridObjectType.Cell)
            {
                return (Cell)this;
            }
            else
            {
                return null;
            }
        }
    }
    public Building Building
    {
        get
        {
            if (_type == GridObjectType.Building)
            {
                return (Building)this;
            }
            else
            {
                return null;
            }
        }
    }
    public Decoration Decoration
    {
        get
        {
            if (_type == GridObjectType.Decoration)
            {
                return (Decoration)this;
            }
            else
            {
                return null;
            }
        }
    }
    public Resource Resource
    {
        get
        {
            if (_type == GridObjectType.Resource)
            {
                return (Resource)this;
            }
            else
            {
                return null;
            }
        }
    }
    public GridObjectType Type
    {
        get
        {
            return _type;
        }
    }

    public Vector2Int Position
    {
        get
        {
            return _position;
        }
    }

    public int X
    {
        get
        {
            return _position.x;
        }
    }

    public int Y
    {
        get
        {
            return _position.y;
        }
    }

    public int Rotation
    {
        get
        {
            return _rotation;
        }
    }

    public int InitialRotation
    {
        get
        {
            return _initialRotation;
        }
    }

    public OnHexPosition OnHexPosition
    {
        get
        {
            return _onHexPosition;
        }
    }

    public bool IsShownInConstructor
    {
        get
        {
            return _isShownInConstructor;
        }
    }

    public Sprite Thumbnail
    {
        get
        {
            return _thumbnail;
        }
    }
    #endregion
}
