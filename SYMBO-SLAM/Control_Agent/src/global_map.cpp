/* Doc String

Description: builds an global map of the environment through an ontological domain

 - takes in all of the local maps
 - ammends their positions based on the edge agent starting position
 - places all predictions on a global map
 - cross correlates adn merges local maps through predictions
 - utilises an ontology to determine links and relationships between predictions and environment
 - utilises an ANN with an ontology to determine what is and is not a reference point


 * None of the below modules have worked to efectively run this C++ application with Python scripts.
 * Python scripts are needed for the use of an ontology.
 *
 * As such, the architecture is being moved onto a python-based platform. See control-agent2 branch for more


__author__ = "Brandon Colelough"
__copyright__ = "Open Source"
__credits__ = [""]
__license__ = "Open Source"
__version__ = "1.0.1"
__maintainer__ = "Brandon Colelough"
__email__ = "brandon.colelough1234@gmail.com"
__status__ = "Production"

Date Last Edited: 11 pr 2022

*/


//#include <boost/python/extract.hpp>
#include "global_map.h"

/*
 *
*/
struct global_map_entry* create_global_map_entry(struct global_map_entry* s, std::vector<int> agent_IDs, detected_feature* _detected_feature){
    s = new global_map_entry;
    s->_detected_feature = _detected_feature;
    s->agent_IDs = agent_IDs;
    return s;
}


/*
 * Checks the systems TF version
 */
void *Check_TF(void){
    //LCDPrintf("TensorFlow C library version %s\n", TF_Version());
    printf("TensorFlow C library version %s\n", TF_Version());
}


/*
 *
 */
void ammend_map(int agent_num, std::vector<int> position_list_tracker, std::vector<int> predictions_list_tracker, vector<local_map> *map_list, std::vector<std::vector<int>> *agent_start_location){

    int start_pos, end_pos;
    for(int idx = 0; idx < agent_num; idx++){
        // amend from the location indicated in the list tracker to the end of the list
        start_pos = position_list_tracker.at(idx);
        end_pos = map_list->at(idx).position_list.size();
        for(int idy = start_pos; idy < end_pos; idy++){
            map_list->at(idx).position_list.at(idy).x = map_list->at(idx).position_list.at(idy).x + agent_start_location->at(idx).at(0); // 0 is x - TODO - change this into a structure as opposed to a vec of vecs
            map_list->at(idx).position_list.at(idy).y = map_list->at(idx).position_list.at(idy).y + agent_start_location->at(idx).at(1); // 1 is y
            map_list->at(idx).position_list.at(idy).phi = map_list->at(idx).position_list.at(idy).phi + agent_start_location->at(idx).at(2); // 2 is phi
        }
        // update the position list tracker
        position_list_tracker.at(idx) = end_pos;
        // do the same as above but for predictions lists
        start_pos = predictions_list_tracker.at(idx);
        end_pos = map_list->at(idx).detected_feature_list.size();
        for(int idy = start_pos; idy < end_pos; idy++){
            map_list->at(idx).detected_feature_list.at(idy).object_position->x = map_list->at(idx).detected_feature_list.at(idy).object_position->x + agent_start_location->at(idx).at(0); // 0 is x - TODO - change this into a structure as opposed to a vec of vecs
            map_list->at(idx).detected_feature_list.at(idy).object_position->y = map_list->at(idx).detected_feature_list.at(idy).object_position->y + agent_start_location->at(idx).at(1); // 1 is y
            map_list->at(idx).detected_feature_list.at(idy).object_position->phi = map_list->at(idx).detected_feature_list.at(idy).object_position->phi + agent_start_location->at(idx).at(2); // 2 is phi
        }
        //predictions_list_tracker.at(idx) = end_pos;
    }


}


/*
 *
 */

