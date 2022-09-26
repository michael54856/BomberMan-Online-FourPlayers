using System.Collections;
using System.Collections.Generic;
using Mirror;
using UnityEngine;

public class BombBehaviour : NetworkBehaviour
{
    private float liveTime = 0f;
    public GameObject explodeEffect;
    [SyncVar]public int power;

    public GridGenerator gridManager;
    public GameObject myLocalPlayer;

    [SyncVar] public int myX;
    [SyncVar] public int myY;
    [SyncVar] public int playerID;

    private bool isExplode = false;

    // Start is called before the first frame update
    void Start()
    {
        GameObject[] playerList = GameObject.FindGameObjectsWithTag("Player");
        foreach (GameObject myPlayer in playerList)
        {
            if (myPlayer.GetComponent<PlayerMovement>().isLocalPlayer)//find local player
            {
                if (!((-25.5f + (3.0f * myX)) <= myPlayer.transform.position.x && myPlayer.transform.position.x <= (-25.5f + (3.0f * myX) + 3.0f) && (16.0f - (3.0f * myY)) >= myPlayer.transform.position.z && myPlayer.transform.position.z >= (16.0f - (3.0f * myY) - 3.0f)))
                {
                    gameObject.GetComponent<BoxCollider>().isTrigger = false;
                }
            }
        }
    }

    // Update is called once per frame
    void Update()
    {
        liveTime += Time.deltaTime;
        gameObject.GetComponent<MeshRenderer>().material.color = new Color(0.53f + (0.47f * (liveTime / 3f)), 0.53f - (0.53f * (liveTime / 3f)), 0.53f - (0.53f * (liveTime / 3f)), 1f);
        
        
        if (!isServer)
        {
            return;
        }


        if (liveTime > 3)
        {
            Explode();
        }
    }
    void OnTriggerExit(Collider other)
    {
        GameObject[] playerList = GameObject.FindGameObjectsWithTag("Player");
        foreach (GameObject myPlayer in playerList)
        {
            if (myPlayer.GetComponent<PlayerMovement>().isLocalPlayer)//find local player
            {
                myLocalPlayer = myPlayer;
            }
        }
        if (other.gameObject == myLocalPlayer)
        {
            gameObject.GetComponent<BoxCollider>().isTrigger = false;
        }
    }

