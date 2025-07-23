using UnityEngine;

public class PointCompassNeedle : MonoBehaviour
{
    public Transform _northTarget;

    private void Update()
    {
        Vector3 target = _northTarget.transform.position;

        Vector3 relativeTarget = transform.parent.InverseTransformPoint(target);

        float needleRotation = Mathf.Atan2(relativeTarget.x, relativeTarget.z) * Mathf.Rad2Deg;

        transform.localRotation = Quaternion.Euler(0, needleRotation, 0);
    }
}
