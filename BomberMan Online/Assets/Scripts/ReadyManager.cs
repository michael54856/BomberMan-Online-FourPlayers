using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;
using TMPro;

public class ReadyManager : NetworkBehaviour
{
    public TextMeshProUGUI readyButtonText;
    public TextMeshProUGUI p1ReadyText;
    public TextMeshProUGUI p2ReadyText;

    public Color32 myGreen = new Color32(165, 255, 180, 255);
    public Color32 myBlue = new Color32(165, 248, 255, 255);
    public Color32 myRed = new Color32(255, 150, 150, 255);
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void ClickReady()
    {
        /*
        if(isServer)
        {
            GameObject[] playerList = GameObject.FindGameObjectsWithTag("Player");
            foreach (GameObject myPlayer in playerList)
            {
                if (myPlayer.GetComponent<PlayerMovement>().isLocalPlayer)//find local player
                {
                    if (myPlayer.GetComponent<PlayerMovement>().ready == true)
                    {
                        readyButtonText.text = "ready";
                        myPlayer.GetComponent<PlayerMovement>().ChangeReadyTextCommand(1,false);
                    }
                    else
                    {
                        readyButtonText.text = "not ready";
                        myPlayer.GetComponent<PlayerMovement>().ChangeReadyTextCommand(1,true);
                    }
                }
            }
        }
        else
        {
            GameObject[] playerList = GameObject.FindGameObjectsWithTag("Player");
            foreach (GameObject myPlayer in playerList)
            {
                if (myPlayer.GetComponent<PlayerMovement>().isLocalPlayer)//find local player
                {
                    if (myPlayer.GetComponent<PlayerMovement>().ready == true)//true->false
                    {
                        readyButtonText.text = "ready";
                        myPlayer.GetComponent<PlayerMovement>().ChangeReadyTextCommand(2,false);
                    }
                    else//false->true
                    {
                        readyButtonText.text = "not ready";
                        myPlayer.GetComponent<PlayerMovement>().ChangeReadyTextCommand(2,true);
                    }
                }
            }
        }
        */

        GameObject[] playerList = GameObject.FindGameObjectsWithTag("Player");
        foreach (GameObject myPlayer in playerList)
        {
            if (myPlayer.GetComponent<PlayerMovement>().isLocalPlayer)//find local player
            {
                if (myPlayer.GetComponent<PlayerMovement>().ready == true)//true->false
                {
                    readyButtonText.text = "ready";
                    myPlayer.GetComponent<PlayerMovement>().ChangeReadyTextCommand(myPlayer.GetComponent<PlayerMovement>().playerID, false);
                }
                else//false->true
                {
                    readyButtonText.text = "not ready";
                    myPlayer.GetComponent<PlayerMovement>().ChangeReadyTextCommand(myPlayer.GetComponent<PlayerMovement>().playerID, true);
                }
            }
        }



    }
}
