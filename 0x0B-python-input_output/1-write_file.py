#!/usr/bin/python3
"""a module that prints into a file"""


def write_file(filename="", text=""):
    """a function that writes content to the file"""

    with open(filename, "w", encoding="utf-8") as f:
        result = f.write(text)
        return result
