using UnityEngine;
using UnityEngine.EventSystems;

public class HelpManual : MonoBehaviour, IPointerClickHandler
{
    public void OnPointerClick(PointerEventData eventData)
    {
        gameObject.SetActive(false);
    }

    public void ToogleShow()
    {
        gameObject.SetActive(!gameObject.activeSelf);
    }
}
