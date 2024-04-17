#!/usr/bin/python3
"""a module to use append in file I/O"""


def append_write(filename="", text=""):
    """a function that appends text to a file"""

    with open(filename, "a", encoding="utf-8") as f:
        result = f.write(text)
        return result
