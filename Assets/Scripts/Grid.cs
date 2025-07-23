using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using UnityEngine;
using UnityEngine.UIElements;

public class Grid : MonoBehaviour
{
    public static Grid Instance { get; private set; }

    public const int WIDTH = 100;
    public const int HEIGHT = 100;

    [SerializeField] private Cell _cellPrefab;
    [SerializeField] private Unit _knight;
    [SerializeField] private Unit _skeletonMinion;

    [SerializeField] private GridMode _gridMode;
    [SerializeField] private bool _isSpawningUnits;

    private Cell[,] _cells;

    private void Awake()
    {
        if (Instance != null && Instance != this)
        {
            Destroy(gameObject);
        }
        else
        {
            Instance = this;
        }
    }

    public void InitGrid()
    {
        _cells = new Cell[WIDTH, HEIGHT];
    }

    public void CreateGrid()
    {
        Load();

        if (_gridMode == GridMode.Game)
            HideMap();

        if (_isSpawningUnits)
            SpawnUnits();
    }

    private void SpawnUnits()
    {
        //_cells[0, 0]._ownedUnit = _knight;
        //_knight.SetCell(_cells[0, 0]);
        //_knight.gameObject.transform.RotateAround(_knight.gameObject.transform.position, _knight.gameObject.transform.up, 180f);
        //_knight.gameObject.SetActive(true);
        //InitialRevealArea(0, 0);

        //_cells[11, 11]._ownedUnit = _skeletonMinion;
        //_skeletonMinion.SetCell(_cells[11, 11]);
        //_skeletonMinion.transform.position = Hex.GetWorldPosition(new Vector2Int(11, 11));
        //_skeletonMinion.gameObject.transform.RotateAround(_skeletonMinion.gameObject.transform.position, _skeletonMinion.gameObject.transform.up, 180f);
        //_skeletonMinion.gameObject.SetActive(true);
        //RevealArea(new Vector2Int(11, 11));
    }

    private void HideMap()
    {
        for (int x = 0; x < WIDTH; x++)
        {
            for (int y = 0; y < HEIGHT; y++)
            {
                _cells[x, y].gameObject.SetActive(false);
            }
        }
    }

    public void RevealArea(Vector2Int center)
    {
        if (!IsInBounds(center)) return;

        List<Vector2Int> area = Area.Instance.GetArea(center, 4);
        foreach(Vector2Int position in area)
        {
            RevealCell(position);
        }

        Circle circle = Area.Instance.GetCircle(center, 5);


        DirectionalRevealCell(circle.LeftCorner, center, 0f, 0.3f);
        DirectionalRevealCell(circle.LeftTopCorner, center, 60f, 0.3f);
        DirectionalRevealCell(circle.RightTopCorner, center, 120f, 0.3f);
        DirectionalRevealCell(circle.RightCorner, center, 180f, 0.3f);
        DirectionalRevealCell(circle.RightDownCorner, center, 240f, 0.3f);
        DirectionalRevealCell(circle.LeftDownCorner, center, 300f, 0.3f);


        foreach (Vector2Int position in circle.PositionsFromLeftToLeftTop) DirectionalRevealCell(position, center, 30f, 0.48f);
        foreach (Vector2Int position in circle.PositionsFromLeftTopToRightTop) DirectionalRevealCell(position, center, 90f, 0.48f);
        foreach (Vector2Int position in circle.PositionsFromRightTopToRight) DirectionalRevealCell(position, center, 150f, 0.48f);
        foreach (Vector2Int position in circle.PositionsFromRightToRightDown) DirectionalRevealCell(position, center, 210f, 0.48f);
        foreach (Vector2Int position in circle.PositionsFromRightDownToLeftDown) DirectionalRevealCell(position, center, 270f, 0.48f);
        foreach (Vector2Int position in circle.PositionsFromLeftDownToLeft) DirectionalRevealCell(position, center, 330f, 0.48f);
    }

    private void RevealCell(Vector2Int position)
    {
        if (!IsInBounds(position)) return;

        _cells[position.x, position.y].Reveal();
    }

    private void DirectionalRevealCell(Vector2Int position, Vector2Int viewerPosition, float rotation, float revealingTreshold)
    {
        if (!IsInBounds(position)) return;

        _cells[position.x, position.y].DirectionalReveal(viewerPosition, rotation, revealingTreshold);
    }

