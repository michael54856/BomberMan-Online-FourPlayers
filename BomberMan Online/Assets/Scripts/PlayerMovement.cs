using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;
using TMPro;

public class PlayerMovement : NetworkBehaviour
{
    [SyncVar]public int playerID;
    [SyncVar]public bool ready = false;
    private float moveSpeed = 10;
    public Rigidbody rb;

    public GridGenerator gridManager;
    public GameObject bomb;

    public int lastMove = 0;

    public int bombCount;
    public float speed = 1;
    public int power = 1;

    private int maxBombCount = 1;

    public Material redSkin;
    public Material yellowSkin;
    public Material blueSkin;
    public Material greenSkin;

    private TextMeshProUGUI bombText;
    private TextMeshProUGUI speedText;
    private TextMeshProUGUI powerText;

    public GameObject MyNetworkManagerObj;

    //used for text color
    public Color32 myGreen = new Color32(165, 255, 180, 255);
    public Color32 myBlue = new Color32(165, 248, 255, 255);
    public Color32 myRed = new Color32(255, 150, 150, 255);

    public bool canMove = false;

    public GameObject myGoggle;

    private bool onAir = false;


    // Start is called before the first frame update
    void Start()
    {
        gridManager = GameObject.Find("gridManager").GetComponent<GridGenerator>();

        bombText = GameObject.Find("bombText").GetComponent<TextMeshProUGUI>();
        speedText = GameObject.Find("speedText").GetComponent<TextMeshProUGUI>();
        powerText = GameObject.Find("powerText").GetComponent<TextMeshProUGUI>();

        MyNetworkManagerObj = GameObject.Find("NetworkManager");
       
    }

    public void InitMenu()//this will always run on server
    {
        MyNetworkManagerObj = GameObject.Find("NetworkManager");
        if (playerID != 1)//join other client
        {
            MyNetworkManagerObj.GetComponent<MyNetworkManager>().readyButton.SetActive(true);
        }
        InitMenuCommand();
    }