void merge_map(int agent_num, std::vector<int> predictions_list_tracker, vector<local_map> *map_list, std::map<int,int>* agent_ID_map, global_map_struct* global_map){
    int start_pos, end_pos, tolerance, agent_map_assosciation, cur_feature_x, cur_feature_y, new_feature_x, new_feature_y, feature_class, distance;
    global_map_entry* new_global_map_entry;
    tolerance = 100;
    bool feature_found;
    for(int idx = 0; idx < agent_num; idx++){
        agent_map_assosciation = agent_ID_map->find(idx)->first;
        start_pos = predictions_list_tracker.at(idx);
        end_pos = map_list->at(idx).detected_feature_list.size();
        //go through all of the new found features
        for(int idy=start_pos; idy<end_pos; idy++){
            feature_found = false;
            // find all other features within the tolerance range that match this feature
            // match using class types first
            feature_class = map_list->at(idx).detected_feature_list.at(idy).object_class;
            if(global_map->entries_map.count(feature_class)){
                // go through all entries with that feature type and check whether they are within location of this feature
                // tolerance for this is provided above
                new_feature_x = map_list->at(idx).detected_feature_list.at(idy).object_position->x;
                new_feature_y = map_list->at(idx).detected_feature_list.at(idy).object_position->y;
                for(int idz = 0;idz < global_map->entries_map[feature_class].size(); idz ++){
                    cur_feature_x = global_map->entries_map[feature_class].at(idz)._detected_feature->object_position->x;
                    cur_feature_y =  global_map->entries_map[feature_class].at(idz)._detected_feature->object_position->y;
                    distance = sqrt(pow((cur_feature_x - new_feature_x),2) + pow((cur_feature_y - new_feature_y),2)  );
                    if(distance < tolerance){
                        //Assume this is the same feature that has been previously found, add this agents ID to the ID list of this
                        // feature and set the featyre found flag to be true
                        global_map->entries_map[feature_class].at(idz).agent_IDs.push_back(agent_map_assosciation);
                        feature_found = true;
                    }
                }
            }else{
                // new feature - add it to the global map
                std::vector<int> agent_IDs{agent_map_assosciation};
                new_global_map_entry = create_global_map_entry(new_global_map_entry, agent_IDs,&(map_list->at(idx).detected_feature_list.at(idy)));
                std::vector<global_map_entry> entry_list{};
                entry_list.push_back(*new_global_map_entry);
                global_map->entries_map[feature_class] = entry_list;
                //global_map->entries_map.insert(std::pair<int, global_map_entry>(feature_class, *global_map_entry));
            }

            if(!feature_found) {
              // feature was not found but this is not a new class
              // add this feature at its assosciated class key
                std::vector<int> agent_IDs{agent_map_assosciation};
                new_global_map_entry = create_global_map_entry(new_global_map_entry, agent_IDs,&(map_list->at(idx).detected_feature_list.at(idy)));
                global_map->entries_map[feature_class].push_back(*new_global_map_entry );

            }
        }
        predictions_list_tracker.at(idx) = end_pos;
    }
}

/*
 *
 * None of the below modules have worked to efectively run this C++ application with Python scripts.
 * Python scripts are needed for the use of an ontology.
 *
 * As such, the architecture is being moved onto a python-based platform. See control-agent2 branch for more
 *
 */

/*
 *


static CowlOntology* load_import(cowl_unused void *ctx, cowl_unused CowlIRI *iri) {
    std::string ontology_path_   =  getexepath() + "Ontology/Ontological_SLAM.owl";
    char ontology_path[ontology_path_.length() + 1];
    strcpy(ontology_path, ontology_path_.c_str()); // TODO - fix the import error that requires me to define this twice
    CowlOntology *import = NULL;
    CowlManager *manager = cowl_manager_get();
    if (manager) {
        import = cowl_manager_read_path(manager, reinterpret_cast<const char *>(ontology_path));
        cowl_manager_release(manager);
    }

    return import;
}
  */
