using System.Collections.Generic;
using UnityEngine;

public class History
{
    private const int UNDO_HISTORY_OVERHEAD_SIZE = 100;
    private const int UNDO_HISTORY_HALF_SIZE = 50;

    private ConstructorUI _constructorUI;

    private Stack<Backup> _undoHistory = new Stack<Backup>();
    private Stack<Backup> _redoHistory = new Stack<Backup>();

    public void Init(ConstructorUI constructorUI)
    {
        _constructorUI = constructorUI;
        _constructorUI.UndoButton.interactable = false;
        _constructorUI.RedoButton.interactable = false;
    }

    public void PushBackupToHistory_OnBackupSentToHistory(object sender, BackupEventArgs e)
    {
        _undoHistory.Push(e.Backup);
        ClearRedoHistory();
        ClearUndoHistoryOverhead();
        _constructorUI.UndoButton.interactable = true;
        _constructorUI.RedoButton.interactable = false;
    }

    private void ClearRedoHistory()
    {
        while (_redoHistory.Count > 0)
        {
            Backup backup = _redoHistory.Pop();
            backup.Clear();
        }
    }

    private void ClearUndoHistoryOverhead()
    {
        if (_undoHistory.Count > UNDO_HISTORY_OVERHEAD_SIZE)
        {
            Backup[] backups = _undoHistory.ToArray();
            _undoHistory = new Stack<Backup>();

            for (int i = backups.Length - 1; i >= 0; i--)
            {
                Backup backup = backups[i];

                if (i > UNDO_HISTORY_HALF_SIZE)
                {
                    backup.Clear();
                }
                else
                {
                    _undoHistory.Push(backup);
                }
            }
        }
    }

    public void Undo()
    {
        if (_undoHistory.Count <= 0) return;

        Backup backup = _undoHistory.Pop();

        List<GridObject.SaveObject> previousState = backup.PreviousState;

        foreach (GridObject.SaveObject saveObject in previousState)
        {
            GridObject prefab = PrefabHolder.Instance.Get(saveObject._prefabIndex);
            Grid.Instance.LoadGridObject(prefab, saveObject);
        }

        _redoHistory.Push(backup);
        _constructorUI.RedoButton.interactable = true;

        if (_undoHistory.Count <= 0) _constructorUI.UndoButton.interactable = false;
    }

    public void Redo()
    {
        if (_redoHistory.Count <= 0) return;

        Backup backup = _redoHistory.Pop();

        List<GridObject.SaveObject> adjustedState = backup.AdjustedState;

        foreach (GridObject.SaveObject saveObject in adjustedState)
        {
            GridObject prefab = PrefabHolder.Instance.Get(saveObject._prefabIndex);
            Grid.Instance.LoadGridObject(prefab, saveObject);
        }

        _undoHistory.Push(backup);
        _constructorUI.UndoButton.interactable = true;

        if (_redoHistory.Count <= 0) _constructorUI.RedoButton.interactable = false;
    }
}