    [ClientRpc]
    public void InitMenuCommand()
    {
        MyNetworkManagerObj = GameObject.Find("NetworkManager");

        if(isLocalPlayer && !isServer)//other client join
        {
            MyNetworkManagerObj.GetComponent<MyNetworkManager>().readyButton.SetActive(true);
            MyNetworkManagerObj.GetComponent<MyNetworkManager>().readyButtonText.text = "ready";
        }
        
        if (playerID == 1)
        {
            MyNetworkManagerObj.GetComponent<MyNetworkManager>().ReadyText[0].text = "p1 not ready";
            MyNetworkManagerObj.GetComponent<MyNetworkManager>().ReadyText[0].color = myRed;
            MyNetworkManagerObj.GetComponent<MyNetworkManager>().ReadyText[1].text = "wait for join...";
            MyNetworkManagerObj.GetComponent<MyNetworkManager>().ReadyText[1].color = myBlue;
        }
        else if(playerID == 2)
        {
            MyNetworkManagerObj.GetComponent<MyNetworkManager>().ReadyText[1].text = "p2 not ready";
            MyNetworkManagerObj.GetComponent<MyNetworkManager>().ReadyText[1].color = myRed;
        }
        else if (playerID == 3)
        {
            MyNetworkManagerObj.GetComponent<MyNetworkManager>().ReadyText[2].text = "p3 not ready";
            MyNetworkManagerObj.GetComponent<MyNetworkManager>().ReadyText[2].color = myRed;
        }
        else if (playerID == 4)
        {
            MyNetworkManagerObj.GetComponent<MyNetworkManager>().ReadyText[3].text = "p4 not ready";
            MyNetworkManagerObj.GetComponent<MyNetworkManager>().ReadyText[3].color = myRed;
        }

        if (isLocalPlayer)//get other players ready statement
        {
            GameObject[] playerList = GameObject.FindGameObjectsWithTag("Player");
            foreach (GameObject myPlayer in playerList)
            {
                if (myPlayer.GetComponent<PlayerMovement>().playerID == 1)
                {
                    if (myPlayer.GetComponent<PlayerMovement>().ready == true)
                    {
                        MyNetworkManagerObj.GetComponent<MyNetworkManager>().ReadyText[0].text = "p1 ready";
                        MyNetworkManagerObj.GetComponent<MyNetworkManager>().ReadyText[0].color = myGreen;
                    }
                    else
                    {
                        MyNetworkManagerObj.GetComponent<MyNetworkManager>().ReadyText[0].text = "p1 not ready";
                        MyNetworkManagerObj.GetComponent<MyNetworkManager>().ReadyText[0].color = myRed;
                    }
                }
                else if (myPlayer.GetComponent<PlayerMovement>().playerID == 2)
                {
                    if (myPlayer.GetComponent<PlayerMovement>().ready == true)
                    {
                        MyNetworkManagerObj.GetComponent<MyNetworkManager>().ReadyText[1].text = "p2 ready";
                        MyNetworkManagerObj.GetComponent<MyNetworkManager>().ReadyText[1].color = myGreen;
                    }
                    else
                    {
                        MyNetworkManagerObj.GetComponent<MyNetworkManager>().ReadyText[1].text = "p2 not ready";
                        MyNetworkManagerObj.GetComponent<MyNetworkManager>().ReadyText[1].color = myRed;
                    }
                }
                else if (myPlayer.GetComponent<PlayerMovement>().playerID == 3)
                {
                    if (myPlayer.GetComponent<PlayerMovement>().ready == true)
                    {
                        MyNetworkManagerObj.GetComponent<MyNetworkManager>().ReadyText[2].text = "p3 ready";
                        MyNetworkManagerObj.GetComponent<MyNetworkManager>().ReadyText[2].color = myGreen;
                    }
                    else
                    {
                        MyNetworkManagerObj.GetComponent<MyNetworkManager>().ReadyText[2].text = "p3 not ready";
                        MyNetworkManagerObj.GetComponent<MyNetworkManager>().ReadyText[2].color = myRed;
                    }
                }
                else if (myPlayer.GetComponent<PlayerMovement>().playerID == 4)
                {
                    if (myPlayer.GetComponent<PlayerMovement>().ready == true)
                    {
                        MyNetworkManagerObj.GetComponent<MyNetworkManager>().ReadyText[3].text = "p4 ready";
                        MyNetworkManagerObj.GetComponent<MyNetworkManager>().ReadyText[3].color = myGreen;
                    }
                    else
                    {
                        MyNetworkManagerObj.GetComponent<MyNetworkManager>().ReadyText[3].text = "p4 not ready";
                        MyNetworkManagerObj.GetComponent<MyNetworkManager>().ReadyText[3].color = myRed;
                    }
                }
            }
        }
    }

    [Command]
    public void ChangeReadyTextCommand(int num, bool toTrue)
    {
        ChangeReadyText(num, toTrue);
        ready = toTrue;
        if(toTrue == true)
        {
            GameObject[] playerList = GameObject.FindGameObjectsWithTag("Player");
            bool allReady = true;
            foreach (GameObject myPlayer in playerList)
            {
                if (myPlayer.GetComponent<PlayerMovement>().ready == false)//if one player is not ready
                {
                    Debug.Log(myPlayer.GetComponent<PlayerMovement>().playerID);
                    allReady = false;
                    break;
                }
            }
            if (allReady == true)
            {
                playerList[0].GetComponent<PlayerMovement>().StartTheGame();//make one player create scene
                for (int i = 1; i < playerList.Length; i++)//other player start moving
                {
                    playerList[i].GetComponent<PlayerMovement>().StartMoving();
                }
            }
        }
    }

