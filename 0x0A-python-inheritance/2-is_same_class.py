#!/usr/bin/python3
"""checks if an object is an instance of a specific class"""


def is_same_class(obj, a_class):
    """checks the same tyep using isinstance"""
    if type(obj) == a_class:
        return True
    return False
