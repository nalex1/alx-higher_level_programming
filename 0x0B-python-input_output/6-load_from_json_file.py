#!/usr/bin/python3
"""a module to load a json object from a file"""


def load_from_json_file(filename):
    """a function tp load a json object from a specified file"""

    import json
    with open(filename, "r", encoding="utf-8") as f:
        obj = json.load(f)
        return obj
