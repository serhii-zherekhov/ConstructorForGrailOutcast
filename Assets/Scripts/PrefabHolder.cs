using UnityEngine;

public class PrefabHolder : MonoBehaviour
{
    public static PrefabHolder Instance { get; private set; }

    [SerializeField] private GameObject[] _gridObjectPrefabs;

    //[SerializeField] private Material _defaultMaterial;
    //[SerializeField] private Material _directionalRevealMaterial;

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

        SetPrefabIndexes();
    }

    public GridObject Get(int prefabIndex)
    {
        return _gridObjectPrefabs[prefabIndex].GetComponent<GridObject>();
    }

    #region Properties
    public int Length
    {
        get
        {
            return _gridObjectPrefabs.Length;
        }
    }
    #endregion

    #region ContextMenu
    [ContextMenu("Set Prefab Indexes")]
    private void SetPrefabIndexes()
    {
        for (int i = 0; i < _gridObjectPrefabs.Length; i++)
        {
            GridObject gridObject = _gridObjectPrefabs[i].GetComponent<GridObject>();
            gridObject.SetPrefabIndex(i);
        }
    }

    [ContextMenu("Set Revealers")]
    private void SetRevealers()
    {
        for (int i = 0; i < _gridObjectPrefabs.Length; i++)
        {
            GameObject gameObject = _gridObjectPrefabs[i];
            gameObject.AddComponent<Revealer>();
            Revealer revealer = gameObject.GetComponent<Revealer>();
            //revealer.SetMaterials(_defaultMaterial, _directionalRevealMaterial);
        }
    }

    [ContextMenu("Remove Revealers")]
    private void RemoveRevealers()
    {
        for (int i = 0; i < _gridObjectPrefabs.Length; i++)
        {
            GameObject gameObject = _gridObjectPrefabs[i];
            Revealer revealer = gameObject.GetComponent<Revealer>();
            DestroyImmediate(revealer, true);
            //revealer.SetMaterials(_defaultMaterial, _directionalRevealMaterial);
        }
    }
    #endregion
}