    [ClientRpc]
    public void ChangeReadyText(int num, bool toTrue)
    {
        ready = toTrue;
        if (num == 1)
        {
            if (toTrue == true)
            {
                MyNetworkManagerObj.GetComponent<MyNetworkManager>().ReadyText[0].text = "p1 ready";
                MyNetworkManagerObj.GetComponent<MyNetworkManager>().ReadyText[0].color = myGreen;
            }
            else
            {
                MyNetworkManagerObj.GetComponent<MyNetworkManager>().ReadyText[0].text = "p1 not ready";
                MyNetworkManagerObj.GetComponent<MyNetworkManager>().ReadyText[0].color = myRed;
            }
        }
        else if (num == 2)
        {
            if (toTrue == true)
            {
                MyNetworkManagerObj.GetComponent<MyNetworkManager>().ReadyText[1].text = "p2 ready";
                MyNetworkManagerObj.GetComponent<MyNetworkManager>().ReadyText[1].color = myGreen;
            }
            else
            {
                MyNetworkManagerObj.GetComponent<MyNetworkManager>().ReadyText[1].text = "p2 not ready";
                MyNetworkManagerObj.GetComponent<MyNetworkManager>().ReadyText[1].color = myRed;
            }
        }
        else if (num == 3)
        {
            if (toTrue == true)
            {
                MyNetworkManagerObj.GetComponent<MyNetworkManager>().ReadyText[2].text = "p3 ready";
                MyNetworkManagerObj.GetComponent<MyNetworkManager>().ReadyText[2].color = myGreen;
            }
            else
            {
                MyNetworkManagerObj.GetComponent<MyNetworkManager>().ReadyText[2].text = "p3 not ready";
                MyNetworkManagerObj.GetComponent<MyNetworkManager>().ReadyText[2].color = myRed;
            }
        }
        else if (num == 4)
        {
            if (toTrue == true)
            {
                MyNetworkManagerObj.GetComponent<MyNetworkManager>().ReadyText[3].text = "p4 ready";
                MyNetworkManagerObj.GetComponent<MyNetworkManager>().ReadyText[3].color = myGreen;
            }
            else
            {
                MyNetworkManagerObj.GetComponent<MyNetworkManager>().ReadyText[3].text = "p4 not ready";
                MyNetworkManagerObj.GetComponent<MyNetworkManager>().ReadyText[3].color = myRed;
            }
        }
    }

    [ClientRpc]
    public void StartTheGame()//this will create scene
    {
        canMove = true;
        MyNetworkManagerObj.GetComponent<MyNetworkManager>().readyButton.SetActive(false);
        MyNetworkManagerObj.GetComponent<MyNetworkManager>().readyMenu.SetActive(false);
        MyNetworkManagerObj.GetComponent<MyNetworkManager>().win.gameObject.SetActive(false);
        gridManager.GetComponent<GridGenerator>().ClearScene();
        gridManager.GetComponent<GridGenerator>().CreateScene();
        gameObject.GetComponent<MeshRenderer>().enabled = true;
        myGoggle.SetActive(true);
 
        if (isLocalPlayer)
        {
            bombCount = 1;
            speed = 1;
            power = 1;
            maxBombCount = 1;
            powerText.text = "power:" + power.ToString();
            bombText.text = "bomb:" + maxBombCount.ToString();
            speedText.text = "speed:" + speed.ToString();

           

            if (playerID == 1)
            {
                transform.position = MyNetworkManagerObj.GetComponent<MyNetworkManager>().spawnPoint[0].position;
            }
            else if (playerID == 2)
            {
                transform.position = MyNetworkManagerObj.GetComponent<MyNetworkManager>().spawnPoint[1].position;
            }
            else if (playerID == 3)
            {
                transform.position = MyNetworkManagerObj.GetComponent<MyNetworkManager>().spawnPoint[2].position;
            }
            else if (playerID == 4)
            {
                transform.position = MyNetworkManagerObj.GetComponent<MyNetworkManager>().spawnPoint[3].position;
            }
        }

    }

    [ClientRpc]
    public void StartMoving()
    {
        canMove = true;
        gameObject.GetComponent<MeshRenderer>().enabled = true;
        myGoggle.SetActive(true);
        if (isLocalPlayer)
        {
            bombCount = 1;
            speed = 1;
            power = 1;
            maxBombCount = 1;
            powerText.text = "power:" + power.ToString();
            bombText.text = "bomb:" + maxBombCount.ToString();
            speedText.text = "speed:" + speed.ToString();

            if (playerID == 1)
            {
                transform.position = MyNetworkManagerObj.GetComponent<MyNetworkManager>().spawnPoint[0].position;
            }
            else if (playerID == 2)
            {
                transform.position = MyNetworkManagerObj.GetComponent<MyNetworkManager>().spawnPoint[1].position;
            }
            else if (playerID == 3)
            {
                transform.position = MyNetworkManagerObj.GetComponent<MyNetworkManager>().spawnPoint[2].position;
            }
            else if (playerID == 4)
            {
                transform.position = MyNetworkManagerObj.GetComponent<MyNetworkManager>().spawnPoint[3].position;
            }
        }
    }

    


   

