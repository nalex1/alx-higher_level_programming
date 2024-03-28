#!/usr/bin/python3
for first_digit in range(9):
    for second_digit in range(first_digit + 1, 10):
        if first_digit * 10 + second_digit < 89:
            print("{:d}{:d}".format(first_digit, second_digit), end=", ")
print("{:d}".format(89))
