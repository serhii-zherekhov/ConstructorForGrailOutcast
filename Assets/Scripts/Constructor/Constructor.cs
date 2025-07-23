using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using System.Linq;
using System;

public class Constructor : MonoBehaviour
{
    public static Constructor Instance { get; private set; }

    [SerializeField] private ConstructorUI _constructorUI;
    private History _history = new History();
    private Tool _tool = null;

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
        _constructorUI.SelectedToolButton.OnToolTypeChanged += SwitchTool_OnToolTypeChanged;

        _constructorUI.InitUI();
        _history.Init(_constructorUI);
        Grid.Instance.InitGrid();
        Grid.Instance.Load();
    }

    private void Update()
    {
        // UI
        _constructorUI.Handle();

        // Grid draw
        _tool?.Use();

        // History handle
        if (Input.GetKey(KeyCode.LeftControl) && Input.GetKeyDown(KeyCode.Z)) _history.Undo();
        if (Input.GetKey(KeyCode.LeftControl) && Input.GetKeyDown(KeyCode.Y)) _history.Redo();
    }

    private void SwitchTool_OnToolTypeChanged(object sender, ToolTypeEventArgs e)
    {
        if (_tool != null)
        {
            _tool.OnBackupSentToHistory -= _history.PushBackupToHistory_OnBackupSentToHistory;
            Destroy(_tool.gameObject);
        }

        ToolType toolType = e.ToolType;

        switch (toolType)
        {
            case ToolType.Pencil: _tool = CreateTool<Pencil>(); break;
            case ToolType.Brush: _tool = CreateTool<Brush>(); break;
            case ToolType.Eraser: _tool = CreateTool<Eraser>(); break;
            case ToolType.Stamp: _tool = CreateTool<Stamp>(); break;
        }

        _tool.Init(_constructorUI);
        _tool.OnBackupSentToHistory += _history.PushBackupToHistory_OnBackupSentToHistory;
    }

    private T CreateTool<T>() where T : Tool
    {
        GameObject gameObject = new GameObject(typeof(T).ToString() + "Tool", typeof(T));
        T tool = gameObject.GetComponent<T>();
        return tool;
    }

    public void Undo()
    {
        _history.Undo();
    }

    public void Redo()
    {
        _history.Redo();
    }

    public void SaveGrid()
    {
        Grid.Instance.Save();
    }

    public void LoadGrid()
    {
        Grid.Instance.Load();
    }

    private void OnDestroy()
    {
        _constructorUI.SelectedToolButton.OnToolTypeChanged -= SwitchTool_OnToolTypeChanged;
    }
}
