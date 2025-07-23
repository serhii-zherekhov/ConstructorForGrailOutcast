using System.Collections.Generic;
using UnityEngine;

public class Pencil : Tool
{
    public override void Init(ConstructorUI constructorUI)
    {
        base.Init(constructorUI);
        _type = ToolType.Pencil;
        constructorUI.SwitchUIForTool(_type);
    }

    public override void Use()
    {
        if (Pointer.Instance.IsMouseOverUI) return;
        if (Input.GetMouseButtonDown(Mouse.LeftButton))
        {
            CreateBackup();
            Draw();
            BackupSendToHistory();
        }
    }
}
