#!/usr/bin/python3
z = ord('z')
a = ord('a') - 1
flag = 1
for i in range(z, a, -1):
    if flag % 2 == 0:
        print("{}".format(chr(i).upper()), end="")
    else:
        print("{}".format(chr(i).lower()), end="")
    flag += 1
