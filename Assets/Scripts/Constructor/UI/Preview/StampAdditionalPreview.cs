using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class StampAdditionalPreview : MonoBehaviour
{
    public event EventHandler<CellStateEventArgs> OnCellRotated;

    [SerializeField] private Transform _stampPreviewTransform;
    private Cell _cell;

    public void SetPreview(List<GridObject.SaveObject> cellState)
    {
        foreach (GridObject.SaveObject saveObject in cellState)
        {
            GridObject prefab = PrefabHolder.Instance.Get(saveObject._prefabIndex);

            GridObject gridObject = Instantiate(prefab);
            gridObject.Init(_stampPreviewTransform.transform.position, _stampPreviewTransform, saveObject._rotation, (OnHexPosition)saveObject._onHexPosition);

            if(gridObject.Type == GridObjectType.Cell)
            {
                if(_cell != null)
                {
                    _cell.ClearCell();
                    Destroy(_cell.gameObject);
                }

                _cell = (Cell)gridObject;
            }

            if(gridObject.Type == GridObjectType.Building ||
               gridObject.Type == GridObjectType.Decoration ||
               gridObject.Type == GridObjectType.Resource)
            {
                _cell.SetGridObject(gridObject);
            }
        }
    }

    public void RotatePreview()
    {
        if (_cell == null) return;

        _cell.RotateSelfAndOwned();

        List<GridObject.SaveObject> cellState = new List<GridObject.SaveObject>();
        cellState.Add(_cell.Save());
        cellState.AddRange(_cell.SaveOwned());

        CellStateEventArgs args = new()
        {
            CellState = cellState
        };
        OnCellRotated?.Invoke(this, args);
    }
}
