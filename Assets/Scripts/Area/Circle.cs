using System.Collections.Generic;
using UnityEngine;

public class Circle 
{
    private List<Vector2Int> _positions;

    private Vector2Int _leftCorner;
    private Vector2Int _leftTopCorner;
    private Vector2Int _rightTopCorner;
    private Vector2Int _rightCorner;
    private Vector2Int _rightDownCorner;
    private Vector2Int _leftDownCorner;

    private List<Vector2Int> _positionsFromLeftToLeftTop;
    private List<Vector2Int> _positionsFromLeftTopToRightTop;
    private List<Vector2Int> _positionsFromRightTopToRight;
    private List<Vector2Int> _positionsFromRightToRightDown;
    private List<Vector2Int> _positionsFromRightDownToLeftDown;
    private List<Vector2Int> _positionsFromLeftDownToLeft;

    public Circle(List<Vector2Int> positions)
    {
        _positions = positions;
    }

    #region Properties

    public List<Vector2Int> Positions
    {
        get
        {
            return _positions;
        }
    }

    public Vector2Int LeftCorner
    {
        get
        {
            return _leftCorner;
        }
        set
        {
            _leftCorner = value;
        }
    }

    public Vector2Int LeftTopCorner
    {
        get
        {
            return _leftTopCorner;
        }
        set
        {
            _leftTopCorner = value;
        }
    }

    public Vector2Int RightTopCorner
    {
        get
        {
            return _rightTopCorner;
        }
        set
        {
            _rightTopCorner = value;
        }
    }

    public Vector2Int RightCorner
    {
        get
        {
            return _rightCorner;
        }
        set
        {
            _rightCorner = value;
        }
    }

    public Vector2Int RightDownCorner
    {
        get
        {
            return _rightDownCorner;
        }
        set
        {
            _rightDownCorner = value;
        }
    }

    public Vector2Int LeftDownCorner
    {
        get
        {
            return _leftDownCorner;
        }
        set
        {
            _leftDownCorner = value;
        }
    }

    public List<Vector2Int> PositionsFromLeftToLeftTop
    {
        get
        {
            return _positionsFromLeftToLeftTop;
        }
        set
        {
            _positionsFromLeftToLeftTop = value;
        }
    }

    public List<Vector2Int> PositionsFromLeftTopToRightTop
    {
        get
        {
            return _positionsFromLeftTopToRightTop;
        }
        set
        {
            _positionsFromLeftTopToRightTop = value;
        }
    }

    public List<Vector2Int> PositionsFromRightTopToRight
    {
        get
        {
            return _positionsFromRightTopToRight;
        }
        set
        {
            _positionsFromRightTopToRight = value;
        }
    }

    public List<Vector2Int> PositionsFromRightToRightDown
    {
        get
        {
            return _positionsFromRightToRightDown;
        }
        set
        {
            _positionsFromRightToRightDown = value;
        }
    }

    public List<Vector2Int> PositionsFromRightDownToLeftDown
    {
        get
        {
            return _positionsFromRightDownToLeftDown;
        }
        set
        {
            _positionsFromRightDownToLeftDown = value;
        }
    }

    public List<Vector2Int> PositionsFromLeftDownToLeft
    {
        get
        {
            return _positionsFromLeftDownToLeft;
        }
        set
        {
            _positionsFromLeftDownToLeft = value;
        }
    }

    #endregion
}