/*
 * At current, the only error handling in place is writing the error to a log file


static void handle_error(void *ctx, CowlError const *error) {
    std::string error_log_path_  =  getexepath() + "Ontology/error_log.txt";
    char error_log_path[error_log_path_.length() + 1];
    strcpy(error_log_path, error_log_path_.c_str());
    ofstream myfile;
    CowlString *string = cowl_error_to_string(error);
    myfile.open (error_log_path, std::ios_base::app);
    myfile << cowl_string_get_cstring(string);
    //uostream_write(ctx, cowl_string_get_cstring(string),cowl_string_get_length(string), NULL);
    cowl_string_release(string);
}

void load_ontology(global_map_struct* global_map){
    // --------------------------------------------------- define file paths
    std::string ontology_path_   =  getexepath() + "Ontology/Ontology_SLAM.owl";
    std::string error_log_path_  =  getexepath() + "Ontology/error_log.txt";
    char ontology_path[ontology_path_.length() + 1];
    strcpy(ontology_path, ontology_path_.c_str());
    char error_log_path[error_log_path_.length() + 1];
    strcpy(error_log_path, error_log_path_.c_str());
    ofstream myfile;

    // --------------------------------------------------- define file paths

    // initialise OWL api
    // API initialization can fail due to low memory.

    if (cowl_api_init()) {
        myfile.open (error_log_path, std::ios_base::app);
        myfile << EXIT_FAILURE;
    }

    // Setup a global error handler and import loader.
    cowl_api_set_import_loader(cowl_import_loader_init(NULL, load_import, NULL));

    UOStream stream;
    if (uostream_to_path(&stream, error_log_path)) {
        myfile.open (error_log_path, std::ios_base::app);
        myfile << EXIT_FAILURE;
    }

    cowl_api_set_error_handler(cowl_error_handler_init(&stream, handle_error, NULL));

    // Read the ontology from file.
    //CowlOntology *ontology = NULL;
    CowlManager *manager = cowl_manager_get();

    if (manager) {
        //ontology = cowl_manager_read_path(manager, ontology_path);
        global_map->ontology = cowl_manager_read_path(manager, ontology_path);
        cowl_manager_release(manager);
    }

    // Log the ontology.
    if (ontology) {
        CowlString *string = cowl_ontology_to_string(ontology);
        puts(cowl_string_get_cstring(string));
        cowl_string_release(string);
        cowl_ontology_release(ontology);
    }


}

void build_semantics(global_map_struct* global_map, std::map<int, std::string>* class_names_map){
    if (global_map->ontology) {
        int feature_class;
        std::string class_name;
        // conduct for all entries in global map
        for (auto const& x : global_map->entries_map){
            feature_class =  x.first; // string (key)
            // Class objects are stored under the same key on the map
            //std::string CLASS_NAME = class_names_map->find(feature_class)->second;
            class_name = class_names_map->find(feature_class)->second;
            //char CLASS_NAME[CLASS_NAME_.length() + 1];
            //strcpy(CLASS_NAME, CLASS_NAME_.c_str());
            // Query the ontology

            CowlClass *cls = cowl_class_from_cstring(class_name.c_str(), sizeof(class_name));

            // Run the query.
            CowlIterator iter = cowl_iterator_init(global_map->ontology, for_each_cls);
            cowl_ontology_iterate_sub_classes(global_map->ontology, cls, &iter);

            // Cleanup.
            cowl_class_release(cls);
            cowl_ontology_release(global_map->ontology);

        }

    }
}

static bool for_each_cls(void *ctx, void *cls){

    if (cowl_cls_exp_get_type(cls) != COWL_CET_CLASS) return true;

    // Log the IRI remainder.
    puts(cowl_string_get_cstring(cowl_iri_get_rem(cowl_class_get_iri(cls))));
    puts("\n");

    // Recurse.
    CowlIterator iter = cowl_iterator_init(ctx, for_each_cls);
    return cowl_ontology_iterate_sub_classes(ctx, cls, &iter);

}
*/
/*
 * currently not returning stuff
 */
/*
void boost_python_interface_test(){

    // Initialize Python.
    Py_Initialize();
    // Allow Python to load modules from the current directory.
    PyObject *sys = PyImport_ImportModule("sys");
    PyObject *path = PyObject_GetAttrString(sys, "path");
    PyList_Append(path, PyUnicode_FromString((getexepath() + "src/").c_str()));
    setenv("PYTHONPATH", ".", 1);
    namespace python = boost::python;
    try
    {
        // >>> import MyPythonClass
        python::object my_python_class_module = python::import("python_test");
        python::object test = my_python_class_module.attr("test")("test");
        std::string val = python::extract<std::string>(test["val"]);
        std::cout << val << std::endl;
    }
    catch (const python::error_already_set&)
    {
        PyErr_Print();
    }

    // Do not call Py_Finalize() with Boost.Python.

}
*/
/*
 * currently not returning stuff
 */
