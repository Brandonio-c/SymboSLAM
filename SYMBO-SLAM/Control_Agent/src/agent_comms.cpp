/* Doc String

Description: main file communications between edge and control agents

 TODO
- set up comminucations with dummy input for localmap
- set up communications with real localmap from random search

 - Implement a check to ensure message was recieved by control agent - Send again if it was not!


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

#include "../include/agent_comms.h"
#include "../include/read_file.h"
#include <iostream>

/*
 * Memory allocation and initialisation of structure
 * Structure primitive is stored in heaade file
 */
struct position* create_pos(struct position* s, int x, int y, int phi)
{
    s = new position;
    s->x = x;
    s->y = y;
    s->phi = phi;
    return s;
}

/*
 * Not needed - TODO Prune
 */
struct YOLO_prediction_results* create_YOLO_prediction_results(struct YOLO_prediction_results* s, int pos_x, int pos_y, int width, int height, int best_class, float best_probability, std::string name)
{
    s = new YOLO_prediction_results;
    s->pos_x = pos_x;
    s->pos_y = pos_y;
    s->width = width;
    s->height = height;
    s->best_class = best_class;
    s->best_probability = best_probability;
    s-> name = name;
    return s;
}

struct detected_feature* create_feature(struct detected_feature* s, int feature_class, float confidence, std::string name, position *feature_position){
    s = new detected_feature;
    s->name = name;
    s->object_class = feature_class;
    s->object_position = feature_position;
    s->confidence = confidence;
    return s;
}

/*
 * shes messy, but she works.
 * TODO - clean up assignment statements
 *      - improve efficiency (somehow?)
 */
void map_decoder(int sender, std::string message, vector<local_map> *map_list, map<int, int> *agent_ID_map) {
    /* note the following operators are used:
     * , - separator comma deliminated)
     * /0 - deliminator for 3 structure types
     * /1 - deliminator for positions in position list (also used in prediction position list)
     * /2 - deliminator for prediciton results list
     * /3 - deliminator for results information
     */
    int agent_map_assosciation = agent_ID_map->find(sender)->second;
    std::string delim_0 = "/0";
    std::string delim_1 = "/1";
    std::string delim_2 = "/2";
    std::string delim_4 = ",";
    size_t pos = 0;

    // declare all the vectors that are going to be used
    std::vector<int> distance;
    std::vector<std::string> position_vec;
    std::string token;
    std::vector<std::string> map_structs;
    std::vector<std::string> position_list_vec;
    std::vector<std::string> predictions_list_vec;
    std::vector<std::string> prediction_result_struct;
    // initialise all the structures as well
    position *cur_pos;
    std::string feature_name;
    int feature_class;
    detected_feature* new_feature;
    float confidence;


    // split message into three structure types
        while ((pos = message.find(delim_0)) != std::string::npos) {
            token = message.substr(0, pos);
            map_structs.push_back(token);
            message.erase(0, pos + delim_0.length());
        }

        // --------------------------------------------------------------------current position

            if (map_structs.size() > 0) {
                // next - make a pos out of the cur pos info - stored in first position of the local map structures
                while ((pos = map_structs[0].find(delim_4)) != std::string::npos) {
                    token = map_structs[0].substr(0, pos);
                    position_vec.push_back(token);
                    map_structs[0].erase(0, pos + delim_4.length());
                }
                cur_pos = create_pos(cur_pos, stoi(position_vec[0]), stoi(position_vec[1]), stoi(position_vec[2]));
                //and updates this agents lcoalmap to show the current position


                if (map_list->at(agent_map_assosciation).cur_position.size() > 0) {
                    map_list->at(agent_map_assosciation).cur_position.at(0) = *cur_pos;
                } else { // for first entry - there's probs a better way to do this though TODO - fix
                    map_list->at(agent_map_assosciation).cur_position.push_back(*cur_pos);
                }
            } else {
                LCDPrintf("ERROR in message received from %d - No current position recieved \n", sender);
            }

        // --------------------------------------------------------------------current position

        // --------------------------------------------------------------------position list

        // check that the message recieved has a position list
        if (map_structs.size() > 1) {

            // next - make a position list out of the info in the second part of the message vector
            // note delim is /1
            while ((pos = map_structs[1].find(delim_1)) != std::string::npos) {
                token = map_structs[1].substr(0, pos);
                position_list_vec.push_back(token);
                map_structs[1].erase(0, pos + delim_1.length());
            }

            // now make a position for each vector entry and add it to the position list vector in this agents localmap
            for (int idx = 0; idx < position_list_vec.size(); idx++) {
                position_vec.clear();
                while ((pos = position_list_vec[idx].find(delim_4)) != std::string::npos) {
                    token = position_list_vec[idx].substr(0, pos);
                    position_vec.push_back(token);
                    position_list_vec[idx].erase(0, pos + delim_4.length());
                }
                cur_pos = create_pos(cur_pos, stoi(position_vec[0]), stoi(position_vec[1]), stoi(position_vec[2]));
                map_list->at(agent_map_assosciation).position_list.push_back(*cur_pos);
            }

        } else {
            LCDPrintf("ERROR in message received from %d - No position list recieved  %d\n", sender);
        }

        // --------------------------------------------------------------------position list

        // --------------------------------------------------------------------feature list

        // finally, make a feature entry for each feature in the message data

        // check that there is a predictions list to decode
        if (map_structs.size() > 2) {
            while ((pos = map_structs[2].find(delim_1)) != std::string::npos) {
                token = map_structs[2].substr(0, pos);
                predictions_list_vec.push_back(token);
                map_structs[2].erase(0, pos + delim_1.length());
            }

            // check for faults in prediction list information
            if(predictions_list_vec.size()>0){
                // make a results structure for each result in the predictions list vector
                for (int idx = 0; idx < predictions_list_vec.size(); idx++) {
                    prediction_result_struct.clear();
                    while ((pos = predictions_list_vec[idx].find(delim_2)) != std::string::npos) {
                        token = predictions_list_vec[idx].substr(0, pos);
                        prediction_result_struct.push_back(token);
                        predictions_list_vec[idx].erase(0, pos + delim_2.length());
                    }
                    if(prediction_result_struct.size()==4){
                        // start with a position vector for each result
                        position_vec.clear();
                        while ((pos = prediction_result_struct[0].find(delim_4)) != std::string::npos) {
                            token = prediction_result_struct[0].substr(0, pos);
                            position_vec.push_back(token);
                            prediction_result_struct[0].erase(0, pos + delim_4.length());
                        }
                        cur_pos = create_pos(cur_pos, stoi(position_vec[0]), stoi(position_vec[1]), stoi(position_vec[2]));
                        // next, extract the class and name at positions 2 and 3 (1 and 2 as we count from 0 tho)
                        feature_name = prediction_result_struct[1];
                        confidence = std::stof(prediction_result_struct[2]);
                        feature_class = std::stoi(prediction_result_struct[3]);
                        new_feature = create_feature(new_feature, feature_class, confidence, feature_name, cur_pos);
                        map_list->at(agent_map_assosciation).detected_feature_list.push_back(*new_feature);
                    }else{
                        LCDPrintf("ERROR in message received from %d - predictions list has data faults - not enough arguments received!\n", sender);
                    }
                }

            }else{
                LCDPrintf("ERROR in message received from %d - predictions list has data faults \n", sender);
            }

            // --------------------------------------------------------------------feature list
        }


}

