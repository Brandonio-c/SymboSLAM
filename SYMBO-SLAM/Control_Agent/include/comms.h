//
// Created by brandonio on 4/4/22.
//

#include "local_map.h"

#ifndef CONTROL_AGENT_COMMS_H
#define CONTROL_AGENT_COMMS_
extern pthread_mutex_t agent;

typedef struct Comm_thread_arguments{
    std::map<int,int>* _agent_ID_map;
} C_thargs_t;


class comms {

};

[[noreturn]] void *comms(void *arguments);


#endif //CONTROL_AGENT_COMMS_H