/*
void python_load_ontology(global_map_struct* global_map){
    // --------------------------------------------------- define file paths
    std::string ontology_path   =  getexepath() + "Ontology/Ontology_SLAM.owl";
    // --------------------------------------------------- define file paths
    // Initialize Python.
    Py_Initialize();
    // Allow Python to load modules from the current directory.
    PyObject *sys = PyImport_ImportModule("sys");
    PyObject *path = PyObject_GetAttrString(sys, "path");
    PyList_Append(path, PyUnicode_FromString((getexepath() + "src/").c_str()));
    setenv("PYTHONPATH", ".", 1);
    namespace python = boost::python;
    try
    {
        // >>> import MyPythonClass
        python::object my_python_class_module = python::import("ontology_API");
        python::object test = my_python_class_module.attr("load_ontology")(ontology_path);
        std::string val = python::extract<std::string>(test["val"]);
        std::cout << val << std::endl;
    }
    catch (const python::error_already_set&)
    {
        PyErr_Print();
    }

    // Do not call Py_Finalize() with Boost.Python.

}
*/
/*
void pybind_python_interface_test(){
    namespace py = pybind11;
    std::cout << "Starting pybind" << std::endl;
    py::scoped_interpreter guard{}; // start interpreter, dies when out of scope
    py::function test =
            py::reinterpret_borrow<py::function>(   // cast from 'object' to 'function - use `borrow` (copy) or `steal` (move)
                    py::module::import("python_test").attr("test")  // import method "min_rosen" from python "module"
            );

    py::object result = test("test");  // automatic conversion from `std::vector` to `numpy.array`, imported in `pybind11/stl.h`
    bool success = result.attr("success").cast<bool>();
    int num_iters = result.attr("nit").cast<int>();
    double obj_value = result.attr("fun").cast<double>();
}
*/

void python_interface_test(){
    Py_Initialize();
    PyObject *sys = PyImport_ImportModule("sys");
    PyObject *path = PyObject_GetAttrString(sys, "path");
    PyList_Append(path, PyUnicode_FromString((getexepath() + "src/").c_str()));
    PyObject *pName, *pModule, *pFunc, *pArgs, *pValue;

    pName =  PyUnicode_FromString((char*)"python_test");
    pModule = PyImport_Import(pName);
    Py_DECREF(pName);
    if (pModule != NULL) {
        pFunc = PyObject_GetAttrString(pModule, (char*)"test");

        if (pFunc && PyCallable_Check(pFunc)) {
            pArgs = PyTuple_Pack(1, PyUnicode_FromString((char*)"test"));
            pValue = PyObject_CallObject(pFunc, pArgs);
            Py_DECREF(pArgs);
            if (pValue != NULL) {
                auto result = _PyUnicode_AsString(pValue);
                printf(result);
                Py_DECREF(pValue);
            }
            else {
                Py_DECREF(pFunc);
                Py_DECREF(pModule);
                PyErr_Print();
                fprintf(stderr,"Call failed\n");
            }
        }
        else {
            if (PyErr_Occurred())
                PyErr_Print();
            fprintf(stderr, "Cannot find function test\n");
        }
        Py_XDECREF(pFunc);
        Py_DECREF(pModule);
    }
    else {
        PyErr_Print();
        fprintf(stderr, "Failed to load python test\n");
    }
    Py_FinalizeEx();
}

