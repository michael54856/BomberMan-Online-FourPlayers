using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;
using TMPro;

public class MyNetworkManager : NetworkManager
{
    public Transform[] spawnPoint = new Transform[4];

    public GridGenerator gridGen;

    public GameObject readyButton;
    public GameObject powerList;
    public GameObject readyMenu;

    public TextMeshProUGUI[] ReadyText = new TextMeshProUGUI[4];

    public TextMeshProUGUI readyButtonText;

    private Color32 myGreen = new Color32(165, 255, 180, 255);
    private Color32 myBlue = new Color32(165, 248, 255, 255);
    private Color32 myRed = new Color32(255, 150, 150, 255);

    public GameObject gridManager;
    public TextMeshProUGUI win;

    public bool[] playerExist = new bool[4];

    public struct CreateCharacterMessage : NetworkMessage
    {
        public int playerID;
    }
    // Start is called before the first frame update
    public override void OnStartServer()
    {
        base.OnStartServer();
        NetworkServer.RegisterHandler<CreateCharacterMessage>(OnCreateCharacter);//this will deal with the message,and send to OnCreateCharacter 
        playerExist[0] = false;
        playerExist[1] = false;
        playerExist[2] = false;
        playerExist[3] = false;
    }

    public override void OnServerDisconnect(NetworkConnection conn)
    {
        base.OnServerDisconnect(conn);

        if (numPlayers == 1)//when no player left
        {
            readyButton.SetActive(false);
            powerList.SetActive(true);
            readyMenu.SetActive(true);
            win.gameObject.SetActive(false);
            ReadyText[0].text = "p1 not ready";
            ReadyText[0].color = myRed;
            ReadyText[1].text = "wait for join...";
            ReadyText[1].color = myBlue;
            ReadyText[2].text = "";
            ReadyText[3].text = "";
            readyButtonText.text = "ready";
            GameObject[] playerList = GameObject.FindGameObjectsWithTag("Player");
            foreach (GameObject myPlayer in playerList)//set the server player's ready to false
            {
                if (myPlayer.GetComponent<PlayerMovement>().isLocalPlayer)//find local player
                {
                    myPlayer.GetComponent<PlayerMovement>().ready = false;
                    myPlayer.GetComponent<PlayerMovement>().canMove = false;
                    myPlayer.transform.position = spawnPoint[0].position;
                    //clearScene
                    gridManager.GetComponent<GridGenerator>().ClearScene();
                }
            }
        }
    }
    public override void OnServerConnect(NetworkConnection conn)
    {
        base.OnServerConnect(conn);
        if(numPlayers >= 4)
        {
            conn.Disconnect();
            return;
        }
    }
    public override void OnClientConnect(NetworkConnection conn)//run on client
    {
        base.OnClientConnect(conn);
        // you can send the message here, or wherever else you want
        CreateCharacterMessage characterMessage = new CreateCharacterMessage
        {
            playerID = 0
        };
        powerList.SetActive(true);
        readyMenu.SetActive(true);
        conn.Send(characterMessage);
        
    }

    public override void OnClientDisconnect(NetworkConnection conn)
    {
        base.OnClientDisconnect(conn);
        powerList.SetActive(false);
        readyMenu.SetActive(false);
        readyButton.SetActive(false);
        win.gameObject.SetActive(false);
        gridManager.GetComponent<GridGenerator>().ClearScene();
    }

    void OnCreateCharacter(NetworkConnection conn, CreateCharacterMessage message)//this will run on server
    {
        if(numPlayers == 0)
        {
            playerExist[0] = true;
            GameObject playerObj = Instantiate(playerPrefab, spawnPoint[0].transform.position, new Quaternion(0, 0, 0, 0));
            playerObj.GetComponent<PlayerMovement>().playerID = 1;
            NetworkServer.AddPlayerForConnection(conn, playerObj);
            playerObj.GetComponent<PlayerMovement>().ChangeColor();
            playerObj.GetComponent<PlayerMovement>().InitMenu();
        }
        else
        {
            for(int i = 1; i <= 3; i++)
            {
                if(playerExist[i] == false)
                {
                    playerExist[i] = true;
                    GameObject playerObj = Instantiate(playerPrefab, spawnPoint[i].transform.position, new Quaternion(0, 0, 0, 0));
                    playerObj.GetComponent<PlayerMovement>().playerID = i+1;
                    NetworkServer.AddPlayerForConnection(conn, playerObj);
                    playerObj.GetComponent<PlayerMovement>().ChangeColor();
                    playerObj.GetComponent<PlayerMovement>().InitMenu();
                    break;
                }
            }
        }

       
    }
}
