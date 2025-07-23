using System;
using UnityEngine;

public class ThresholdedActionOnKey
{
    private float _thresholdTimer = 0;
    private float _firstThresholdTimer = 0;

    public void Handle(KeyCode keyCode, Action action, float threshold, float firstThreshold)
    {
        if (Input.GetKey(keyCode))
        {
            _thresholdTimer += Time.deltaTime;
            _firstThresholdTimer += Time.deltaTime;
        }

        if (_thresholdTimer > threshold &&
           _firstThresholdTimer > firstThreshold)
        {
            _thresholdTimer = 0;
            action();
        }

        if (Input.GetKeyDown(keyCode))
        {
            _thresholdTimer = 0;
            _firstThresholdTimer = 0;
            action();
        }
    }
}