    public void SetGridObject(GridObject prefab, Vector2Int position, int rotation, OnHexPosition onHexPosition)
    {
        if (!IsInBounds(position)) return;

        GridObject gridObject = Instantiate(prefab);
        gridObject.Init(position, this.transform, rotation, onHexPosition);

        if (prefab.Type == GridObjectType.Cell)
        {
            SetCell((Cell)gridObject, position);
        }
        else 
        if (prefab.Type == GridObjectType.Building ||
            prefab.Type == GridObjectType.Decoration ||
            prefab.Type == GridObjectType.Resource ||
            prefab.Type == GridObjectType.Obelisk)
        {
            Cell cell = _cells[position.x, position.y];
            cell.SetGridObject(gridObject);
        }
    }

    public void SetGridObject(GridObject prefab, Vector2Int position, int rotation)
    {
        SetGridObject(prefab, position, rotation, OnHexPosition.Center);
    }

    public void SetGridObject(GridObject prefab, Vector2Int position)
    {
        SetGridObject(prefab, position, prefab.Rotation, OnHexPosition.Center);
    }

    public void SetGridObjects<T>(List<T> gridObjects, Vector2Int position) where T : GridObject
    {
        if (!IsInBounds(position)) return;

        Cell cell = _cells[position.x, position.y];

        foreach (T gridObject in gridObjects)
        {
            T newGridObject = Instantiate(gridObject);
            newGridObject.Init(position, this.transform, gridObject.Rotation, gridObject.OnHexPosition);
            cell.SetGridObject(newGridObject);
        }
    }

    public static bool IsInBounds(Vector2Int position)
    {
        return ((position.x >= 0 && position.x < WIDTH) && (position.y >= 0 && position.y < HEIGHT));
    }

    public static bool IsInBounds(int x, int y)
    {
        return ((x >= 0 && x < WIDTH) && (y >= 0 && y < HEIGHT));
    }

    public Cell GetCell(Vector2Int position)
    {
        if (!IsInBounds(position)) return null;

        Cell cell = _cells[position.x, position.y];
        return cell;
    }

    private void SetCell(Cell cell, Vector2Int position)
    {
        DestroyCell(position);
        _cells[position.x, position.y] = cell;
    }

    public void DestroyCell(int x, int y)
    {
        if (_cells[x, y] == null) return;

        _cells[x, y].ClearCell();
        Destroy(_cells[x, y].gameObject);
    }

    public void DestroyCell(Vector2Int position)
    {
        DestroyCell(position.x, position.y);
    }

    public class SaveObject
    {
        public GridObject.SaveObject[] _gridObjectSaveObjectArray;
    }

    public void Save()
    {
        List<GridObject.SaveObject> gridObjectSaveObjectList = new List<GridObject.SaveObject>();

        for (int x = 0; x < WIDTH; x++)
        {
            for (int y = 0; y < HEIGHT; y++)
            {
                Cell cell = _cells[x, y];
                gridObjectSaveObjectList.Add(cell.Save());
                gridObjectSaveObjectList.AddRange(cell.SaveOwned());
            }
        }

        Grid.SaveObject saveObject = new SaveObject { _gridObjectSaveObjectArray = gridObjectSaveObjectList.ToArray() };

        string json = JsonUtility.ToJson(saveObject);
        string filePath = Application.dataPath + "\\Map.json";
        File.WriteAllText(filePath, json);
        Debug.Log("Map is saved");
    }

    public void Load()
    {
        string filePath = Application.dataPath + "\\Map.json";
        string json = File.ReadAllText(filePath);
        SaveObject savedGridObjects = JsonUtility.FromJson<SaveObject>(json);
        foreach(GridObject.SaveObject gridObjectSaveObject in savedGridObjects._gridObjectSaveObjectArray)
        {
            GridObject prefab = PrefabHolder.Instance.Get(gridObjectSaveObject._prefabIndex);

            LoadGridObject(prefab, gridObjectSaveObject);
        }

        Debug.Log("Map was loaded");
    }

    public void LoadGridObject(GridObject prefab, GridObject.SaveObject gridObjectSaveObject)
    {
        SetGridObject(prefab, gridObjectSaveObject._position, gridObjectSaveObject._rotation, (OnHexPosition)gridObjectSaveObject._onHexPosition);
    }

    public List<GridObject.SaveObject> CellState(Vector2Int position)
    {
        return CellState(position.x, position.y);
    }

    private List<GridObject.SaveObject> CellState(int x, int y)
    {
        if (!IsInBounds(x, y)) return null;

        List<GridObject.SaveObject> cellState = new List<GridObject.SaveObject>();

        Cell cell = _cells[x, y];
        cellState.Add(cell.Save());
        cellState.AddRange(cell.SaveOwned());

        return cellState;
    }
}
