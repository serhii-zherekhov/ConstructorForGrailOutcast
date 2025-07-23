using System.Collections.Generic;
using UnityEngine;

public abstract class ContinuousTool : Tool
{
    protected HashSet<Vector2Int> _visitedPositions;
    protected Vector2Int _position;

    public override void Init(ConstructorUI constructorUI)
    {
        base.Init(constructorUI);
        _visitedPositions = new HashSet<Vector2Int>();
    }

    public abstract override void Use();
}