    public void Explode()//run on server
    {
        if(isExplode == true)
        {
            return;
        }
        isExplode = true;
        ToAllClient();//client do first

        gridManager = GameObject.Find("gridManager").GetComponent<GridGenerator>();
        GameObject[] playerList = GameObject.FindGameObjectsWithTag("Player");
        foreach (GameObject myPlayer in playerList)
        {
            if (myPlayer.GetComponent<PlayerMovement>().isLocalPlayer)//find local player
            {
                myLocalPlayer = myPlayer;
            }
        }
        Instantiate(explodeEffect, transform.position, transform.rotation);
        if(myLocalPlayer.GetComponent<PlayerMovement>().playerID == playerID)
        {
            myLocalPlayer.GetComponent<PlayerMovement>().bombCount++;
        }

        gridManager.ClearSpace(myY, myX);

        //origin
        if ((-25.5f + (3.0f * myX)) <= myLocalPlayer.transform.position.x && myLocalPlayer.transform.position.x <= (-25.5f + (3.0f * myX) + 3.0f) && (16.0f - (3.0f * myY)) >= myLocalPlayer.transform.position.z && myLocalPlayer.transform.position.z >= (16.0f - (3.0f * myY) - 3.0f))
        {
            myLocalPlayer.GetComponent<PlayerMovement>().GetExploded();
        }
        for (int i = 1; i <= power; i++)//top
        {
            if (myY - i >= 0)//in grid
            {
                if (gridManager.myGrid[myY-i, myX] == 0)//empty
                {
                    Instantiate(explodeEffect, new Vector3(transform.position.x, transform.position.y, transform.position.z+(3*i)), transform.rotation);
                    if ((-25.5f + (3.0f * myX)) <= myLocalPlayer.transform.position.x && myLocalPlayer.transform.position.x <= (-25.5f + (3.0f * myX) + 3.0f) && (16.0f - (3.0f * (myY-i))) >= myLocalPlayer.transform.position.z && myLocalPlayer.transform.position.z >= (16.0f - (3.0f * (myY-i)) - 3.0f))
                    {
                        myLocalPlayer.GetComponent<PlayerMovement>().GetExploded();
                    }
                }
                else if (gridManager.myGrid[myY - i, myX] == 1)//box
                {
                    gridManager.objList[myY - i, myX].GetComponent<BoxBehaviour>().BreakBox();
                    break;
                }
                else if (gridManager.myGrid[myY - i, myX] == 2)//wall
                {
                    break;
                }
                else if (gridManager.myGrid[myY - i, myX] == 3)//bomb
                {
                    gridManager.objList[myY - i, myX].GetComponent<BombBehaviour>().Explode();
                }
            }
            else
            {
                break;
            }
        }
        for (int i = 1; i <= power; i++)//down
        {
            if (myY + i < 11)//in grid
            {
                if (gridManager.myGrid[myY + i, myX] == 0)//empty
                {
                    Instantiate(explodeEffect, new Vector3(transform.position.x, transform.position.y, transform.position.z - (3 * i)), transform.rotation);
                    if ((-25.5f + (3.0f * myX)) <= myLocalPlayer.transform.position.x && myLocalPlayer.transform.position.x <= (-25.5f + (3.0f * myX) + 3.0f) && (16.0f - (3.0f * (myY + i))) >= myLocalPlayer.transform.position.z && myLocalPlayer.transform.position.z >= (16.0f - (3.0f * (myY + i)) - 3.0f))
                    {
                        myLocalPlayer.GetComponent<PlayerMovement>().GetExploded();
                    }
                }
                else if (gridManager.myGrid[myY + i, myX] == 1)//box
                {
                    gridManager.objList[myY + i, myX].GetComponent<BoxBehaviour>().BreakBox();
                    break;
                }
                else if (gridManager.myGrid[myY + i, myX] == 2)//wall
                {
                    break;
                }
                else if (gridManager.myGrid[myY + i, myX] == 3)//bomb
                {
                    gridManager.objList[myY + i, myX].GetComponent<BombBehaviour>().Explode();
                }
            }
            else
            {
                break;
            }
        }
        for (int i = 1; i <= power; i++)//left
        {
            if (myX - i >= 0)//in grid
            {
                if (gridManager.myGrid[myY, myX-i] == 0)//empty
                {
                    Instantiate(explodeEffect, new Vector3(transform.position.x-(3*i), transform.position.y, transform.position.z), transform.rotation);
                    if ((-25.5f + (3.0f * (myX-i))) <= myLocalPlayer.transform.position.x && myLocalPlayer.transform.position.x <= (-25.5f + (3.0f * (myX - i)) + 3.0f) && (16.0f - (3.0f * myY)) >= myLocalPlayer.transform.position.z && myLocalPlayer.transform.position.z >= (16.0f - (3.0f * myY) - 3.0f))
                    {
                        myLocalPlayer.GetComponent<PlayerMovement>().GetExploded();
                    }
                }
                else if (gridManager.myGrid[myY, myX-i] == 1)//box
                {
                    gridManager.objList[myY, myX - i].GetComponent<BoxBehaviour>().BreakBox();
                    break;
                }
                else if (gridManager.myGrid[myY, myX-i] == 2)//wall
                {
                    break;
                }
                else if (gridManager.myGrid[myY, myX-i] == 3)//bomb
                {
                    gridManager.objList[myY, myX - i].GetComponent<BombBehaviour>().Explode();
                }
            }
            else
            {
                break;
            }
        }
        for (int i = 1; i <= power; i++)//right
        {
            if (myX + i < 17)//in grid
            {
                if (gridManager.myGrid[myY, myX + i] == 0)//empty
                {
                    Instantiate(explodeEffect, new Vector3(transform.position.x + (3 * i), transform.position.y, transform.position.z), transform.rotation);
                    if ((-25.5f + (3.0f * (myX + i))) <= myLocalPlayer.transform.position.x && myLocalPlayer.transform.position.x <= (-25.5f + (3.0f * (myX + i)) + 3.0f) && (16.0f - (3.0f * myY)) >= myLocalPlayer.transform.position.z && myLocalPlayer.transform.position.z >= (16.0f - (3.0f * myY) - 3.0f))
                    {
                        myLocalPlayer.GetComponent<PlayerMovement>().GetExploded();
                    }
                }
                else if (gridManager.myGrid[myY, myX + i] == 1)//box
                {
                    gridManager.objList[myY, myX + i].GetComponent<BoxBehaviour>().BreakBox();
                    break;
                }
                else if (gridManager.myGrid[myY, myX + i] == 2)//wall
                {
                    break;
                }
                else if (gridManager.myGrid[myY, myX + i] == 3)//bomb
                {
                    gridManager.objList[myY, myX + i].GetComponent<BombBehaviour>().Explode();
                }
            }
            else
            {
                break;
            }
        }

        NetworkServer.Destroy(gameObject);
    }

