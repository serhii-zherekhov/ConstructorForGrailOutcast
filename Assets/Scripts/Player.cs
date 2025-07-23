using System;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    public static Player Instance { get; private set; }

    public event EventHandler<CellEventArgs> OnSelectedCellChanged;

    List<Vector2Int> _frontier = new List<Vector2Int>();
    private Cell _selectedCell;
    private Unit _selectedUnit;

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

    private void Start()
    {
        Grid.Instance.InitGrid();
        Grid.Instance.CreateGrid();
        _selectedCell = Grid.Instance.GetCell(new Vector2Int(99, 99));
    }

    private void Update()
    {
        HandleHexSelection();
    }

    private void HandleHexSelection()
    {
        if (Input.GetMouseButtonDown(Mouse.LeftButton))
        {
            Cell cell = Grid.Instance.GetCell(HexPointer.Instance.Position);

            if (cell == null) return;

            if (_selectedCell != cell)
            {
                Cell previousCell = _selectedCell;
                Cell newCell = cell;
                
                _selectedCell = newCell;

                newCell.Select();
                previousCell?.Unselect();

                CellEventArgs args = new()
                {
                    Cell = _selectedCell
                };
                OnSelectedCellChanged?.Invoke(this, args);
                
                if(_selectedUnit != null && newCell.HasUnit())
                {
                    _selectedUnit = newCell.OwnedUnit;

                    foreach (Vector2Int position in _frontier)
                    {
                        Cell frontierCell = Grid.Instance.GetCell(position);
                        frontierCell.Unselect();
                    }
                    _frontier.Clear();

                    //Dijkstra - тут пока просто поиск в ширину
                    Vector2Int start = newCell.Position;
                    SelectFrontier(start);
                }
                else if (_selectedUnit != null && !newCell.HasUnit())
                {
                    Vector2Int start = _selectedUnit.Cell.Position;
                    Vector2Int end = newCell.Position;
                    //A_star - тут вместо а звезды должен быть проход по пути отталкиваясь от дейкстры выше
                    List<Vector2Int> path = AStar.Instance.FindPath(start, end);
                    string str = "";
                    if(path != null)
                    foreach(Vector2Int node in path)
                    {
                        str += node.ToString() + " ";
                    }
                    Debug.Log(str);


                    _selectedUnit.Move(new Queue<Vector2Int>(path));

                    previousCell.SetUnit(null);
                    newCell.SetUnit(_selectedUnit);
                    _selectedUnit.SetCell(newCell);
                    _selectedUnit = null;
                    newCell.Unselect();
                    _selectedCell = null;


                    foreach (Vector2Int position in _frontier)
                    {
                        Cell frontierCell = Grid.Instance.GetCell(position);
                        frontierCell?.Unselect();
                    }
                    _frontier.Clear();
                }
                else if (_selectedUnit == null && newCell.HasUnit())
                {
                    _selectedUnit = newCell.OwnedUnit;

                    //Dijkstra - тут пока просто поиск в ширину
                    Vector2Int start = newCell.Position;
                    SelectFrontier(start);
                }
                else if (_selectedUnit == null && !newCell.HasUnit())
                {
                    
                }
            }          
        }

        if (Input.GetMouseButtonDown(Mouse.RightButton))
        {
            _selectedUnit = null;

            _selectedCell?.Unselect();
            _selectedCell = null;

            foreach (Vector2Int position in _frontier)
            {
                Cell frontierCell = Grid.Instance.GetCell(position);
                frontierCell.Unselect();
            }
            _frontier.Clear();
        }
    }

    List<GridObject> _obelisks = new List<GridObject>();

    private void SelectFrontier(Vector2Int start)
    {
        //_frontier = Dijkstra.Instance.FindFrontier(start);
        System.Diagnostics.Stopwatch watch = System.Diagnostics.Stopwatch.StartNew();
        _frontier = Area.Instance.GetArea(start, 3);
        watch.Stop();
        Debug.Log("ElapsedTime: " + watch.ElapsedMilliseconds.ToString("F3"));

        //string str = "";
        //if (_frontier != null)
        //    foreach (Vector2Int position in _frontier)
        //    {
        //        str += position.ToString() + " ";
        //        Cell frontierCell = Grid.Instance.GetCell(position);
        //        frontierCell?.Select();
        //
        //        GridObject obelisk = Instantiate(PrefabHolder.Instance.Get(203));
        //        obelisk.transform.position = Hex.GetWorldPosition(position);
        //        _obelisks.Add(obelisk);
        //    }
        //Debug.Log(str);
    }
}
