using UnityEngine;

public class HexDirectionalRevealDebug : MonoBehaviour
{
    [SerializeField] private TMPro.TextMeshProUGUI _text;
    
    public TMPro.TextMeshProUGUI Text
    {
        get
        {
            return _text;
        }
    }
}
