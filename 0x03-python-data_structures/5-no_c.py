#!/usr/bin/python3
def no_c(my_string):
    new = ""
    for i in range(len(my_string)):
        if my_string[i] in 'cC':
            continue
        new += my_string[i]
    return new
