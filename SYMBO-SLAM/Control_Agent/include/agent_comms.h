//
// Created by brandonio on 4/4/22.
//

#include "local_map.h"

#ifndef CONTROL_AGENT_COMMS_H
#define CONTROL_AGENT_COMMS_H
extern pthread_mutex_t agent;

typedef struct Comm_multiple_thread_arguments{
    //int partner; - Not needed - TODO Prune
    std::vector<local_map>* _map_list;
    std::map<int,int>* _agent_ID_map;
    int mes_num; // Used in debugging!
} C_M_thargs_t;

class agent_comms {

};

[[noreturn]] void *receive_LocalMaps(void *arguments);

void map_decoder(int sender, std::string message, vector<local_map> *map_list, map<int, int> *agent_ID_map);

#endif //CONTROL_AGENT_COMMS_H
