using UnityEngine;

public class Node
{
    public Vector2Int position;

    public int gCost;
    public int hCost;
    public int fCost;

    public bool isWalkable;
    public Node cameFromNode;

    public Node(Vector2Int position)
    {
        this.position = position;
        isWalkable = true;
    }

    public void CalculateFCost()
    {
        fCost = gCost + hCost;
    }

    /*public void SetIsWalkable(bool isWalkable)
    {
        this.isWalkable = isWalkable;
        grid.TriggerGridObjectChanged(x, y);
    }*/

    public override string ToString()
    {
        return position.x + "," + position.y;
    }
}