    // Update is called once per frame
    void Update()
    {

        if(!isLocalPlayer)
        {
            return;
        }

        
        if (canMove == true && (Input.GetKey(KeyCode.W) || Input.GetKey(KeyCode.A) || Input.GetKey(KeyCode.S) || Input.GetKey(KeyCode.D)) || (Input.GetKey(KeyCode.UpArrow) || Input.GetKey(KeyCode.LeftArrow) || Input.GetKey(KeyCode.DownArrow) || Input.GetKey(KeyCode.RightArrow)))
        {
            Vector3 myDir = Vector3.zero;
            if (Input.GetKey(KeyCode.W) || Input.GetKey(KeyCode.UpArrow))
            {
                transform.eulerAngles = new Vector3(0, 180, 0);
                myDir += new Vector3(0, 0, 1);
                lastMove = 1;
            }
            if (Input.GetKey(KeyCode.A) || Input.GetKey(KeyCode.LeftArrow))
            {
                transform.eulerAngles = new Vector3(0, 90, 0);
                myDir += new Vector3(-1, 0, 0);
                lastMove = 2;
            }
            if (Input.GetKey(KeyCode.S) || Input.GetKey(KeyCode.DownArrow))
            {
                transform.eulerAngles = new Vector3(0, 0, 0);
                myDir += new Vector3(0, 0, -1);
                lastMove = 3;
            }
            if (Input.GetKey(KeyCode.D) || Input.GetKey(KeyCode.RightArrow))
            {
                transform.eulerAngles = new Vector3(0, 270, 0);
                myDir += new Vector3(1, 0, 0);
                lastMove = 4;
            }
            myDir.Normalize();
            rb.velocity = myDir * speed * moveSpeed;
        }
        else
        {
            rb.velocity = Vector3.zero;
            rb.angularVelocity = Vector3.zero;
            if(lastMove == 1)
            {
                transform.eulerAngles = new Vector3(0, 180, 0);
            }
            else if (lastMove == 2)
            {
                transform.eulerAngles = new Vector3(0, 90, 0);
            }
            else if (lastMove == 3)
            {
                transform.eulerAngles = new Vector3(0, 0, 0);
            }
            else if (lastMove == 4)
            {
                transform.eulerAngles = new Vector3(0, 270, 0);
            }

        }

        if(Input.GetKeyDown(KeyCode.Space) && canMove == true)
        {
            if(bombCount > 0)
            {
                int myX = 0;
                int myY = 0;
                for (int i = 0; i < 17; i++)
                {
                    if ((-25.5f + (3.0f * i)) <= transform.position.x && transform.position.x <= (-25.5f + (3.0f * i) + 3.0f))
                    {
                        myX = i;
                        break;
                    }
                }
                for (int i = 0; i < 11; i++)
                {
                    if ((16.0f - (3.0f * i)) >= transform.position.z && transform.position.z >= (16.0f - (3.0f * i) - 3.0f))
                    {
                        myY = i;
                        break;
                    }
                }
                if (gridManager.myGrid[myY , myX] == 0)//if the block is empty
                {
                    SpawnBomb(myY, myX, power, playerID);
                    bombCount--;
                }
            }
           
            
        }

        /*
        if(canMove == true && Input.GetKeyDown(KeyCode.E))
        {
            if(onAir == true)
            {
                transform.position = new Vector3(transform.position.x, 2.5f, transform.position.z);
                onAir = false;
            }
            else
            {
                transform.position = new Vector3(transform.position.x, 5f, transform.position.z);
                onAir = true;
            }
        }
        */
        

    }

