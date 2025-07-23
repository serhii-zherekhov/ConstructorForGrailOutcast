using UnityEngine;

public class SoundManager : MonoBehaviour
{
    private const float VOLUME = 1f;

    public static SoundManager Instance { get; private set; }

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
    }

    public void PlayMoveSound(AudioClip moveSound)
    {
        AudioSource.PlayClipAtPoint(moveSound, Camera.main.transform.position, VOLUME);
    }
}
