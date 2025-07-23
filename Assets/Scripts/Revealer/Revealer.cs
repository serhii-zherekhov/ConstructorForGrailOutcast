using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Revealer : MonoBehaviour
{
    private const string ROTATION_KEY = "_Rotation";
    private const string TRESHOLD_KEY = "_Treshold";

    private Dictionary<float, Material> _directionalRevealMaterialInstances = new Dictionary<float, Material>();

    [SerializeField] private Material _defaultMaterial;
    [SerializeField] private Material _directionalRevealMaterial;

    private MeshRenderer _renderer;

    private bool _isRevealed = false;

    public void Init()
    {
        if (!TryGetComponent<MeshRenderer>(out _renderer)) return;

        _renderer.materials = new Material[0];
    }

    private IEnumerator Show(Material material, float startTreshold, float maxTreshold)
    {
        if (maxTreshold == 1f) _isRevealed = true;

        float treshold = startTreshold;

        if (maxTreshold == 0.3f)
        { 
            float timer = 0;

            do
            {
                timer += Time.deltaTime;
                yield return null;
            }
            while (timer < 0.17f);
        }

        do
        {
            treshold += Time.deltaTime;
            material.SetFloat(TRESHOLD_KEY, treshold);
            yield return null;
        }
        while (treshold < maxTreshold);

        material.SetFloat(TRESHOLD_KEY, maxTreshold);

        if (material.GetFloat(TRESHOLD_KEY) >= 1f)
        {
            StopAllCoroutines();
            SetDefaultAndDestroy();
        }
    }

    private void AddMaterialToMeshRenderer(Material newMaterial)
    {
        int size = _renderer.materials.Length;
        Material[] materials = new Material[size + 1];

        for (int i = 0; i < size; i++)
        {
            materials[i] = _renderer.materials[i];
        }
        materials[size] = newMaterial;

        _renderer.materials = materials;
    }

    private void AddNewMaterialInstance(float rotation, Material newMaterial, float revealingTreshold)
    {
        newMaterial.SetFloat(ROTATION_KEY, rotation);

        _directionalRevealMaterialInstances.Add(rotation, newMaterial);
        AddMaterialToMeshRenderer(newMaterial);

        StartCoroutine(Show(newMaterial, 0f, revealingTreshold));
    }

    private void ContinueReveal(float rotation)
    {
        Material material = _directionalRevealMaterialInstances[rotation];

        float treshold = material.GetFloat(TRESHOLD_KEY);

        StartCoroutine(Show(material, treshold, 1f));
    }

    public void DirectionalReveal(float rotation, float revealingTreshold)
    {
        if (_isRevealed) return;

        if (_directionalRevealMaterialInstances.ContainsKey(rotation))
        {
            ContinueReveal(rotation);
        }
        else
        {
            AddNewMaterialInstance(rotation, Instantiate(_directionalRevealMaterial), revealingTreshold);
        }
    }

    public void SetDefaultAndDestroy()
    {
        Material[] materials = new Material[1];
        materials[0] = _defaultMaterial;
        _renderer.materials = materials;
        Destroy(this);
    }
}
