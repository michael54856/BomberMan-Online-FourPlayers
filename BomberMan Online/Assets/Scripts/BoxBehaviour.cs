using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;

public class BoxBehaviour : NetworkBehaviour
{
    public GridGenerator gridManager;

    public int myY;
    public int myX;

    public GameObject speedCube;
    public GameObject quantCube;
    public GameObject powerCube;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void BreakBox()
    {
        gridManager = GameObject.Find("gridManager").GetComponent<GridGenerator>();
        gridManager.DestoryBox(myY, myX);

        int rand = Random.Range(0, 4);

        if(rand == 1)
        {
            GameObject powerUP = Instantiate(speedCube, transform.position, transform.rotation);
            NetworkServer.Spawn(powerUP);
        }
        else if (rand == 2)
        {
            GameObject powerUP = Instantiate(powerCube, transform.position, transform.rotation);
            NetworkServer.Spawn(powerUP);
        }
        else if (rand == 3)
        {
            GameObject powerUP = Instantiate(quantCube, transform.position, transform.rotation);
            NetworkServer.Spawn(powerUP);
        }

    }
}
