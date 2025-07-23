using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using System;

public class Area 
{
    private static Area _instance = null;
    private Area() { }

    public static Area Instance
    {
        get
        {
            if (_instance == null)
            {
                _instance = new Area();
            }
            return _instance;
        }
    }

    public List<Vector2Int> GetArea(Vector2Int center, int radius)
    {
        List<Vector2Int> positions = new List<Vector2Int>();

        for(int i = 0; i <= radius; i++)
        {
            positions.AddRange(Circle(center, i));
        }

        return positions;
    }

    private List<Vector2Int> Circle(Vector2Int center, int radius)
    {
        if (radius <= 0) return new List<Vector2Int>() { center };

        List<Vector2Int> positions = new List<Vector2Int>();
        Vector2Int start = center + Left * radius;
        positions.Add(start);

        List<Vector2Int> directions = new List<Vector2Int>() { RightUp, Right, RightDown, LeftDown, Left, LeftUp };

        foreach(Vector2Int direction in directions)
        {
            positions.AddRange(Line(positions.Last(), direction, radius));
        }

        positions.RemoveAt(0);

        return positions;
    }

    public Circle GetCircle(Vector2Int center, int radius)
    {
        if (radius <= 0) return new Circle(new List<Vector2Int>() { center });

        List<Vector2Int> positions = new List<Vector2Int>();
        Circle circle = new Circle(positions);
        Vector2Int start = center + Left * radius;
        positions.Add(start);

        List<Vector2Int> directions = new List<Vector2Int>() { RightUp, Right, RightDown, LeftDown, Left, LeftUp };

        foreach (Vector2Int direction in directions)
        {
            if(direction == RightUp)
            {
                List<Vector2Int> line = Line(positions.Last(), direction, radius);
                positions.AddRange(line);
                circle.LeftTopCorner = line.Last();
                line.RemoveAt(line.Count - 1);
                circle.PositionsFromLeftToLeftTop = line;
            }

            if (direction == Right)
            {
                List<Vector2Int> line = Line(positions.Last(), direction, radius);
                positions.AddRange(line);
                circle.RightTopCorner = line.Last();
                line.RemoveAt(line.Count - 1);
                circle.PositionsFromLeftTopToRightTop = line;
            }

            if (direction == RightDown)
            {
                List<Vector2Int> line = Line(positions.Last(), direction, radius);
                positions.AddRange(line);
                circle.RightCorner = line.Last();
                line.RemoveAt(line.Count - 1);
                circle.PositionsFromRightTopToRight = line;
            }

            if (direction == LeftDown)
            {
                List<Vector2Int> line = Line(positions.Last(), direction, radius);
                positions.AddRange(line);
                circle.RightDownCorner = line.Last();
                line.RemoveAt(line.Count - 1);
                circle.PositionsFromRightToRightDown = line;
            }

            if (direction == Left)
            {
                List<Vector2Int> line = Line(positions.Last(), direction, radius);
                positions.AddRange(line);
                circle.LeftDownCorner = line.Last();
                line.RemoveAt(line.Count - 1);
                circle.PositionsFromRightDownToLeftDown = line;
            }

            if (direction == LeftUp)
            {
                List<Vector2Int> line = Line(positions.Last(), direction, radius);
                positions.AddRange(line);
                circle.LeftCorner = line.Last();
                line.RemoveAt(line.Count - 1);
                circle.PositionsFromLeftDownToLeft = line;
            }
        }

        positions.RemoveAt(0);

        return circle;
    }

    private List<Vector2Int> Line(Vector2Int start, Vector2Int direction, int distance)
    {
        List<Vector2Int> positions = new List<Vector2Int>();
        positions.Add(start);

        for (int i = 0; i < distance; i++)
        {
            Vector2Int pivot = positions.Last();
            positions.Add(Neighbour(pivot, direction));
        }

        positions.RemoveAt(0);

        return positions;
    }

    private Vector2Int Neighbour(Vector2Int pivot, Vector2Int direction)
    {
        if (direction.y != 0) CheckOddRowOffset(ref pivot, ref direction);
        Vector2Int neighbour = pivot + direction;
        return neighbour;
    }

    private void CheckOddRowOffset(ref Vector2Int pivot, ref Vector2Int direction)
    {
        bool oddRow = Math.Abs((pivot.y + direction.y) % 2) == 1;
        if (oddRow && direction.x > 0) direction += new Vector2Int(-1, 0);
        if ((!oddRow) && direction.x < 0) direction += new Vector2Int(+1, 0);
    }

    #region Directions

    private Vector2Int RightUp
    {
        get
        {
            return new Vector2Int(+1, +1);
        }
    }

    private Vector2Int Right
    {
        get
        {
            return new Vector2Int(+1, +0);
        }
    }

    private Vector2Int RightDown
    {
        get
        {
            return new Vector2Int(+1, -1);
        }
    }

    private Vector2Int LeftDown
    {
        get
        {
            return new Vector2Int(-1, -1);
        }
    }

    private Vector2Int Left
    {
        get
        {
            return new Vector2Int(-1, +0);
        }
    }

    private Vector2Int LeftUp
    {
        get
        {
            return new Vector2Int(-1, +1);
        }
    }

    #endregion
}
