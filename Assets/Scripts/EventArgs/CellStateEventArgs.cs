using System;
using System.Collections.Generic;
using UnityEngine;

public class CellStateEventArgs : EventArgs
{
    public List<GridObject.SaveObject> CellState { get; set; }
}
