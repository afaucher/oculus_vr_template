using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Grid : MonoBehaviour
{
    public GameObject floorPrefab;
    public GameObject truck;
    public int gridSize = 10;
    public float gridScale = 0.25F;

    //private GameObject floorGrid[gridSize][gridSize];

    // Start is called before the first frame update
    void Start()
    {
        int initialSize = gridSize / 2;
        for (int x = 0; x < initialSize; x++)
        {
            for (int y = 0; y < initialSize; y++)
            {
                
                var newFloor = Instantiate(floorPrefab, new Vector3(x * gridScale, 0, y * gridScale), Quaternion.identity, gameObject.transform);
                //floorGrid[x][y] = newFloor;
            }

        }
    }

    // Update is called once per frame
    void Update()
    {
        var truckPos = truck.transform.localPosition;

        var rightHandDevices = new List<UnityEngine.XR.InputDevice>();
        UnityEngine.XR.InputDevices.GetDevicesAtXRNode(UnityEngine.XR.XRNode.RightHand, rightHandDevices);
        if (rightHandDevices.Count != 1) return;
        // Assume we have exactly one right hand :/
        var rightHandDevice = rightHandDevices[0];

        float input;
        rightHandDevice.TryGetFeatureValue(UnityEngine.XR.CommonUsages.trigger, out input);

        if (input > 0.5)
        {
            //
        }
    }
}