/*
 * Used in production and debugging to simulate recieving messages from edge agents, gets a bit funky when you get past the
 * third message for each agent
 * - temp code for debugging purposes only! (hamburger code tbh)
 */

void sim_messages(int *partner, std::string *received_message, int *mes_num, int IDList[IDList_buffer]){


    switch(*mes_num) {
        case 1:
            *partner = IDList[0];
            *received_message ="0,0,0,/00,0,0,/1/0";
            break;
        case 2:
            *partner = IDList[1];
            *received_message = "0,0,0,/00,0,0,/1/0";
            break;
        case 3:
            *partner = IDList[2];
            *received_message = "0,0,0,/00,0,0,/1/0";
            break;
        case 4:
            *partner = IDList[3];
            *received_message = "0,0,0,/00,0,0,/1/0";
            break;
        case 5:
            *partner = IDList[0];
            *received_message = "345,193,31,/07,3,24,/193,44,28,/1187,97,31,/1274,150,30,/1345,193,31,/1/0";
            break;
        case 6:
            *partner = IDList[1];
            *received_message = "76,46,34,/05,3,29,/176,46,34,/1/01476,2299,0,/2stop sign 100%/20.995374/211/2/1/0";
            break;
        case 7:
            *partner = IDList[2];
            *received_message = "76,46,34,/05,3,29,/176,46,34,/1/01476,2299,0,/2stop sign 100%/20.995374/211/2/1/0";
            break;
        case 8:
            *partner = IDList[3];
            *received_message = "988,-297,-6,/0601,-253,-11,/1697,-266,-6,/1792,-277,-6,/1879,-286,-6,/1988,-297,-6,/1/0";
            break;
        case 9:
            *partner = IDList[0];
            *received_message = "1788,-330,-104,/01812,-238,-106,/11788,-330,-104,/1/04575,4068,0,/2stop sign 66%/20.655626/211/2/1/0";
            break;
        case 10:
            *partner = IDList[1];
            *received_message = "1788,-330,-104,/01812,-238,-106,/11788,-330,-104,/1/04575,4068,0,/2stop sign 66%/20.655626/211/2/1/0";
            break;
        case 11:
            *partner = IDList[2];
            *received_message = "1788,-330,-104,/01812,-238,-106,/11788,-330,-104,/1/03575,4068,0,/2stop sign 66%/20.655626/211/2/1/0";
            break;
        case 12:
            *partner = IDList[3];
            *received_message = "1788,-330,-104,/01812,-238,-106,/11788,-330,-104,/1/03575,4068,0,/2stop sign 66%/20.655626/211/2/1/0";
            break;
        default:
            *partner = IDList[0];
            *received_message = "0,0,0,/00,0,0,/1/0";
    }
    *mes_num = *mes_num + 4; // as this code was written specifically for 4 agents
    if(*mes_num > 12){
        *mes_num = 1;
    }

    /*
     * Code used in debugging
            std::string message1 = "82,48,31,/05,3,30,/182,48,31,/1/00,0,29,/273/313/348/345/311/30.993557/3stop sign 99%/3/4223/37/349/349/311/30.994393/3stop sign 99%/3/4/21724/31767/3/2/165,38,31,/2204/37/347/351/311/30.998166/3stop sign 100%/3/4/21715/3/2/1/0\"\"82,48,31,/05,3,30,/182,48,31,/1/00,0,29,/273/313/348/345/311/30.993557/3stop sign 99%/3/4223/37/349/349/311/30.994393/3stop sign 99%/3/4/21724/31767/3/2/165,38,31,/2204/37/347/351/311/30.998166/3stop sign 100%/3/4/21715/3/2/1/0";
            char message_array[message1.length() + 1];
            strcpy(message_array, message1.c_str());

            partner = 46;
            std::string recieved_message= "82,48,31,/05,3,30,/182,48,31,/1/00,0,29,/273/313/348/345/311/30.993557/3stop sign 99%/3/4223/37/349/349/311/30.994393/3stop sign 99%/3/4/21724/31767/3/2/165,38,31,/2204/37/347/351/311/30.998166/3stop sign 100%/3/4/21715/3/2/1/0\"\"82,48,31,/05,3,30,/182,48,31,/1/00,0,29,/273/313/348/345/311/30.993557/3stop sign 99%/3/4223/37/349/349/311/30.994393/3stop sign 99%/3/4/21724/31767/3/2/165,38,31,/2204/37/347/351/311/30.998166/3stop sign 100%/3/4/21715/3/2/1/0";
            //std::string recieved_message = "-2136,-1122,41,/0-2175,-1133,-157,/1-2149,-1133,48,/1-2136,-1122,41,/1/03,/1/0";
            //std::string recieved_message(buf);
            //std::string recieved_message(buf);
            // used to log results for debugging!
            //ofstream myfile;

            myfile.open (logfile, std::ios_base::app);
            myfile << "Partner:";
            myfile <<std::to_string(partner) + "\n";
            myfile << "message";
            myfile << received_message;
            myfile << "\n";
            myfile.close();

             */

}

