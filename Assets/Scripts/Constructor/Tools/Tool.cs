using System;
using System.Collections.Generic;
using UnityEngine;

public abstract class Tool : MonoBehaviour
{
    public event EventHandler<BackupEventArgs> OnBackupSentToHistory;

    protected ConstructorUI _constructorUI;
    protected ToolType _type;

    Backup backup = null;

    public virtual void Init(ConstructorUI constructorUI)
    {
        _constructorUI = constructorUI;
    }

    public abstract void Use();

    protected void Draw()
    {
        GridObject preview = _constructorUI.Preview;
        List<Decoration> decorations = _constructorUI.Decorations;
        Vector2Int position = HexPointer.Instance.Position;

        AddPreviousCellStateToBackup(position);

        if (decorations != null)
        {
            Grid.Instance.SetGridObjects(_constructorUI.Decorations, position);

            if (_constructorUI.IsMirroring)
            {
                Vector2Int mirroredPosition = Mirror.ReflectPosition(position);

                foreach (Decoration decoration in decorations)
                {
                    int mirroredRotation = Mirror.ReflectRotation(decoration.Rotation);

                    OnHexPosition mirroredOnHexPosition = Mirror.ReflectOnHexPosition(decoration.OnHexPosition);

                    Grid.Instance.SetGridObject(decoration, mirroredPosition, mirroredRotation, mirroredOnHexPosition);
                }
            }
        }
        else
        {
            Grid.Instance.SetGridObject(preview, position);

            if (_constructorUI.IsMirroring)
            {
                Vector2Int mirroredPosition = Mirror.ReflectPosition(position);
                int mirroredRotation = Mirror.ReflectRotation(_constructorUI.Preview.Rotation);
                Grid.Instance.SetGridObject(preview, mirroredPosition, mirroredRotation);
            }
        }

        AddAdjustedCellStateToBackup(position);
    }

    protected void DrawFromCopy(List<GridObject.SaveObject> copiedCellState, List<GridObject.SaveObject> copiedMirroredCellState)
    {
        Vector2Int position = HexPointer.Instance.Position;

        AddPreviousCellStateToBackup(position);

        foreach (GridObject.SaveObject saveObject in copiedCellState)
        {
            GridObject prefab = PrefabHolder.Instance.Get(saveObject._prefabIndex);

            if (prefab.Type == GridObjectType.Cell && (_constructorUI.IsStampReplacingCell == false)) continue;

            Grid.Instance.SetGridObject(prefab, position, saveObject._rotation, (OnHexPosition)saveObject._onHexPosition);
        }

        if (_constructorUI.IsMirroring)
        {
            foreach (GridObject.SaveObject mirroredSaveObject in copiedMirroredCellState)
            {
                GridObject prefab = PrefabHolder.Instance.Get(mirroredSaveObject._prefabIndex);

                if (prefab.Type == GridObjectType.Cell && (_constructorUI.IsStampReplacingCell == false)) continue;

                Grid.Instance.SetGridObject(prefab, Mirror.ReflectPosition(position), mirroredSaveObject._rotation, (OnHexPosition)mirroredSaveObject._onHexPosition);
            }
        }

        AddAdjustedCellStateToBackup(position);
    }

    protected void Erase()
    {
        Vector2Int position = HexPointer.Instance.Position;

        AddPreviousCellStateToBackup(position);

        Cell cell = Grid.Instance.GetCell(position);
        cell.ClearCell();


        if (_constructorUI.IsMirroring)
        {
            Vector2Int mirroredPosition = Mirror.ReflectPosition(position);
            Cell mirroredCell = Grid.Instance.GetCell(mirroredPosition);
            mirroredCell.ClearCell();
        }

        AddAdjustedCellStateToBackup(position);
    }

    protected void CreateBackup()
    {
        backup = new Backup();
        backup.PreviousState = new List<GridObject.SaveObject>();
        backup.AdjustedState = new List<GridObject.SaveObject>();
    }

    private void AddPreviousCellStateToBackup(Vector2Int position)
    {
        List<GridObject.SaveObject> gridObjectPreviousSaveObjectList = new List<GridObject.SaveObject>();
        gridObjectPreviousSaveObjectList.AddRange(CellState(position));
        if (_constructorUI.IsMirroring)
        {
            Vector2Int mirroredPosition = Mirror.ReflectPosition(position);
            gridObjectPreviousSaveObjectList.AddRange(CellState(mirroredPosition));
        }

        backup.PreviousState.AddRange(gridObjectPreviousSaveObjectList);
    }

    private void AddAdjustedCellStateToBackup(Vector2Int position)
    {
        List<GridObject.SaveObject> gridObjectAdjustedSaveObjectList = new List<GridObject.SaveObject>();
        gridObjectAdjustedSaveObjectList.AddRange(CellState(position));
        if (_constructorUI.IsMirroring)
        {
            Vector2Int mirroredPosition = Mirror.ReflectPosition(position);
            gridObjectAdjustedSaveObjectList.AddRange(CellState(mirroredPosition));
        }

        backup.AdjustedState.AddRange(gridObjectAdjustedSaveObjectList);
    }

    protected List<GridObject.SaveObject> CellState(Vector2Int position) 
    {
        return Grid.Instance.CellState(position);
    }

    protected void BackupSendToHistory()
    {
        if (backup == null) return;

        BackupEventArgs args = new()
        {
            Backup = backup
        };

        OnBackupSentToHistory?.Invoke(this, args);

        backup = null;
    }
}
