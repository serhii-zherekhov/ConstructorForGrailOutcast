using System.Collections;
using UnityEngine;
using UnityEngine.EventSystems;

public class TipActivator : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler
{
    [SerializeField] private Tip _tip;
    [SerializeField] private string _tipText;
    [SerializeField] private TipSide _tipSide;
    [SerializeField] private float _delayTime;

    private Coroutine _showTipCoroutine;

    public void OnPointerEnter(PointerEventData eventData)
    {
        ShowTip();
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        HideTip();
    }

    private void OnDisable()
    {
        HideTip();
    }

    private void ShowTip()
    {
        _showTipCoroutine = StartCoroutine(ShowTipCoroutine());
    }

    private IEnumerator ShowTipCoroutine()
    {
        float timer = 0f;
        float delayTime = _delayTime;

        while (timer <= delayTime)
        {
            timer += Time.deltaTime;
            yield return null;
        }

        _tip.gameObject.SetActive(true);
        _tip.SetText(_tipText);
        _tip.SetTipSide(_tipSide);
        _tip.transform.position = Input.mousePosition;
        _showTipCoroutine = null;
    }

    private void HideTip()
    {
        _tip.gameObject.SetActive(false);
        if (_showTipCoroutine != null) StopCoroutine(_showTipCoroutine);
    }
}
