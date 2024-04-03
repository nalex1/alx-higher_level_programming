#!/usr/bin/python3

def safe_print_list(my_list=[], x=0):
    elements = 0

    for i in my_list:
        try:
            if elements >= x:
                break
            print(i, end="")
            elements += 1
        except Exception:
            break
    print()
    return elements
