#!/usr/bin/python3
"""a module to save json object to file"""


def save_to_json_file(my_obj, filename):
    """a function that does the actual saving of the json text to a file"""

    import json
    with open(filename, "w", encoding="utf-8") as f:
        save = json.dumps(my_obj)
        f.write(save)
