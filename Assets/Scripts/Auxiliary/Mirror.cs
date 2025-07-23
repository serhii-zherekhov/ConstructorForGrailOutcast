using System.Collections.Generic;
using UnityEngine;

public class Mirror 
{
    public static Vector2Int ReflectPosition(Vector2Int position) 
    {
        Vector2Int mirroredPosition = new Vector2Int(Grid.WIDTH, Grid.HEIGHT) - Vector2Int.one - position;
        return mirroredPosition;
    }

    public static int ReflectRotation(int rotation)
    {
        return (rotation + GridObject.HALF_AROUND_ROTATION) % (GridObject.MAX_ROTATION + 1);
    }

    public static OnHexPosition ReflectOnHexPosition(OnHexPosition onHexPosition)
    {
        switch (onHexPosition)
        {
            case OnHexPosition.HalfLowerCorner:         return OnHexPosition.HalfUpperCorner;
            case OnHexPosition.HalfLowerLeftCorner:     return OnHexPosition.HalfUpperRightCorner;
            case OnHexPosition.HalfLowerRightCorner:    return OnHexPosition.HalfUpperLeftCorner;
            case OnHexPosition.Center:                  return OnHexPosition.Center;
            case OnHexPosition.HalfUpperCorner:         return OnHexPosition.HalfLowerCorner;
            case OnHexPosition.HalfUpperLeftCorner:     return OnHexPosition.HalfLowerRightCorner;
            case OnHexPosition.HalfUpperRightCorner:    return OnHexPosition.HalfLowerLeftCorner;

            default:                                    return OnHexPosition.Undefined;
        }
    }

    public static GridObject.SaveObject ReflectSaveObject(GridObject.SaveObject saveObject)
    {
        GridObject.SaveObject mirroredSaveObject = new GridObject.SaveObject()
        {
            _prefabIndex =      saveObject._prefabIndex,
            _position =         Mirror.ReflectPosition(saveObject._position),
            _rotation =         Mirror.ReflectRotation(saveObject._rotation),
            _onHexPosition =    (int)Mirror.ReflectOnHexPosition((OnHexPosition)saveObject._onHexPosition)
        };

        return mirroredSaveObject;
    }

    public static List<GridObject.SaveObject> ReflectCellState(List<GridObject.SaveObject> cellState)
    {
        List<GridObject.SaveObject> mirroredCellState = new List<GridObject.SaveObject>();

        foreach (GridObject.SaveObject saveObject in cellState)
        {
            mirroredCellState.Add(Mirror.ReflectSaveObject(saveObject));
        }

        return mirroredCellState;
    }
}
