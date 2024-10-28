using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering.Universal;

[RequireComponent(typeof(Camera))]
public class MainCameraComponent : MonoBehaviour
{
    private Camera _camera;
    public Camera Camera
    {
        get
        {
            if (_camera == null)
            {
                _camera = GetComponent<Camera>();
            }
            return _camera;
        }
    }

    /// <summary>
    /// 添加相机
    /// </summary>
    /// <param name="overlayCamera"></param>
    public void AddCamera(Camera overlayCamera)
    {
        UniversalAdditionalCameraData overlayCameraData = overlayCamera.GetUniversalAdditionalCameraData();
        if (overlayCameraData.renderType == CameraRenderType.Base)
        {
            overlayCameraData.renderType = CameraRenderType.Overlay;
        }
        var cameraData = Camera.GetUniversalAdditionalCameraData();
        cameraData.cameraStack.Insert(0, overlayCamera);
    }
    /// <summary>
    /// 移除相机
    /// </summary>
    /// <param name="overlayCamera"></param>
    public void RemoveCamera(Camera overlayCamera)
    {
        if (overlayCamera.isActiveAndEnabled)
        {
            var cameraData = Camera.GetUniversalAdditionalCameraData();
            cameraData.cameraStack.Remove(overlayCamera);
        }
    }
}
