using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Unit : MonoBehaviour
{
    [SerializeField] private GameObject[] _elementsToOutline;
    [SerializeField] private Animator _animator;
    [SerializeField] private AudioClip _moveSound;

    [SerializeField] private Transform _canvas;
    private Quaternion _startCanvasRotation;
    [SerializeField] private RectTransform _bar;

    [SerializeField] float barOffsetX = 30f;
    [SerializeField] float barOffsetY = -15f;

    private Cell _cell;

    private void Start()
    {
        _startCanvasRotation = _canvas.transform.rotation;
    }

    private void Update()
    {
        //_canvas.LookAt(Camera.main.transform.position);
        _canvas.transform.rotation = _startCanvasRotation;
        //Debug.Log(_canvas.transform.rotation + " " + _canvas.transform.localRotation);

        Vector2 screenPosition = Camera.main.WorldToScreenPoint(transform.position);
        _bar.position = screenPosition + new Vector2(barOffsetX, barOffsetY);
    }

    public void OutlineOn()
    {
        foreach(GameObject element in _elementsToOutline)
            element.layer = Layer.OutlinedObjects;
    }
    public void OutlineOff()
    {
        foreach (GameObject element in _elementsToOutline)
            element.layer = Layer.Default;
    }

    public void Move(Queue<Vector2Int> path)
    {
        _animator.SetBool("IsRunning", true);

        Vector2Int startPos = path.Dequeue();
        StartCoroutine(MoveCoroutine(path));
    }

    private IEnumerator MoveCoroutine(Queue<Vector2Int> path)
    {
        SoundManager.Instance.PlayMoveSound(_moveSound);

        Vector3 start = transform.position;
        Vector2Int targetPos = path.Dequeue();
        Vector3 target = Hex.GetWorldPosition(targetPos);

        transform.LookAt(target);
        Grid.Instance.RevealArea(targetPos);

        float timer = 0f;
        float resetingTime = 0.5f;

        while (timer <= resetingTime)
        {
            timer += Time.deltaTime;

            transform.position = Vector3.Lerp(start, target, (timer / resetingTime));

            yield return null;
        }

        if (path.Count > 0)
        {
            StartCoroutine(MoveCoroutine(path)); 
        }
        else
        {
            _animator.SetBool("IsRunning", false);
        }
    }

    public void SetCell(Cell cell)
    {
        _cell = cell;
    }

    #region Properties
    public Cell Cell
    {
        get
        {
            return _cell;
        }
    }
    #endregion
}
