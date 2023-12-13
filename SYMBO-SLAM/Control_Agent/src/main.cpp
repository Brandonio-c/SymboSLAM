/* Doc String

Description: main file control agent algorithm used to conduct ontological SLAM

 TODO
-fix error with loading and saving maps
- use of ontology
- develop mapping algorithm
- wall detection



__author__ = "Brandon Colelough"
__copyright__ = "Open Source"
__credits__ = ["https://robotics.ee.uwa.edu.au/eyesim/"]
__license__ = "Open Source"
__version__ = "1.0.1"
__maintainer__ = "Brandon Colelough"
__email__ = "brandon.colelough1234@gmail.com"
__status__ = "Production"

Date Last Edited: 05 pr 2022

*/


#include <iostream>
#include <vector>
#include "../include/comms.h"
#include "../include/agent_comms.h"
#include "../include/read_file.h"
#include "../include/save_maps.h"
#include "../include/global_map.h"
#include "../include/show_map.h"

pthread_mutex_t agent;

//initialise vector of local maps
std::vector<local_map> map_list;
std::map<int,int> agent_ID_map;
global_map_struct global_map;


/*
 * Ensure control agent is initialised BEFORE any edge agent to ensure they are placed as master (1) on network
 * TODO - write a script to make this happen regardless of initialisation
 */

int main(int argc, char *argv[]){
    // set up threads to be used
    pthread_t comm_init, save_maps, global_map_t;
    // ------------------------------------------------ get params from CLI
    // used to initialise the local maps of each agent -- IMPORTANT that this is given correctly in CLI
    int agent_num                       = atoi( argv[1] );// determine the number of agents within the scene -
    const std::string project_dir       = getexepath();
    const std::string location_file     = project_dir + argv[2];
    const std::string map_name                = argv[3];
    const std::string class_names_file       = project_dir + argv[4]; // read edge agent locations into a vector

    // ------------------------------------------------ get params from CLI

    // ------------------------------------------------ communications
    // arguments
    std::vector<std::vector<int>> agent_start_location(agent_num);
    read_agent_loc(location_file, &agent_start_location);

    std::map<int, std::string> class_names_map;
    read_class_names(class_names_file, &class_names_map);

    // generate local maps
    local_map map; // generic structure - has nothing in it!
    for(int idx = 0; idx < agent_num; idx++){
        map_list.push_back(map);
    }

    C_thargs_t thrgs_C;
    // set up arguments for comm thread
    thrgs_C._agent_ID_map = &agent_ID_map;



    // generate communicaitons thread
    XInitThreads();
    pthread_mutex_init(&agent, NULL);
    // conduct communication initialisation - use join funciton to ensure control - edge agent comms is complete
    pthread_create(&comm_init , NULL, comms, &thrgs_C);
    OSWait(1000);
    //pthread_join(comm_init, NULL);
    // generate a thread for each edge agent
    pthread_t threads[threadBuff];
    C_M_thargs_t thrgs_M_C[threadBuff];

    for (int x = 0; x <= agent_num-1; x++) {
            // create a thread for each edge agent and recieve stuff
            //thrgs_M_C[x].partner = agent_ID_map.find(x)->second; - Not needed - TODO Prune
            thrgs_M_C[x]._map_list = &map_list;
            thrgs_M_C[x]._agent_ID_map = &agent_ID_map;
            thrgs_M_C[x].mes_num = x+1;
            XInitThreads();
            LCDPrintf("creating thread number %d \n",x);
            pthread_create(&threads[x], NULL, receive_LocalMaps, &thrgs_M_C[x]);
            OSWait(300);
            }

    // ------------------------------------------------ communications

    // ------------------------------------------------ Save local maps
    // wait before starting to save maps
    // set up arguments for save thread
    /*
    save_thargs_t thrgs_s;
    thrgs_s._map_list = &map_list;
    thrgs_s.map_name = map_name;
    pthread_create(&save_maps , NULL, save_local_maps, &thrgs_s);
    pthread_create(&save_maps , NULL, load_local_maps, &thrgs_s);
    */

    // ------------------------------------------------ Save local maps

    // ------------------------------------------------ Generate global maps

    // ------------------------------------------------ Generate global maps

    OSWait(1000); //wait before starting global maps TODO - add more time to this before deployment
    global_map_thargs_t thrgs_g;
    thrgs_g._global_map = &global_map;
    thrgs_g._map_list = &map_list;
    thrgs_g._agent_ID_map = &agent_ID_map;
    thrgs_g.agent_start_location = &agent_start_location;
    thrgs_g.agen_num = agent_num;
    thrgs_g._class_names_map = &class_names_map;
    pthread_create(&global_map_t, NULL, global_map_main, &thrgs_g);
    KEYWait(KEY4);
    pthread_exit(0); // will terminate program
    return 0;
}
