using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Grid : MonoBehaviour
{
    public GameObject floorPrefab;
    //public GameObject truck;
    public int gridSize = 10;
    public float gridScale = 0.25F;

    private GameObject[,] floorGrid;

    // Start is called before the first frame update
    void Start()
    {
        floorGrid = new GameObject[gridSize,gridSize];
        int initialSize = gridSize / 2;
        for (int x = 0; x < initialSize; x++)
        {
            for (int y = 0; y < initialSize; y++)
            {
                // TODO - Y is flipped here because we don't have layers yet
                var newFloor = Instantiate(floorPrefab, new Vector3(x * gridScale, 0, y * gridScale), Quaternion.identity, gameObject.transform);
                floorGrid[x,y] = newFloor;
            }

        }
    }

    // Update is called once per frame
    void Update()
    {
        //var truckPos = truck.transform.localPosition;

        //var rightHandDevices = new List<UnityEngine.XR.InputDevice>();
        //UnityEngine.XR.InputDevices.GetDevicesAtXRNode(UnityEngine.XR.XRNode.RightHand, rightHandDevices);
        //if (rightHandDevices.Count != 1) return;
        //// Assume we have exactly one right hand :/
        //var rightHandDevice = rightHandDevices[0];

        //float input;
        //rightHandDevice.TryGetFeatureValue(UnityEngine.XR.CommonUsages.trigger, out input);

        //if (input > 0.5)
        //{
        //    //
        //}
    }

    public bool TryPlaceBlock(Vector3 globalLocation)
    {
        Vector3 localLocation = transform.InverseTransformPoint(globalLocation);
        Debug.Log("TryPlaceBlock: " + localLocation.x + "," + localLocation.y + "," + localLocation.z);
        // TODO - This logic only works for scale = 1
        localLocation.x = Mathf.Floor(localLocation.x);
        //localLocation.y = Mathf.floor(localLocation.y);
        localLocation.z = Mathf.Floor(localLocation.z);
        //if (x < 0 || y < = 0 || z < = || x >= gridSize || y >= gridSize || z >= gridSize) return false;
        if (localLocation.x < 0 || localLocation.z < 0 || localLocation.x >= gridSize || localLocation.z >= gridSize) return false;
        if (floorGrid[(int)localLocation.x, (int)localLocation.z] == null)
        {
            var newFloor = Instantiate(floorPrefab, localLocation, Quaternion.identity, gameObject.transform);
            floorGrid[(int)localLocation.x, (int)localLocation.y] = newFloor;
            return true;
        }
        return false;
    }
}
