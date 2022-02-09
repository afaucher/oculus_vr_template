using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TruckController : MonoBehaviour
{
    public GameObject gridObject;
    public float probeOffset = 0.5F;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        var rightHandDevices = new List<UnityEngine.XR.InputDevice>();
        UnityEngine.XR.InputDevices.GetDevicesAtXRNode(UnityEngine.XR.XRNode.RightHand, rightHandDevices);
        if (rightHandDevices.Count != 1) return;
        // Assume we have exactly one right hand :/
        var rightHandDevice = rightHandDevices[0];
        Vector2 input;
        rightHandDevice.TryGetFeatureValue(UnityEngine.XR.CommonUsages.primary2DAxis, out input);

        //Vector2 input = OVRInput.Get(OVRInput.Axis2D.PrimaryThumbstick);
        float speed = 1F * input.y;
        transform.Translate(Vector3.forward * Time.deltaTime * speed);
        float rotation = 45F * input.x;
        if (input.y < 0)
        {
            // "Wheel simulation"
            rotation = -rotation;
        }
        transform.Rotate(0, Time.deltaTime * rotation, 0);

        Vector3 probeLocation = transform.position + transform.forward * probeOffset;

        gridObject.GetComponent<Grid>().TryPlaceBlock(probeLocation);
    }
}
