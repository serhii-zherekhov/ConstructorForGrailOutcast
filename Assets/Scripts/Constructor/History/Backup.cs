using System;
using System.Collections.Generic;
using UnityEngine;

public class Backup
{
    public List<GridObject.SaveObject> PreviousState { get; set;}
    public List<GridObject.SaveObject> AdjustedState { get; set;}

    public void Clear()
    {
        PreviousState?.Clear();
        AdjustedState?.Clear();
    }
}
