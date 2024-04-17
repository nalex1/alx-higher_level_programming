#!/usr/bin/python3
"""a module for loading a json string to any object"""


def from_json_string(my_str):
    """a dunction to load a json string"""

    import json
    result = json.loads(my_str)
    return result
