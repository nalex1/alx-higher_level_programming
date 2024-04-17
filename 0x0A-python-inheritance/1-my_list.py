#!/usr/bin/python3
"""Defines an inherited list class called MyList"""


class MyList(list):
    """inherits list class"""

    def print_sorted(self):
        """prints a sorted list"""
        print(sorted(self))
