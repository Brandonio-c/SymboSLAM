#!/usr/bin/env python3
# -*- coding: utf-8 -*-
''' Doc String

Description: reads files required for this architecture

oracle file - stores the ground tryth for features adn their locations in the environment
agent loc - starting position of each edge agent
class names - class names used by YOLO in training (i.e the feature names that will be picked up by YOLO)

Date Last Edited: 15 June 2022
'''
__author__ = "Brandon Colelough"
__copyright__ = "Open Source"
__credits__ = [""]
__license__ = "Open Source"
__version__ = "1.0.1"
__maintainer__ = "Brandon Colelough"
__email__ = "brandon.colelough1234@gmail.com"
__status__ = "Production"

# Imports Go Here!
import map_structs

def read_oraclefile(file_name):
    landmark_map = {}
    with open(file_name) as f:
        lines = f.readlines()
    for line in lines:
        str_split = line.split(' ')
        loc = map_structs.position(float(str_split [2]), float(str_split [3]), float(str_split [4]))
        if(int(str_split [0]) in landmark_map.keys()):
            #this landmark type is already withint he oracle dictionary - add the location of this specific landmark to the land mark list
            landmark_map.get(int(str_split [0])).append(loc)
        else:
            landmark_map[int(str_split [0])] = [loc]
    return landmark_map

def read_agent_loc(file_name):
    agen_loc_map = {}
    with open(file_name) as f:
        lines = f.readlines()
    x = 0
    for line in lines:
        str_split = line.split(',')
        loc = [map_structs.position(float(str_split [0]), float(str_split [1]), float(str_split [2]))]
        agen_loc_map[x] = loc
        x+=1
    return agen_loc_map

def read_class_names(file_name):
    class_names = {}
    with open(file_name) as f:
        lines = f.readlines()
    x = 0
    for line in lines:
        class_names[x] = line.replace("\n", '')
        x+=1
    return class_names

class read_file:
    """Class Description"""
    def __init__(self, data):
         self.data = data