/*
 * receive_localMaps creates a thread for each agent and receive local maps on each thread.
 */

[[noreturn]] void *receive_LocalMaps(void *arguments){
    // ------------------------------------------------ unpack arguments
    std::vector<local_map>* map_list = ((C_M_thargs_t*)arguments)->_map_list;
    std::map<int,int>* agent_ID_map = ((C_M_thargs_t*)arguments)->_agent_ID_map;
    int mes_num = ((C_M_thargs_t*)arguments)->mes_num; // used for debugging purposes only
    // ------------------------------------------------ unpack arguments

    std::string received_message;
    int IDList[IDList_buffer];         // buffer size specified in header file
    char buf[MAX];              // max size also specified in header file
    int partner;// = ((C_M_thargs_t*)arguments)->partner;


    // ------------------------------------------------ used for logging messages
    const std::string logfile      =  getexepath() + "logfile.txt";
    ofstream myfile;
    myfile.open (logfile, std::ios_base::app);
    myfile << "Thread created \n";
    // ------------------------------------------------ used for logging messages

    while(1) // infinite loop as we're always going to be scanning for comms and sending local map information through
    {
        pthread_mutex_lock(&agent);
        // continuously check to see whether other agents are on the network
        if(RADIOStatus(IDList)> 1){

            //RADIOReceive(&partner, buf, MAX);
            //std::string received_message(buf);

            sim_messages(&partner, &received_message, &mes_num, IDList);

            myfile.open (logfile, std::ios_base::app);
            myfile << "Partner:";
            myfile <<std::to_string(partner) + "\n";
            myfile << "message";
            myfile << received_message;
            myfile << "\n";
            myfile.close();


            LCDPrintf("%s received! Thank you edge agent  %d \n",buf, partner);
            map_decoder(partner, received_message, map_list, agent_ID_map);
            LCDPrintf("map Decoded \n");
        }else{
            LCDPrintf("ERROR! Control agent disconnected from network!");
            std::cout << "ERROR! Control agent disconnected from network "<< std::endl;
        } // else - do nothing as there is nobody to communicate with
        pthread_mutex_unlock(&agent);
        OSWait(400); //receive comms pings at increments
    }
}
