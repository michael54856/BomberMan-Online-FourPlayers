using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;
public class GridGenerator : NetworkBehaviour
{
    public GameObject breakEffect;
    //0=empty
    //1=box
    //2=wall
    //3=bomb
    public int[,] myGrid = new int[11, 17] {{0,0,0,1,0,1,1,1,0,1,1,0,1,1,0,1,0},
                                            {0,2,1,2,0,2,0,2,1,2,0,2,1,2,0,2,1},
                                            {0,1,1,0,1,1,1,0,1,0,1,0,1,1,0,1,0},
                                            {1,2,0,2,0,2,0,2,1,2,0,2,1,2,0,2,0},
                                            {0,1,1,1,0,0,1,0,1,0,0,1,1,1,1,0,0},
                                            {0,2,0,2,1,2,1,2,0,2,1,2,1,2,0,2,1},
                                            {1,0,0,1,1,0,1,0,1,1,1,0,1,0,1,0,0},
                                            {1,2,0,2,1,2,1,2,1,2,1,2,0,2,0,2,1},
                                            {0,0,1,0,1,1,1,0,1,0,1,0,1,0,1,1,0},
                                            {1,2,1,2,0,2,0,2,1,2,1,2,1,2,1,2,0},
                                            {1,0,1,1,1,1,0,0,1,0,1,0,1,1,0,0,0}};

    private int[,] initGrid = new int[11, 17] {{0,0,0,1,0,1,1,1,0,1,1,0,1,1,0,0,0},
                                            {0,2,1,2,0,2,0,2,1,2,0,2,1,2,1,2,0},
                                            {0,1,1,0,1,1,1,0,1,0,1,0,1,1,0,1,0},
                                            {1,2,0,2,0,2,0,2,1,2,0,2,1,2,0,2,1},
                                            {0,1,1,1,0,0,1,0,1,0,0,1,1,1,1,0,0},
                                            {0,2,0,2,1,2,1,2,0,2,1,2,1,2,0,2,1},
                                            {1,0,0,1,1,0,1,0,1,1,1,0,1,0,1,0,0},
                                            {1,2,0,2,1,2,1,2,1,2,1,2,0,2,0,2,1},
                                            {0,1,1,0,1,1,1,0,1,0,1,0,1,0,1,1,0},
                                            {0,2,1,2,0,2,0,2,1,2,1,2,1,2,1,2,0},
                                            {0,0,0,1,1,1,0,0,1,0,1,0,1,1,0,0,0}};

    //only server need obj list,since the calculation only done on server
    public GameObject[,] objList = new GameObject[11, 17];
    public GameObject chest;
    public GameObject wall;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    [ClientRpc]
    public void ClearSpace(int myY, int myX)
    {
        myGrid[myY, myX] = 0;
        objList[myY, myX] = null;
    }

    [ClientRpc]
    public void DestoryBox(int myY, int myX)
    {
        Instantiate(breakEffect, new Vector3(-24f+(myX*3),1,14.5f+(myY*-3)), transform.rotation);
        Destroy(objList[myY, myX]);
        myGrid[myY, myX] = 0;
        objList[myY, myX] = null;
    }

    public void ClearScene()
    {
        for(int i = 0; i < 11; i++)
        {
            for (int j = 0; j < 17; j++)
            {
                if(objList[i, j] != null)
                {
                    Destroy(objList[i, j]);
                    objList[i, j] = null;
                }
            }
        }

        if(isServer)
        {
            GameObject[] itemList = GameObject.FindGameObjectsWithTag("power");
            foreach (GameObject item in itemList)
            {
                NetworkServer.Destroy(item);
            }
            itemList = GameObject.FindGameObjectsWithTag("quant");
            foreach (GameObject item in itemList)
            {
                NetworkServer.Destroy(item);
            }
            itemList = GameObject.FindGameObjectsWithTag("speed");
            foreach (GameObject item in itemList)
            {
                NetworkServer.Destroy(item);
            }
        }
        

    }

    public void CreateScene()
    {
        for (int i = 0; i < 11; i++)
        {
            for (int j = 0; j < 17; j++)
            {
                myGrid[i, j] = initGrid[i, j];
                if (myGrid[i, j] == 1)
                {
                    GameObject myBox = Instantiate(chest, new Vector3(-24f + (j * 3), 1, 14.5f - (i * 3)), new Quaternion(0, 0, 0, 0));
                    myBox.GetComponent<BoxBehaviour>().myY = i;
                    myBox.GetComponent<BoxBehaviour>().myX = j;
                    objList[i, j] = myBox;
                }
                if (myGrid[i, j] == 2)
                {
                    GameObject myWall = Instantiate(wall, new Vector3(-24f + (j * 3), 1, 14.5f - (i * 3)), new Quaternion(0, 0, 0, 0));
                    objList[i, j] = myWall;
                }

            }
        }
    }


}
