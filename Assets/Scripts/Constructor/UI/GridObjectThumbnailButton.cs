using UnityEngine;
using UnityEngine.UI;

public class GridObjectThumbnailButton : MonoBehaviour
{
    [SerializeField] private Image _isSelectedImage;
    private GridObject _prefab;
    private Button _button;

    private void Awake()
    {
        _button = GetComponent<Button>();
    }

    public void SetPrefab(GridObject prefab)
    {
        _prefab = prefab;
    }

    public GridObject GetPrefab()
    {
        return _prefab;
    }

    public void Select()
    {
        _isSelectedImage.gameObject.SetActive(true);
    }

    public void Unselect()
    {
        _isSelectedImage.gameObject.SetActive(false);
    }

    public void Click()
    {
        _button.onClick.Invoke();
    }
}
