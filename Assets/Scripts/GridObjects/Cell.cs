using System;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class Cell : GridObject
{
    private Building _ownedBuilding;
    private Dictionary<OnHexPosition, Decoration> _ownedDecorations = new Dictionary<OnHexPosition, Decoration>();
    private Resource _ownedResource;
    private Obelisk _ownedObelisk;
    public Unit _ownedUnit; //use in Grid class

    public void SetGridObject(GridObject gridObject)
    {
        switch (gridObject.Type)
        {
            case GridObjectType.Building: SetBuilding((Building)gridObject); break;
            case GridObjectType.Decoration: SetDecoration((Decoration)gridObject); break;
            case GridObjectType.Resource: SetResource((Resource)gridObject); break;
            case GridObjectType.Obelisk: SetObelisk((Obelisk)gridObject); break;
        }

        gridObject.transform.parent = this.transform;
    }

    public void RotateSelfAndOwned()
    {
        Rotate();

        if (HasBuilding()) OwnedBuilding.Rotate();

        if (HasDecorations()) RotateDecorations();
    }

    public bool HasBuilding()
    {
        return (_ownedBuilding != null);
    }

    public void SetBuilding(Building building)
    {
        ClearCellExceptBoundaryDecorations();
        _ownedBuilding = building;
    }

    public bool HasDecorations()
    {
        return (_ownedDecorations?.Count > 0);
    }

    public void SetDecoration(Decoration decoration)
    {
        OnHexPosition onHexPosition = decoration.OnHexPosition;

        if (onHexPosition == OnHexPosition.Center)
        {
            ClearBuilding();
            ClearResource();
            ClearObelisk();
        }

        if (!_ownedDecorations.ContainsKey(onHexPosition))
        {
            _ownedDecorations.Add(onHexPosition, decoration);
        }
        else
        {
            Decoration previousDecoration = _ownedDecorations[onHexPosition];
            if(previousDecoration != null)
            {
                Destroy(previousDecoration.gameObject);
            }
            _ownedDecorations[onHexPosition] = decoration;
        }
    }

    public void RotateDecorations()
    {
        List<Decoration> decorationsToRotate = OwnedDecorations;
        _ownedDecorations.Clear();

        foreach (Decoration decoration in decorationsToRotate)
        {
            decoration.Rotate();

            OnHexPosition onHexPosition = OnHexPosition.Undefined;

            switch (decoration.OnHexPosition)
            {
                case OnHexPosition.HalfUpperLeftCorner: onHexPosition = OnHexPosition.HalfUpperCorner; break;
                case OnHexPosition.HalfUpperCorner: onHexPosition = OnHexPosition.HalfUpperRightCorner; break;
                case OnHexPosition.HalfUpperRightCorner: onHexPosition = OnHexPosition.HalfLowerRightCorner; break;
                case OnHexPosition.HalfLowerRightCorner: onHexPosition = OnHexPosition.HalfLowerCorner; break;
                case OnHexPosition.HalfLowerCorner: onHexPosition = OnHexPosition.HalfLowerLeftCorner; break;
                case OnHexPosition.HalfLowerLeftCorner: onHexPosition = OnHexPosition.HalfUpperLeftCorner; break;
            }

            decoration.SetOnHexPosition(onHexPosition);

            _ownedDecorations.Add(onHexPosition, decoration);
        }
    }

    private void DestroyDecoration(OnHexPosition onHexPosition) 
    {
        if (!_ownedDecorations.ContainsKey(onHexPosition)) return;

        Decoration decoration = _ownedDecorations[onHexPosition];
        Destroy(decoration.gameObject);
        _ownedDecorations.Remove(onHexPosition);
    }

    private void DestroyDecorations()
    {
        foreach(KeyValuePair<OnHexPosition, Decoration> decoration in _ownedDecorations)
        {
            Destroy(decoration.Value.gameObject);         
        }
        _ownedDecorations.Clear();
    }

    public bool HasResource()
    {
        return (_ownedResource != null);
    }

    public void SetResource(Resource resource)
    {
        ClearCellExceptBoundaryDecorations();
        _ownedResource = resource;
    }

    public bool HasObelisk()
    {
        return (_ownedObelisk != null);
    }

    public void SetObelisk(Obelisk obelisk)
    {
        ClearCellExceptBoundaryDecorations();
        _ownedObelisk = obelisk;
    }

    public void ClearCell()
    {
        ClearBuilding();
        ClearDecorations();
        ClearResource();
        ClearObelisk();
    }

    private void ClearCellExceptBoundaryDecorations()
    {
        ClearBuilding();
        DestroyDecoration(OnHexPosition.Center);
        ClearResource();
        ClearObelisk();
    }


    private void ClearBuilding()
    {
        if (HasBuilding())
        {
            Destroy(_ownedBuilding.gameObject);
            _ownedBuilding = null;
        }
    }

    private void ClearDecorations()
    {
        if (HasDecorations())
        {
            DestroyDecorations();
        }
    }

    private void ClearResource()
    {
        if (HasResource()) 
        { 
            Destroy(_ownedResource.gameObject);
            _ownedResource = null;
        }
    }

    private void ClearObelisk()
    {
        if (HasObelisk())
        {
            Destroy(_ownedObelisk.gameObject);
            _ownedObelisk = null;
        }
    }

    public bool HasUnit()
    {
        return (_ownedUnit != null);
    }

    public void SetUnit(Unit unit)
    {
        _ownedUnit = unit;
    }

    public void Reveal()
    {
        if (_isRevealed) return;

        this.gameObject.SetActive(true);
        _revealer.SetDefaultAndDestroy();
        _isRevealed = true;
    }

    [SerializeField] private HexDirectionalRevealDebug _hexDebugPrefab;
    private TMPro.TextMeshProUGUI _text;

    public void DirectionalReveal(Vector2Int viewerPosition, float rotation, float revealingTreshold)
    {
        if (_isRevealed) return;

        this.gameObject.SetActive(true);
        _revealer.DirectionalReveal(rotation, revealingTreshold);

        //SetText(viewerPosition + "\n" + Position + "\n" + (Position - viewerPosition) + "\nR: " + rotation);
    }

    private void SetText(string text)
    {
        if (_text == null)
        {
            HexDirectionalRevealDebug hexDebug = Instantiate(_hexDebugPrefab);
            hexDebug.transform.position = this.transform.position;
            hexDebug.transform.SetParent(this.transform);
            _text = hexDebug.Text;
        }

        _text.text = text;
    }

    public List<GridObject.SaveObject> SaveOwned()
    {
        List<GridObject.SaveObject> gridObjectSaveObjectList = new List<GridObject.SaveObject>();

        if (HasBuilding()) gridObjectSaveObjectList.Add(_ownedBuilding.Save());

        if (HasDecorations())
        {
            foreach (KeyValuePair<OnHexPosition, Decoration> decoration in _ownedDecorations)
            {
                gridObjectSaveObjectList.Add(decoration.Value.Save());
            }
        }

        if (HasResource()) gridObjectSaveObjectList.Add(_ownedResource.Save());

        if (HasObelisk()) gridObjectSaveObjectList.Add(_ownedObelisk.Save());

        return gridObjectSaveObjectList;
    }

    #region Properties
    public Building OwnedBuilding
    {
        get
        {
            return _ownedBuilding;
        }
    }

    public List<Decoration> OwnedDecorations
    {
        get
        {
            if (HasDecorations())
            {
                return _ownedDecorations.Select(decoration => decoration.Value).ToList();
            }
            else
            {
                return null;
            }
        }
    }

    public Resource OwnedResource
    {
        get
        {
            return _ownedResource;
        }
    }

    public Obelisk OwnedObelisk
    {
        get
        {
            return _ownedObelisk;
        }
    }

    public Unit OwnedUnit
    {
        get
        {
            return _ownedUnit;
        }
    }
    #endregion
}