/*
void py_load_onto(global_map_struct* global_map){

    // --------------------------------------------------- define file paths
    std::string ontology_path_   =  getexepath() + "Ontology/Ontology_SLAM.owl";
    char ontology_path[ontology_path_.length() + 1];
    strcpy(ontology_path, ontology_path_.c_str());
    // --------------------------------------------------- define file paths
    //sys.path.append('/usr/local/lib/python3.10/dist-packages/owlready2')
    Py_Initialize();
    PyObject *sys = PyImport_ImportModule("sys");
    PyObject *path = PyObject_GetAttrString(sys, "path");
    PyList_Append(path, PyUnicode_FromString((getexepath() + "src/").c_str()));
    PyList_Append(path, PyUnicode_FromString("/usr/local/lib/python3.10"));
    PyList_Append(path, PyUnicode_FromString("/usr/local/lib/python3.10/dist-packages"));
    PyList_Append(path, PyUnicode_FromString("/usr/local/lib/python3.10/dist-packages/owlready2"));
    PyObject *sysPath = PySys_GetObject((char*)"path");
    PyList_Append(sysPath, PyUnicode_FromString("."));
    PyObject *pName, *pModule, *pFunc, *pArgs, *pValue;

    pName =  PyUnicode_FromString((char*)"ontology_API");
    try {
        pModule = PyImport_Import(pName);
    }
    catch (const char *msg) {
        // Runs if error is thrown
        cerr << msg << endl; //cerr is used to output errors similar to cout.
    }
    Py_DECREF(pName);
    if (pModule != NULL) {
        pFunc = PyObject_GetAttrString(pModule, (char*)"load_ontology");

        if (pFunc && PyCallable_Check(pFunc)) {
            pArgs = PyTuple_Pack(1, PyUnicode_FromString(ontology_path));
            pValue = PyObject_CallObject(pFunc, pArgs);
            Py_DECREF(pArgs);
            if (pValue != NULL) {
                //global_map->py_ontology = pValue;
                Py_DECREF(pValue);
            }
            else {
                Py_DECREF(pFunc);
                Py_DECREF(pModule);
                PyErr_Print();
                fprintf(stderr,"Call failed\n");
            }
        }
        else {
            if (PyErr_Occurred())
                PyErr_Print();
            fprintf(stderr, "Cannot find function test\n");
        }
        Py_XDECREF(pFunc);
        Py_DECREF(pModule);
    }
    else {
        PyErr_Print();
        fprintf(stderr, "Failed to load python test\n");
    }
    Py_FinalizeEx();
}
*/
/*
 *Process:
 * Local maps are amended
 * the local reference points for these maps are then extracted (both static and dynamic, reasoning about this comes later)
 * All of these reference points are then merged into a global map
 * Reference points are then reasoned about and semantic relationships are assigned
 */
[[noreturn]] void *global_map_main(void *arguments){
    //Check_TF();
    // ------------------------------------------------ unpack arguments
    global_map_struct* global_map = (( global_map_thargs_t*)arguments)->_global_map;
    std::vector<local_map>* map_list = (( global_map_thargs_t*)arguments)->_map_list;
    std::map<int,int>* agent_ID_map = (( global_map_thargs_t*)arguments)->_agent_ID_map; // Not needed - TODO prune
    std::vector<std::vector<int>>*  agent_start_location = (( global_map_thargs_t*)arguments)->agent_start_location;
    int agent_num = (( global_map_thargs_t*)arguments)->agen_num;
    std::map<int, std::string>* class_names_map = (( global_map_thargs_t*)arguments)->_class_names_map;

    // ------------------------------------------------ unpack arguments
    //make vectors to keep track of where the amendments in the local maps have been done up to
    std::vector<int> position_list_tracker(agent_num);
    std::vector<int> predictions_list_tracker(agent_num);
    std::vector<std::vector<detected_feature>> feature_list;
    //boost_python_interface_test();
    //python_load_ontology(global_map);
    //pybind_python_interface_test();
    python_interface_test();
    while(1){
        pthread_mutex_lock(&agent);
        ammend_map(agent_num, position_list_tracker, predictions_list_tracker, map_list, agent_start_location);// TODO - put this in its own thread?
        // TODO - copy map list over to a local version so the thread can be released
        merge_map(agent_num, predictions_list_tracker, map_list, agent_ID_map, global_map);
        pthread_mutex_unlock(&agent);
        //build_semantics(global_map, class_names_map);
        OSWait(3000); //do global map
    }


}
