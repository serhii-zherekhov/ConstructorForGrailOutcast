using System.Collections.Generic;
using UnityEngine;

public class Dijkstra
{
    private static Dijkstra _instance = null;

    private const int WIDTH = 100;
    private const int HEIGHT = 100;
    private const int MAX_MOVE_COST = 3;

    private const int MOVE_STRAIGHT_COST = 10;

    private Node[,] _grid = new Node[WIDTH, HEIGHT];

    private List<Node> _frontier = new List<Node>();

    private Dijkstra() { }

    public static Dijkstra Instance
    {
        get
        {
            if(_instance == null) 
            {
                _instance = new Dijkstra();
            }
            return _instance;
        }
    }

    public List<Vector2Int> FindFrontier(Vector2Int start)
    {
        List<Node> path = FindFrontierNodes(start);
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


    private List<Node> FindFrontierNodes(Vector2Int start)
    {
        _frontier.Clear();

        for (int x = 0; x < WIDTH; x++)
        {
            for (int y = 0; y < HEIGHT; y++)
            {
                Node pathNode = new Node(new Vector2Int(x, y));
                pathNode.fCost = 0;
                pathNode.cameFromNode = null;
                _grid[x, y] = pathNode;
            }
        }

        Queue<Node> openSet = new Queue<Node>();
        _grid[start.x, start.y].fCost = 0;
        openSet.Enqueue(_grid[start.x, start.y]);

        while (openSet.Count > 0)
        {
            Node currentNode = openSet.Dequeue();

            foreach (Node neighbourNode in GetNeighbourList(currentNode))
            {
                if (openSet.Contains(neighbourNode))
                    continue;

                neighbourNode.fCost = currentNode.fCost + 1;

                if (!IsValidTile(neighbourNode))
                    continue;

                neighbourNode.cameFromNode = currentNode;

                openSet.Enqueue(neighbourNode);
                _frontier.Add(neighbourNode);
            }
        }

        return _frontier;
    }

    private bool IsValidTile(Node node)
    {
        if (!_frontier.Contains(node) && node.fCost <= MAX_MOVE_COST)
            return true;

        return false;
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

    private Node GetNode(int x, int y)
    {
        if (x >= 0 && y >= 0 && x < WIDTH && y < HEIGHT)
            return _grid[x, y];
        else
            return null;
    }
}
