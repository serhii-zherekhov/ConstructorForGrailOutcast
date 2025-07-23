using System.Collections.Generic;
using UnityEngine;

public class Stamp : ContinuousTool
{
    List<GridObject.SaveObject> _copiedCellState = null;
    List<GridObject.SaveObject> _copiedMirroredCellState = null;

    public override void Init(ConstructorUI constructorUI)
    {
        base.Init(constructorUI);
        _type = ToolType.Stamp;
        constructorUI.SwitchUIForTool(_type);
        constructorUI.StampAdditionalPreview.OnCellRotated += RewriteCopiedCellState_OnCellRotated;
    }

    public override void Use()
    {
        if (Input.GetMouseButtonUp(Mouse.LeftButton))
        {
            BackupSendToHistory();
            _visitedPositions.Clear();
        }

        if (Pointer.Instance.IsMouseOverUI) return;

        if (Input.GetMouseButtonDown(Mouse.RightButton))
        {
            Copy();
        }

        if (_copiedCellState == null) return;

        if (Input.GetMouseButtonDown(Mouse.LeftButton))
        {
            CreateBackup();
            Spread();
            _position = HexPointer.Instance.Position;
            _visitedPositions.Add(_position);

            if (_constructorUI.IsMirroring)
            {
                _visitedPositions.Add(Mirror.ReflectPosition(_position));
            }
        }


        if ((Input.GetMouseButton(Mouse.LeftButton)) &&
            (_position != HexPointer.Instance.Position) &&
            (!_visitedPositions.Contains(HexPointer.Instance.Position)))
        {
            Spread();
            _position = HexPointer.Instance.Position;
            _visitedPositions.Add(_position);

            if (_constructorUI.IsMirroring)
            {
                _visitedPositions.Add(Mirror.ReflectPosition(_position));
            }
        }
    }

    private void Spread()
    {
        DrawFromCopy(_copiedCellState, _copiedMirroredCellState);
    }

    private void Copy()
    {
        Vector2Int position = HexPointer.Instance.Position;

        _copiedCellState?.Clear();
        _copiedCellState = CellState(position);

        _copiedMirroredCellState?.Clear();
        _copiedMirroredCellState = Mirror.ReflectCellState(_copiedCellState);

        _constructorUI.StampAdditionalPreview.SetPreview(_copiedCellState);      
    }

    private void RewriteCopiedCellState_OnCellRotated(object sender, CellStateEventArgs e)
    {
        _copiedCellState.Clear();
        _copiedCellState = e.CellState;

        _copiedMirroredCellState.Clear();
        _copiedMirroredCellState = Mirror.ReflectCellState(_copiedCellState);
    }

    private void OnDestroy()
    {
        _constructorUI.StampAdditionalPreview.OnCellRotated -= RewriteCopiedCellState_OnCellRotated;
    }
}
