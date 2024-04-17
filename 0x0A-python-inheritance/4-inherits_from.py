#!/usr/bin/python3
"""checks if an object is aninstance of an inherited class"""


def inherits_from(obj, a_class):
    """uses a subclass method"""
    if issubclass(type(obj), a_class) and type(obj) != a_class:
        return True
    return False
