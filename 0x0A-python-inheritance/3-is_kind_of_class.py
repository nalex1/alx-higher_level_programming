#!/usr/bin/python3
"""checks if an object is kind of an instance of an object"""


def is_kind_of_class(obj, a_class):
    """checks for instantivity of an object with a class"""

    if isinstance(obj, a_class):
        return True
    return False
