//
// Created by brandonio on 8/4/22.
//


#include <stdio.h>
#include <tensorflow/c/c_api.h>
#include <Python.h>
//#include <boost/python.hpp>
//#include <pybind11/pybind11.h>
//#include <pybind11/embed.h>  // python interpreter
//#include <pybind11/stl.h>  // type conversion
#include "local_map.h"
//#include "cowl_api.h"
#include "../include/read_file.h"

#ifndef CONTROL_AGENT_GLOBAL_MAP_H
#define CONTROL_AGENT_GLOBAL_MAP_H
extern pthread_mutex_t agent;

/*
 *
 */

struct global_map_entry{
    std::vector<int> agent_IDs;
    detected_feature* _detected_feature;
};

struct global_map_struct{
    std::map<int, std::vector<global_map_entry>> entries_map; // class type used as key
    //CowlOntology *ontology;
};

typedef struct global_map_thread_arguments{
    global_map_struct* _global_map;
    std::vector<local_map>* _map_list;
    std::map<int,int>* _agent_ID_map;
    std::vector<std::vector<int>>* agent_start_location;
    std::map<int, std::string>* _class_names_map;
    int agen_num;
} global_map_thargs_t;

void *Check_TF(void);

void ammend_map(int agent_num, std::vector<int> position_list_tracker, std::vector<int> predictions_list_tracker, vector<local_map> *map_list, std::vector<std::vector<int>> *agent_start_location);

void merge_map(int agent_num, std::vector<int> predictions_list_tracker, vector<local_map> *map_list, std::map<int,int>* agent_ID_map, global_map_struct* global_map);

void load_ontology(global_map_struct* global_map);

void build_semantics(global_map_struct* global_map, std::map<int, std::string>* class_names_map);

[[noreturn]] void *global_map_main(void *arguments);

//static CowlOntology* load_import(void *ctx, CowlIRI *iri);

//static void handle_error(void *ctx, CowlError const *error);

static bool for_each_cls(void *ctx, void *cls);

void python_interface_test();


#endif //CONTROL_AGENT_GLOBAL_MAP_H
