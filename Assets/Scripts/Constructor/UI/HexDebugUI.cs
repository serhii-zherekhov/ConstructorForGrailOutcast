using System;
using TMPro;
using UnityEngine;

public class HexDebugUI : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI _hexText;
    [SerializeField] private TextMeshProUGUI _hexMirroredText;
    [SerializeField] private TextMeshProUGUI _hexSelectedText;

    private void Start()
    {
        HexPointer.Instance.OnPositionChanged += UpdateText_OnCellChanged;
        if (Player.Instance != null) Player.Instance.OnSelectedCellChanged += UpdateText_OnSelectedCellChanged;
    }

    private void UpdateText_OnCellChanged(object sender, Vector2IntEventArgs e)
    {
        Vector2Int cell = HexPointer.Instance.Position;
        _hexText.text = "Hex: (" + e.Position.x + ", " + e.Position.y + ")";

        Vector2Int mirroredPosition = Mirror.ReflectPosition(e.Position);
        _hexMirroredText.text = "(" + mirroredPosition.x + ", " + mirroredPosition.y + ")";
    }

    private void UpdateText_OnSelectedCellChanged(object sender, CellEventArgs e)
    {
        _hexSelectedText.text = "Hex selected: (" + e.Cell.Position.x + ", " + e.Cell.Position.y + ")";
    }

    private void OnDestroy()
    {
        HexPointer.Instance.OnPositionChanged -= UpdateText_OnCellChanged;
        if(Player.Instance != null) Player.Instance.OnSelectedCellChanged -= UpdateText_OnSelectedCellChanged;
    }
}
