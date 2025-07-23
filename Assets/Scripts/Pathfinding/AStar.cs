using System.Collections.Generic;
using UnityEngine;

public class AStar {

    private static AStar _instance = null;

    private const int WIDTH = 100;
    private const int HEIGHT = 100;

    private const int MOVE_STRAIGHT_COST = 10;

    private Node[,] _grid = new Node[WIDTH, HEIGHT];
    private List<Node> _openList;
    private List<Node> _closedList;

    private AStar() { }   

    public static AStar Instance
    { 
        get
        {
            if (_instance == null) 
            {
                _instance = new AStar();
            }
            return _instance;
        }
    }

    public List<Vector2Int> FindPath(Vector2Int start, Vector2Int end)
    {
        List<Node> path = FindPathNodes(start, end);
        if (path == null)
        {
            return null;
        }
        else
        {
            List<Vector2Int> vectorPath = new List<Vector2Int>();
            foreach (Node pathNode in path)
            {
                vectorPath.Add(pathNode.position);
            }
            return vectorPath;
        }
    }

    public List<Node> FindPathNodes(Vector2Int start, Vector2Int end)
    {
        for (int x = 0; x < WIDTH; x++)
        {
            for (int y = 0; y < HEIGHT; y++)
            {
                Node pathNode = new Node(new Vector2Int(x, y));
                pathNode.gCost = 99999999;
                pathNode.CalculateFCost();
                pathNode.cameFromNode = null;
                _grid[x, y] = pathNode;
            }
        }

        Node startNode = _grid[start.x, start.y];
        Node endNode = _grid[end.x, end.y];

        _openList = new List<Node> { startNode };
        _closedList = new List<Node>();



        startNode.gCost = 0;
        startNode.hCost = CalculateDistanceCost(startNode, endNode);
        startNode.CalculateFCost();

        while (_openList.Count > 0)
        {
            Node currentNode = GetLowestFCostNode(_openList);
            if (currentNode == endNode)
            {
                // Reached final node
                return CalculatePath(endNode);
            }

            _openList.Remove(currentNode);
            _closedList.Add(currentNode);

            foreach (Node neighbourNode in GetNeighbourList(currentNode))
            {
                if (neighbourNode == null) continue;
                if (_closedList.Contains(neighbourNode)) continue;
                if (!neighbourNode.isWalkable)
                {
                    _closedList.Add(neighbourNode);
                    continue;
                }

                int tentativeGCost = currentNode.gCost + CalculateDistanceCost(currentNode, neighbourNode);
                if (tentativeGCost < neighbourNode.gCost)
                {
                    neighbourNode.cameFromNode = currentNode;
                    neighbourNode.gCost = tentativeGCost;
                    neighbourNode.hCost = CalculateDistanceCost(neighbourNode, endNode);
                    neighbourNode.CalculateFCost();

                    if (!_openList.Contains(neighbourNode))
                    {
                        _openList.Add(neighbourNode);
                    }
                }
            }
        }

        // Out of nodes on the openList
        return null;
    }

    private List<Node> GetNeighbourList(Node currentNode)
    {
        List<Node> neighbourList = new List<Node>();

        bool oddRow = currentNode.position.y % 2 == 1;

        if (currentNode.position.x - 1 >= 0)
        {
            // Left
            neighbourList.Add(GetNode(currentNode.position.x - 1, currentNode.position.y));
        }
        if (currentNode.position.x + 1 < WIDTH)
        {
            // Right
            neighbourList.Add(GetNode(currentNode.position.x + 1, currentNode.position.y));
        }
        if (currentNode.position.y - 1 >= 0)
        {
            // Down
            neighbourList.Add(GetNode(currentNode.position.x, currentNode.position.y - 1));
        }
        if (currentNode.position.y + 1 < HEIGHT)
        {
            // Up
            neighbourList.Add(GetNode(currentNode.position.x, currentNode.position.y + 1));
        }

        if (oddRow)
        {
            if (currentNode.position.y + 1 < HEIGHT && currentNode.position.x + 1 < WIDTH)
            {
                neighbourList.Add(GetNode(currentNode.position.x + 1, currentNode.position.y + 1));
            }
            if (currentNode.position.y - 1 >= 0 && currentNode.position.x + 1 < WIDTH)
            {
                neighbourList.Add(GetNode(currentNode.position.x + 1, currentNode.position.y - 1));
            }
        }
        else
        {
            if (currentNode.position.y + 1 < HEIGHT && currentNode.position.x - 1 >= 0)
            {
                neighbourList.Add(GetNode(currentNode.position.x - 1, currentNode.position.y + 1));
            }
            if (currentNode.position.y - 1 >= 0 && currentNode.position.x - 1 >= 0)
            {
                neighbourList.Add(GetNode(currentNode.position.x - 1, currentNode.position.y - 1));
            }
        }


        return neighbourList;
    }

    public Node GetNode(int x, int y)
    {
        if (x >= 0 && y >= 0 && x < WIDTH && y < HEIGHT)
            return _grid[x, y];
        else
            return null;
    }

    private List<Node> CalculatePath(Node endNode)
    {
        List<Node> path = new List<Node>();
        path.Add(endNode);
        Node currentNode = endNode;
        while (currentNode.cameFromNode != null)
        {
            path.Add(currentNode.cameFromNode);
            currentNode = currentNode.cameFromNode;
        }
        path.Reverse();
        return path;
    }

    private int CalculateDistanceCost(Node a, Node b)
    {
        int xDistance = Mathf.Abs(a.position.x - b.position.x);
        int yDistance = Mathf.Abs(a.position.y - b.position.y);
        int remaining = Mathf.Abs(xDistance - yDistance);
        return MOVE_STRAIGHT_COST * Mathf.Min(xDistance, yDistance) + MOVE_STRAIGHT_COST * remaining;
    }

    private Node GetLowestFCostNode(List<Node> pathNodeList)
    {
        Node lowestFCostNode = pathNodeList[0];
        for (int i = 1; i < pathNodeList.Count; i++)
        {
            if (pathNodeList[i].fCost < lowestFCostNode.fCost)
            {
                lowestFCostNode = pathNodeList[i];
            }
        }
        return lowestFCostNode;
    }

    private void Show(List<Node> list)
    {
        string str = "";
        foreach(Node node in list)
        {
            str += node.ToString() + " ";
        }
        Debug.Log(str);
    }
}