    private void OnTriggerEnter(Collider other)
    {
        if(isLocalPlayer)
        {
            if (other.gameObject.tag == "power")
            {
                if (power < 10)
                {
                    power++;
                    powerText.text = "power:" + power.ToString();
                }
                DestoryPowerUp(other.gameObject);
            }
            if (other.gameObject.tag == "quant")
            {
                if (maxBombCount < 10)
                {
                    bombCount++;
                    maxBombCount++;
                    bombText.text = "bomb:" + maxBombCount.ToString();
                }
                DestoryPowerUp(other.gameObject);
            }
            if (other.gameObject.tag == "speed")
            {
                if (speed < 2)
                {
                    speed += 0.1f;
                    speedText.text = "speed:" + speed.ToString();
                }
                DestoryPowerUp(other.gameObject);
            }
        }
    }

    [ClientRpc]
    public void ChangeColor()
    {
        GameObject[] playerList = GameObject.FindGameObjectsWithTag("Player");
        foreach (GameObject myPlayer in playerList)
        {
            if (myPlayer.GetComponent<PlayerMovement>().playerID == 1)
            {
                myPlayer.GetComponent<MeshRenderer>().material = redSkin;
            }
            else if(myPlayer.GetComponent<PlayerMovement>().playerID == 2)
            {
                myPlayer.GetComponent<MeshRenderer>().material = yellowSkin;
            }
            else if (myPlayer.GetComponent<PlayerMovement>().playerID == 3)
            {
                myPlayer.GetComponent<MeshRenderer>().material = blueSkin;
            }
            else if (myPlayer.GetComponent<PlayerMovement>().playerID == 4)
            {
                myPlayer.GetComponent<MeshRenderer>().material = greenSkin;
            }
        }
       
    }

    [Command]
    public void SpawnBomb(int myY, int myX, int power, int myID)//this will run on server
    {
        ChangeGrid(myY, myX);
        GameObject myBomb = Instantiate(bomb, new Vector3((-25.5f + (3.0f * myX)) + 1.5f, 1.5f, (16.0f - (3.0f * myY) - 1.5f)), new Quaternion(0, 0, 0, 0));
        myBomb.GetComponent<BombBehaviour>().myX = myX;
        myBomb.GetComponent<BombBehaviour>().myY = myY;
        myBomb.GetComponent<BombBehaviour>().power = power;
        myBomb.GetComponent<BombBehaviour>().playerID = myID;
        NetworkServer.Spawn(myBomb);
        gridManager.objList[myY,myX] = myBomb;
    }

    [ClientRpc]
    public void ChangeGrid(int myY, int myX)
    {
        gridManager.myGrid[myY, +myX] = 3;
    }


    [Command]
    public void DestoryPowerUp(GameObject myPowerUp)
    {
        NetworkServer.Destroy(myPowerUp);
    }

    public void GetExploded()
    {
        Died();
    }

    [Command]
    public void Died()
    {
        CantMove();
        EndGame();
    }

    [ClientRpc]
    public void CantMove()
    {
        gameObject.GetComponent<MeshRenderer>().enabled = false;
        gameObject.GetComponent<PlayerMovement>().canMove = false;
        myGoggle.SetActive(false);

    }


