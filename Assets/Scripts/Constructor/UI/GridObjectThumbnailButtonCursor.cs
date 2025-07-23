using System;
using System.Collections.Generic;
using UnityEngine;

public class GridObjectThumbnailButtonCursor
{
    private LinkedList<GridObjectThumbnailButton> _gridObjectThumbnailButtons = new LinkedList<GridObjectThumbnailButton>();
    private LinkedListNode<GridObjectThumbnailButton> _selectedNode = null;

    public void Add(GridObjectThumbnailButton gridObjectThumbnailButton)
    {
        _gridObjectThumbnailButtons.AddLast(gridObjectThumbnailButton);
    }

    public GridObjectThumbnailButton First()
    {
        return _gridObjectThumbnailButtons.First.Value;
    }

    public void SetPointer(GridObjectThumbnailButton gridObjectThumbnailButton)
    {
        if (_selectedNode?.Value == gridObjectThumbnailButton) return;

        _selectedNode = _gridObjectThumbnailButtons.Find(gridObjectThumbnailButton);
    }

    public void MoveToPrevious()
    {
        if (!IsActive) return;

        LinkedListNode<GridObjectThumbnailButton> activePrevious = FindActivePrevious(_selectedNode);

        if (activePrevious == null) return;

        _selectedNode = activePrevious;

        Click();
    }

    public void MoveToPrevious(int times)
    {
        if (!IsActive) return;

        LinkedListNode<GridObjectThumbnailButton> activePrevious = _selectedNode;

        for (int i = 0; i < times; i++)
        {
            activePrevious = FindActivePrevious(activePrevious);

            if (activePrevious == null) break;
        }

        if (activePrevious != null)
        { 
            _selectedNode = activePrevious; 
        }

        Click();
    }

    private LinkedListNode<GridObjectThumbnailButton> FindActivePrevious(LinkedListNode<GridObjectThumbnailButton> node)
    {
        if (node.Previous == null) return null;

        if (node.Previous.Value.isActiveAndEnabled == true)
        {
            return node.Previous;
        }
        else
        {
            return FindActivePrevious(node.Previous);
        }
    }

    public void MoveToNext()
    {
        if (!IsActive) return;

        LinkedListNode<GridObjectThumbnailButton> activeNext = FindActiveNext(_selectedNode);

        if (activeNext == null) return;

        _selectedNode = activeNext;

        Click();
    }

    public void MoveToNext(int times)
    {
        if (!IsActive) return;

        LinkedListNode<GridObjectThumbnailButton> activeNext = _selectedNode;

        for (int i = 0; i < times; i++)
        {
            activeNext = FindActiveNext(activeNext);

            if (activeNext == null) break;
        }

        if (activeNext != null)
        {
            _selectedNode = activeNext;
        }

        Click();
    }

    private LinkedListNode<GridObjectThumbnailButton> FindActiveNext(LinkedListNode<GridObjectThumbnailButton> node)
    {
        if (node.Next == null) return null;

        if (node.Next.Value.isActiveAndEnabled == true)
        {
            return node.Next;
        }
        else
        {
            return FindActiveNext(node.Next);
        }
    }

    public void MoveToNearest()
    {
        LinkedListNode<GridObjectThumbnailButton> activeNearest = FindActiveNearest(_selectedNode);

        if (activeNearest == null) return;
        if (_selectedNode == activeNearest) return;

        _selectedNode = activeNearest;

        Click();
    }

    private LinkedListNode<GridObjectThumbnailButton> FindActiveNearest(LinkedListNode<GridObjectThumbnailButton> node)
    {
        if (node.Value.isActiveAndEnabled == true) return node;

        LinkedListNode<GridObjectThumbnailButton> nodeToPrevious = node;
        LinkedListNode<GridObjectThumbnailButton> nodeToNext = node;

        while((nodeToPrevious == null && nodeToNext == null) == false)
        {
            if (nodeToPrevious != null)
            { 
                nodeToPrevious = nodeToPrevious.Previous;

                if (nodeToPrevious?.Value.isActiveAndEnabled == true)
                {
                    return nodeToPrevious;
                }
            }

            if (nodeToNext != null)
            {
                nodeToNext = nodeToNext.Next;

                if (nodeToNext?.Value.isActiveAndEnabled == true)
                {
                    return nodeToNext;
                }
            }
        }

        return null;
    }

    private void Click()
    {
        _selectedNode.Value.Click();
    }

    #region Properties
    private bool IsActive
    {
        get
        {
            return _selectedNode.Value.isActiveAndEnabled;
        }
    }
    #endregion
}
