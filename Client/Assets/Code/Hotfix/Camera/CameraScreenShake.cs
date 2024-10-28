using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraScreenShake : MonoBehaviour
{
   private Camera _camera;
    private void Start()
    {
        _camera = GetComponent<Camera>();
    }


    public void Shake(float duration, float magnitude)
    {
        StopCoroutine(shake(duration, magnitude));
        StartCoroutine(shake(duration, magnitude));
    }

    private IEnumerator shake(float duration,float magnitude)
    {
        Log.Debug("Shake");
        Vector2 originalPos = Vector2.zero;
        float elapsed = 0.0f;

        while (elapsed < duration)
        {
            float x = Random.Range(-1f, 1f) * magnitude;
            float y = Random.Range(-1f, 1f) * magnitude;

            _camera.rect = new Rect(x, y, 1, 1);

            elapsed += Time.deltaTime;

            yield return null;
        }
        _camera.rect = new Rect(originalPos.x, originalPos.y, 1, 1);

    }
}