    [ClientRpc]
    public void EndGame()
    {
        int playerLeft = 0;
        GameObject[] playerList = GameObject.FindGameObjectsWithTag("Player");
        foreach (GameObject myPlayer in playerList)
        {
            if(myPlayer.GetComponent<PlayerMovement>().canMove == true)
            {
                playerLeft++;
            }
        }
        if(playerLeft >= 2)
        {
            return;
        }

        gridManager.GetComponent<GridGenerator>().ClearScene();

        //first initialize(maybe someone left)
        MyNetworkManagerObj.GetComponent<MyNetworkManager>().ReadyText[0].text = "";
        MyNetworkManagerObj.GetComponent<MyNetworkManager>().ReadyText[1].text = "";
        MyNetworkManagerObj.GetComponent<MyNetworkManager>().ReadyText[2].text = "";
        MyNetworkManagerObj.GetComponent<MyNetworkManager>().ReadyText[3].text = "";

        //make menu appear
        foreach (GameObject myPlayer in playerList)
        {
            if (myPlayer.GetComponent<PlayerMovement>().playerID == 1)
            {
                MyNetworkManagerObj.GetComponent<MyNetworkManager>().ReadyText[0].text = "p1 not ready";
                MyNetworkManagerObj.GetComponent<MyNetworkManager>().ReadyText[0].color = myRed;
            }
            else if(myPlayer.GetComponent<PlayerMovement>().playerID == 2)
            {
                MyNetworkManagerObj.GetComponent<MyNetworkManager>().ReadyText[1].text = "p2 not ready";
                MyNetworkManagerObj.GetComponent<MyNetworkManager>().ReadyText[1].color = myRed;
            }
            else if(myPlayer.GetComponent<PlayerMovement>().playerID == 3)
            {
                MyNetworkManagerObj.GetComponent<MyNetworkManager>().ReadyText[2].text = "p3 not ready";
                MyNetworkManagerObj.GetComponent<MyNetworkManager>().ReadyText[2].color = myRed;
            }
            else if(myPlayer.GetComponent<PlayerMovement>().playerID == 4)
            {
                MyNetworkManagerObj.GetComponent<MyNetworkManager>().ReadyText[3].text = "p4 not ready";
                MyNetworkManagerObj.GetComponent<MyNetworkManager>().ReadyText[3].color = myRed;
            }
        }
        MyNetworkManagerObj.GetComponent<MyNetworkManager>().readyButtonText.text = "ready";
        MyNetworkManagerObj.GetComponent<MyNetworkManager>().readyMenu.SetActive(true);
        MyNetworkManagerObj.GetComponent<MyNetworkManager>().readyButton.SetActive(true);

        //who win?
        bool haveWinner = false;
        int winnerID = 0;
        foreach (GameObject myPlayer in playerList)
        {
            if(myPlayer.GetComponent<PlayerMovement>().canMove == true)
            {
                haveWinner = true;
                winnerID = myPlayer.GetComponent<PlayerMovement>().playerID;
            }
        }

        if(haveWinner == false)
        {
            MyNetworkManagerObj.GetComponent<MyNetworkManager>().win.gameObject.SetActive(true);
            MyNetworkManagerObj.GetComponent<MyNetworkManager>().win.text = "Draw...";
            MyNetworkManagerObj.GetComponent<MyNetworkManager>().win.color = new Color32(185, 0, 255, 255);
        }
        else
        {
            if(winnerID == 1)
            {
                MyNetworkManagerObj.GetComponent<MyNetworkManager>().win.gameObject.SetActive(true);
                MyNetworkManagerObj.GetComponent<MyNetworkManager>().win.text = "red win!";
                MyNetworkManagerObj.GetComponent<MyNetworkManager>().win.color = new Color32(255, 136, 148, 255);
            }
            else if (winnerID == 2)
            {
                MyNetworkManagerObj.GetComponent<MyNetworkManager>().win.gameObject.SetActive(true);
                MyNetworkManagerObj.GetComponent<MyNetworkManager>().win.text = "yellow win!";
                MyNetworkManagerObj.GetComponent<MyNetworkManager>().win.color = new Color32(243, 255, 136, 255);
            }
            else if (winnerID == 3)
            {
                MyNetworkManagerObj.GetComponent<MyNetworkManager>().win.gameObject.SetActive(true);
                MyNetworkManagerObj.GetComponent<MyNetworkManager>().win.text = "blue win!";
                MyNetworkManagerObj.GetComponent<MyNetworkManager>().win.color = new Color32(51, 135, 255, 255);
            }
            else if (winnerID == 4)
            {
                MyNetworkManagerObj.GetComponent<MyNetworkManager>().win.gameObject.SetActive(true);
                MyNetworkManagerObj.GetComponent<MyNetworkManager>().win.text = "green win!";
                MyNetworkManagerObj.GetComponent<MyNetworkManager>().win.color = new Color32(47, 255, 47, 255);
            }
        }

        foreach (GameObject myPlayer in playerList)
        {
            myPlayer.GetComponent<PlayerMovement>().ready = false;
            myPlayer.GetComponent<PlayerMovement>().canMove = false;
        }

    }

}
