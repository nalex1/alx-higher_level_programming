#!/usr/bin/python3
"""a module for an empty class BaseGeometry"""


class BaseGeometry:
    """represents a base geometry"""

    def area(self):
        """deals with geometry area"""
        raise Exception("area() is not implemented")

    def integer_validator(self, name, value):
        """validates an integer"""
        if type(value) != int:
            raise TypeError("{} must be an integer".format(name))
        if value < 1:
            raise ValueError("{} must be greater than 0".format(name))
