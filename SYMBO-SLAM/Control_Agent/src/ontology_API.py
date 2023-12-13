#!/usr/bin/env python3
# -*- coding: utf-8 -*-
''' Doc String
Description: handles queries to and from ontology
Date Last Edited: 13 apr 2022
'''

import sys
sys.path.append('/usr/lib/python3/dist-packages')
sys.path.append('/usr/local/lib/python3.8')
sys.path.append('/usr/local/lib/python3.8/dist-packages')
sys.path.append('/usr/local/lib/python3.8/dist-packages/owlready2')


# Imports Go Here!
import matplotlib.pyplot as plt
from owlready2 import *

__author__ = "Brandon Colelough"
__copyright__ = "Open Source"
__credits__ = [""]
__license__ = "Open Source"
__version__ = "1.0.1"
__maintainer__ = "Brandon Colelough"
__email__ = "brandon.colelough1234@gmail.com"
__status__ = "Production"


def load_ontology(ontology_path):
    return "dope"
    onto_path.append(ontology_path)
    onto = get_ontology(ontology_path)
    onto.load()
    return onto


class MyClass:
    """Class Description"""
    pass  # do nothing


if __name__ == '__main__':  # code to execute if called from command-line
    load_ontology("Ontology/Ontology_SLAM.owl")
    print("working!")
