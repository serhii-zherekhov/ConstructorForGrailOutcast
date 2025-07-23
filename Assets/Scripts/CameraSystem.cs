using System.Collections;
using Unity.Cinemachine;
using UnityEngine;
using UnityEngine.UI;

public class CameraSystem : MonoBehaviour
{
    private const float LEFT_BOUND = -10f;
    private const float RIGHT_BOUND = 210f;
    private const float UP_BOUND = 185f;
    private const float BOTTOM_BOUND = 0f;

    private const float MOVE_SPEED = 25f;
    private const float ROTATION_SPEED = 100f;
    private const float DRAG_SPEED = 2f;
    private const float ROTATION_SPEED_X = 0.4f;
    private const float ROTATION_SPEED_Y = 0.2f;
    private const float MIN_ROTATION_X = 0f;
    private const float MAX_ROTATION_X = 89f;
    private const float ZOOM_SPEED = 50f;
    private const float MIN_ZOOM = 0.35f;
    private const float MAX_ZOOM = 20f;

    private const int EDGE_DISTANCE_TO_SCROLL = 20;

    private const float RESET_TIME = 1f;

    private float _mouseWheelScroll => Input.mouseScrollDelta.y;

    public CameraSystem Instance { get; private set; }

    private Quaternion _startingCameraSystemRotation;
    private Coroutine _resetCameraRotationCoroutine;

    private bool _dragMoveActive = false;
    private bool _dragRotateActive = false;
    private Vector2 _lastMousePosition;

    private void Awake()
    {
        Instance = this;
    }

    private void Start()
    {
        _startingCameraSystemRotation = this.transform.rotation;
    }

    private void Update()
    {
        if (Input.anyKey == false && _dragMoveActive == false && _dragRotateActive == false && _mouseWheelScroll == 0) return;
        
        HandleCameraMovementByKeys();
        HandleCameraRotationByKeys();

        //HandleCameraMovementByMouse();

        //HandleCameraDrag();
        HandleCameraRotation();

        HandleCameraZoom();
    }

    private void HandleCameraMovementByKeys()
    {
        Vector3 inputDir = Vector3.zero;

        if (Input.GetKey(KeyCode.W)) inputDir.z += 1f;
        if (Input.GetKey(KeyCode.S)) inputDir.z -= 1f;
        if (Input.GetKey(KeyCode.A)) inputDir.x -= 1f;
        if (Input.GetKey(KeyCode.D)) inputDir.x += 1f;

        Vector3 forwardAverage = (transform.forward + transform.up) / 2;
        Vector3 moveDirection = forwardAverage * inputDir.z + transform.right * inputDir.x;
        moveDirection.y = 0;

        Vector3 moveDelta = moveDirection * MOVE_SPEED * Time.deltaTime;

        Vector3 position = transform.position + moveDelta;

        CheckBounds(ref position);

        transform.position = position;
    }

    private void CheckBounds(ref Vector3 position)
    {
        if (position.x < LEFT_BOUND) position = new Vector3(LEFT_BOUND, position.y, position.z);
        if (position.x > RIGHT_BOUND) position = new Vector3(RIGHT_BOUND, position.y, position.z);
        if (position.z < BOTTOM_BOUND) position = new Vector3(position.x, position.y, BOTTOM_BOUND);
        if (position.z > UP_BOUND) position = new Vector3(position.x, position.y, UP_BOUND);
    }

    private void HandleCameraRotationByKeys()
    {
        float rotateDir = 0f;
        if (Input.GetKey(KeyCode.Q)) rotateDir -= 1f;
        if (Input.GetKey(KeyCode.E)) rotateDir += 1f;

        transform.eulerAngles += new Vector3(0, rotateDir * ROTATION_SPEED * Time.deltaTime, 0);
    }

