/* Doc String

Description: file used to conduct handshake between edge agents and control agent


__author__ = "Brandon Colelough"
__copyright__ = "Open Source"
__credits__ = ["https://robotics.ee.uwa.edu.au/eyesim/"]
__license__ = "Open Source"
__version__ = "1.0.1"
__maintainer__ = "Brandon Colelough"
__email__ = "brandon.colelough1234@gmail.com"
__status__ = "Production"

Date Last Edited: 04 pr 2022

*/

#include "../include/comms.h"


[[noreturn]] void *comms(void *arguments)
{
    //LCDPrintf("my id %d\n", ((C_thargs_t*)arguments)->my_id);

    // ---------------------------------------------- params
    int i, my_id, partner, agent_num;
    int IDList[IDList_buffer];         // buffer size specified in header file
    char buf[MAX];              // max size also specified in header file
    char* message = (char*)"control_agent";
    std::map<int,int>* agent_ID_map = ((C_thargs_t*)arguments)->_agent_ID_map;
    // ---------------------------------------------- params

    // wait until there is at least one other agent on the network
    pthread_mutex_lock(&agent);
    RADIOInit();
    my_id = RADIOGetID();
    LCDPrintf("Control agent - my id is %d\n", my_id);
    while(RADIOStatus(IDList) <=1){
        LCDPrintf("Waiting for other agents to join the network!");
        std::cout << "Waiting for other agents to join the network!"<< std::endl;
    }
    agent_num = RADIOStatus(IDList);
    // the master  this agent, control agent) will now send out a message to let all other agents on the
    // network know that this agents ID is the control agent ID
    OSWait(300); // wait 3 seconds - allows sim time to ensure all edge agents are up and running on the network


    // can't use x to assign maps as it skips over 1 for the control agents D
    int counter = 0;
    for (int x = 0; x <= agent_num ; x++) {
        if (my_id != IDList[x]) // make sure you're not sending a message to yourself
        {
            partner = IDList[x]; // robot 1 --> robot x
            LCDPrintf("Control agent - Sending handshake message to edge agent with ID %d\n", partner);
            RADIOSend( partner, message);
            // also asign each edge agent a local map
            agent_ID_map->insert(std::pair<int,int>(IDList[x],counter));// that is, the agent with id at IDList[x] is assosciated with map number x
            counter++;
        }

    }
    pthread_mutex_unlock(&agent);

    /*
     * Unsure why but letting this thread die crashes teh whole program - easy fix is to just keep it open?
     */
    while(1){

    }

}