    [ClientRpc]
    public void ToAllClient()
    {
        gridManager = GameObject.Find("gridManager").GetComponent<GridGenerator>();
        GameObject[] playerList = GameObject.FindGameObjectsWithTag("Player");
        foreach (GameObject myPlayer in playerList)
        {
            if (myPlayer.GetComponent<PlayerMovement>().isLocalPlayer)//find local player
            {
                myLocalPlayer = myPlayer;
            }
        }
        Instantiate(explodeEffect, transform.position, transform.rotation);
        if (myLocalPlayer.GetComponent<PlayerMovement>().playerID == playerID)
        {
            myLocalPlayer.GetComponent<PlayerMovement>().bombCount++;
        }

        if ((-25.5f + (3.0f * myX)) <= myLocalPlayer.transform.position.x && myLocalPlayer.transform.position.x <= (-25.5f + (3.0f * myX) + 3.0f) && (16.0f - (3.0f * myY)) >= myLocalPlayer.transform.position.z && myLocalPlayer.transform.position.z >= (16.0f - (3.0f * myY) - 3.0f))
        {
            myLocalPlayer.GetComponent<PlayerMovement>().GetExploded();
        }
        for (int i = 1; i <= power; i++)//top
        {
            if (myY - i >= 0)//in grid
            {
                if (gridManager.myGrid[myY - i, myX] == 0)//empty
                {
                    Instantiate(explodeEffect, new Vector3(transform.position.x, transform.position.y, transform.position.z + (3 * i)), transform.rotation);
                    if ((-25.5f + (3.0f * myX)) <= myLocalPlayer.transform.position.x && myLocalPlayer.transform.position.x <= (-25.5f + (3.0f * myX) + 3.0f) && (16.0f - (3.0f * (myY - i))) >= myLocalPlayer.transform.position.z && myLocalPlayer.transform.position.z >= (16.0f - (3.0f * (myY - i)) - 3.0f))
                    {
                        myLocalPlayer.GetComponent<PlayerMovement>().GetExploded();
                    }
                }
                else if (gridManager.myGrid[myY - i, myX] == 1)//box
                {
                    break;
                }
                else if (gridManager.myGrid[myY - i, myX] == 2)//wall
                {
                    break;
                }
            }
            else
            {
                break;
            }
        }
        for (int i = 1; i <= power; i++)//down
        {
            if (myY + i < 11)//in grid
            {
                if (gridManager.myGrid[myY + i, myX] == 0)//empty
                {
                    Instantiate(explodeEffect, new Vector3(transform.position.x, transform.position.y, transform.position.z - (3 * i)), transform.rotation);
                    if ((-25.5f + (3.0f * myX)) <= myLocalPlayer.transform.position.x && myLocalPlayer.transform.position.x <= (-25.5f + (3.0f * myX) + 3.0f) && (16.0f - (3.0f * (myY + i))) >= myLocalPlayer.transform.position.z && myLocalPlayer.transform.position.z >= (16.0f - (3.0f * (myY + i)) - 3.0f))
                    {
                        myLocalPlayer.GetComponent<PlayerMovement>().GetExploded();
                    }
                }
                else if (gridManager.myGrid[myY + i, myX] == 1)//box
                {
                    break;
                }
                else if (gridManager.myGrid[myY + i, myX] == 2)//wall
                {
                    break;
                }
            }
            else
            {
                break;
            }
        }
        for (int i = 1; i <= power; i++)//left
        {
            if (myX - i >= 0)//in grid
            {
                if (gridManager.myGrid[myY, myX - i] == 0)//empty
                {
                    Instantiate(explodeEffect, new Vector3(transform.position.x - (3 * i), transform.position.y, transform.position.z), transform.rotation);
                    if ((-25.5f + (3.0f * (myX - i))) <= myLocalPlayer.transform.position.x && myLocalPlayer.transform.position.x <= (-25.5f + (3.0f * (myX - i)) + 3.0f) && (16.0f - (3.0f * myY)) >= myLocalPlayer.transform.position.z && myLocalPlayer.transform.position.z >= (16.0f - (3.0f * myY) - 3.0f))
                    {
                        myLocalPlayer.GetComponent<PlayerMovement>().GetExploded();
                    }
                }
                else if (gridManager.myGrid[myY, myX - i] == 1)//box
                {
                    break;
                }
                else if (gridManager.myGrid[myY, myX - i] == 2)//wall
                {
                    break;
                }
            }
            else
            {
                break;
            }
        }
        for (int i = 1; i <= power; i++)//right
        {
            if (myX + i < 17)//in grid
            {
                if (gridManager.myGrid[myY, myX + i] == 0)//empty
                {
                    Instantiate(explodeEffect, new Vector3(transform.position.x + (3 * i), transform.position.y, transform.position.z), transform.rotation);
                    if ((-25.5f + (3.0f * (myX + i))) <= myLocalPlayer.transform.position.x && myLocalPlayer.transform.position.x <= (-25.5f + (3.0f * (myX + i)) + 3.0f) && (16.0f - (3.0f * myY)) >= myLocalPlayer.transform.position.z && myLocalPlayer.transform.position.z >= (16.0f - (3.0f * myY) - 3.0f))
                    {
                        myLocalPlayer.GetComponent<PlayerMovement>().GetExploded();
                    }
                }
                else if (gridManager.myGrid[myY, myX + i] == 1)//box
                {
                    break;
                }
                else if (gridManager.myGrid[myY, myX + i] == 2)//wall
                {
                    break;
                }
            }
            else
            {
                break;
            }
        }
    }
}