    private void HandleCameraMovementByMouse()
    {
        Vector3 inputDir = Vector3.zero;

        if (Input.mousePosition.x < EDGE_DISTANCE_TO_SCROLL) inputDir.x -= 1f;
        if (Input.mousePosition.x > Screen.width - EDGE_DISTANCE_TO_SCROLL) inputDir.x += 1f;
        if (Input.mousePosition.y < EDGE_DISTANCE_TO_SCROLL) inputDir.z -= 1f;
        if (Input.mousePosition.y > Screen.height - EDGE_DISTANCE_TO_SCROLL) inputDir.z += 1f;

        Vector3 moveDir = transform.forward * inputDir.z + transform.right * inputDir.x;
        moveDir.y = 0;
        transform.position += moveDir * MOVE_SPEED * Time.deltaTime;
    }

    private void HandleCameraDrag()
    {
        Vector3 inputDir = Vector3.zero;

        if (Input.GetMouseButtonDown(Mouse.Wheel))
        {
            _dragMoveActive = true;
            _lastMousePosition = Input.mousePosition;
        }
        if (Input.GetMouseButtonUp(Mouse.Wheel))
        {
            _dragMoveActive = false;
        }

        if (_dragMoveActive)
        {
            Vector2 mouseMovementDelta = (Vector2)Input.mousePosition - _lastMousePosition;

            inputDir.x = -mouseMovementDelta.x;
            inputDir.z = -mouseMovementDelta.y;

            Vector3 moveDir = transform.forward * inputDir.z + transform.right * inputDir.x;
            moveDir.y = 0;

            transform.position += moveDir * DRAG_SPEED * Time.deltaTime;

            _lastMousePosition = Input.mousePosition;
        }
    }

    private void HandleCameraRotation()
    {
        if (Input.GetMouseButtonDown(Mouse.RightButton))
        {
            _dragRotateActive = true;

            _lastMousePosition = Input.mousePosition;
        }
        if (Input.GetMouseButtonUp(Mouse.RightButton))
        {
            _dragRotateActive = false;
        }

        if (_dragRotateActive)
        {
            Vector2 mouseMovementDelta = (Vector2)Input.mousePosition - _lastMousePosition;

            float rotateDirX = 0;
            Mathf.Clamp(rotateDirX, -1f, 1f);
            rotateDirX = -mouseMovementDelta.y;
            float rotateDirY = 0;
            Mathf.Clamp(rotateDirY, -1f, 1f);
            rotateDirY = mouseMovementDelta.x;

            if (Mathf.Abs(mouseMovementDelta.y) > Mathf.Abs(mouseMovementDelta.x))
            {
                rotateDirY = 0;
            }
            else
            {
                rotateDirX = 0;
            }

            Vector3 result = transform.eulerAngles;
            result += new Vector3(rotateDirX * ROTATION_SPEED_X * Time.deltaTime, rotateDirY * ROTATION_SPEED_Y * Time.deltaTime, 0);
            
            if (MIN_ROTATION_X >= result.x || result.x >= MAX_ROTATION_X) return;

            transform.eulerAngles = result;
        }
    }

    private void HandleCameraZoom()
    {
        if (Pointer.Instance.IsMouseOverUI) return;

        Vector3 moveDir = Pointer.Instance.RayVector * Input.mouseScrollDelta.y;

        Vector3 result = transform.position;
        result += moveDir * ZOOM_SPEED * Time.deltaTime;

        if (MIN_ZOOM > result.y || result.y > MAX_ZOOM) return;

        transform.position = result;
    }

    public void ResetCameraRotation()
    {
        if (_resetCameraRotationCoroutine != null || transform.rotation == _startingCameraSystemRotation) return;

        _resetCameraRotationCoroutine = StartCoroutine(ResetCameraRotationCoroutine());
    }

    private IEnumerator ResetCameraRotationCoroutine()
    {
        float timer = 0f;
        float resetingTime = RESET_TIME;

        Quaternion currentRotation = transform.rotation;
        Quaternion targetRotation = _startingCameraSystemRotation;

        while (timer <= resetingTime)
        {
            timer += Time.deltaTime;

            transform.rotation = Quaternion.Slerp(currentRotation, targetRotation, (timer / resetingTime));

            yield return null;
        }

        _resetCameraRotationCoroutine = null;
    }
}
