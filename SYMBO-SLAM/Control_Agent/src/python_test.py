#!/usr/bin/env python3
# -*- coding: utf-8 -*-
''' Doc String

Description: test to see whether python interface is working with C++ code
Date Last Edited: 13 apr 2022
'''

# Imports Go Here!

try:
    from owlready2 import *
except ImportError:
    raise ImportError('Import test failed')


__author__ = "Brandon Colelough"
__copyright__ = "Open Source"
__credits__ = [""]
__license__ = "Open Source"
__version__ = "1.0.1"
__maintainer__ = "Brandon Colelough"
__email__ = "brandon.colelough1234@gmail.com"
__status__ = "Production"


def test(text):
    print(text)
    return 'Python interface functional!'


class MyClass:
    """Class Description"""
    pass  # do nothing


if __name__ == '__main__':  # code to execute if called from command-line
    pass  # do nothing
