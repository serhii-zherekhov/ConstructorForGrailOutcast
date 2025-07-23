using UnityEngine;

public class PointCompassBase : MonoBehaviour
{
    [SerializeField] private Transform _cameraTransform;

    private void Update()
    {
        float rotation = Mathf.LerpAngle(-30f, -48f, _cameraTransform.eulerAngles.x / 90f);

        transform.eulerAngles = new Vector3(rotation, transform.eulerAngles.y, transform.eulerAngles.z);
    }
}
