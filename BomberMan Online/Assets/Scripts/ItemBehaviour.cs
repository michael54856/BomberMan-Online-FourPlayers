using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;
public class ItemBehaviour : NetworkBehaviour
{
    private Vector3 rotateDir = new Vector3(0, 50, 0);
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        transform.Rotate(rotateDir * Time.deltaTime);
    }



}
