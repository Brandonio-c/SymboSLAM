cmake_minimum_required(VERSION 3.21)
#compiler stuff! ---------------------------------------

set(DCMAKE_CXX_FLAGS=-stdlib=libc++)
set(DCMAKE_CXX_STANDARD 17)
set(CMAKE_C_COMPILER /usr/local/bin/gccsim)
set(CMAKE_CXX_COMPILER /usr/local/bin/g++sim)
set(CMAKE_CXX_STANDARD 17)
INCLUDE_DIRECTORIES (/usr/local/include -I /usr/X11/include)
LINK_DIRECTORIES    (/usr/local/lib /usr/X11/lib)
set (CMAKE_CXX_FLAGS "-Wall -leyesim -lX11 -std=c++17")

#compiler stuff! ---------------------------------------

project(Control_Agent)

IF(NOT CMAKE_BUILD_TYPE)
    SET(CMAKE_BUILD_TYPE Release)
    # SET(CMAKE_BUILD_TYPE Debug)
ENDIF()
MESSAGE("Build type: " ${CMAKE_BUILD_TYPE})



#OpenCV Stuff ---------------------------------------
SET (OpenCV_DIR /usr/local/include/opencv4)
find_package (OpenCV 4.0.0 REQUIRED)
if(NOT OpenCV_FOUND)
    message("OpenCV > 4.0.0 not found.")
    find_package(OpenCV 3.0 QUIET)
    if(NOT OpenCV_FOUND)
        message(FATAL_ERROR "OpenCV > 3.0 not found.")
    endif()
endif()
include_directories(${OpenCV_INCLUDE_DIRS})
#OpenCV Stuff ---------------------------------------

set(HEADER_FILES include/comms.h include/local_map.h include/read_file.h  include/agent_comms.h include/save_maps.h include/global_map.h include/show_map.h)
set(SOURCE_FILES src/main.cpp src/comms.cpp src/read_file.cpp src/agent_comms.cpp src/save_maps.cpp src/global_map.cpp src/show_map.cpp src/python_test.py)

find_package(Python COMPONENTS Interpreter Development)
#message("Python_FOUND:${Python_FOUND}")
#message("Python_VERSION:${Python_VERSION}")
#message("Python_Development_FOUND:${Python_Development_FOUND}")
#message("Python_LIBRARIES:${Python_LIBRARIES}")
find_package(PythonInterp 3.10 REQUIRED)
find_package(PythonLibs 3.10 REQUIRED)
#find_package( Boost 1.71 COMPONENTS program_options REQUIRED )
#find_package(Python3 REQUIRED Development)
#find_package(Boost REQUIRED python)

#find_package(Python 3.8 COMPONENTS Interpreter Development REQUIRED)
#find_package(Boost 1.71 COMPONENTS REQUIRED)

#if(Boost_FOUND)
#    message(STATUS "Boost_INCLUDE_DIRS: ${Boost_INCLUDE_DIRS}")
#    message(STATUS "Boost_LIBRARIES: ${Boost_LIBRARIES}")
#    message(STATUS "Boost_VERSION: ${Boost_VERSION}")
#    include_directories(${Boost_INCLUDE_DIRS})
#endif()
if(Python_FOUND)
    message(STATUS "Python Found: ${Python_EXECUTABLE}")
    message(STATUS "Python Found: ${Python_INCLUDE_DIRS}")
    message(STATUS "Python Found: ${Python_LIBRARIES}")
    message(STATUS "Python Found: ${Python_LIBRARY_DIRS}")
    include_directories(${Python_INCLUDE_DIRS})
endif()

#find_package(PythonLibs 3 REQUIRED)
#find_package(pybind11)
#add_subdirectory(pybind11)

include_directories(
        #control agent project directories
        ${PROJECT_SOURCE_DIR}/src
        ${PROJECT_SOURCE_DIR}/include
        #${PROJECT_SOURCE_DIR}/Third_Party/cowl/cmake-build/src
        #${PROJECT_SOURCE_DIR}/Third_Party/cowl/cmake-build/include

)

#link_directories(${PROJECT_SOURCE_DIR}/Third_Party/cowl)
#add_subdirectory(${PROJECT_SOURCE_DIR}/Third_Party/cowl)

#pybind11_add_module(Control_Agent.x ${SOURCE_FILES} ${HEADER_FILES} )
add_executable(Control_Agent.x ${SOURCE_FILES} ${HEADER_FILES} ) #Python3::Module Boost::python${PYTHON_LIBRARIES} ${Boost_LIBRARIES} -lpython3.8 ${PYTHON_LIBRARIES}
#link_libraries( Control_Agent.x )

#set_target_properties(Control_Agent.x PROPERTIES ENVIRONMENT "PYTHONPATH=$PYTHONPATH:${CMAKE_RUNTIME_OUTPUT_DIRECTORY}") #PUBLIC ${PYTHON_LIBRARIES} -lpython3.10 ${PYTHON_LIBRARIES} -lboost_python -lboost_system
target_link_libraries(Control_Agent.x PUBLIC ${OpenCV_LIBS} -pthread -lstdc++ -ldl -ltensorflow -lpython3.10) #${PROJECT_SOURCE_DIR}/Third_Party/cowl/cmake-build/libcowl.so ${Boost_LIBRARIES}
target_compile_features(Control_Agent.x  PRIVATE cxx_std_17)
set_property(TARGET Control_Agent.x  PROPERTY CXX_STANDARD 17)

