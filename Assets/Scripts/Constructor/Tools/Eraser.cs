using System.Collections.Generic;
using UnityEngine;

public class Eraser : ContinuousTool
{
    public override void Init(ConstructorUI constructorUI)
    {
        base.Init(constructorUI);
        _type = ToolType.Eraser;
        constructorUI.SwitchUIForTool(_type);
    }

    public override void Use()
    {
        if (Input.GetMouseButtonUp(Mouse.LeftButton))
        {
            BackupSendToHistory();
            _visitedPositions.Clear();
        }

        if (Pointer.Instance.IsMouseOverUI) return;
        if (Input.GetMouseButtonDown(Mouse.LeftButton))
        {
            CreateBackup();
            Erase();
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
            Erase();
            _position = HexPointer.Instance.Position;
            _visitedPositions.Add(_position);

            if (_constructorUI.IsMirroring)
            {
                _visitedPositions.Add(Mirror.ReflectPosition(_position));
            }
        }
    }
}
