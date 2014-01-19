# -*- coding: utf-8 -*-

import os
import sys

def digit_to_value(c):
    if c >= '0' and c <= '9':
        return int(c)
    elif c >= 'A' and c <= 'F':
        return 10 + ord(c) - ord('A')
    elif c >= 'a' and c<= 'f':
        return 10 + ord(c) - ord('a')
    else:
        return -1

def comvert_to_base(number, base):
    if base < 2 or (base > 10 and base != 16):
        return -1
    value = 0
    for i in range(len(number)-1, -1, -1):
        digit = digit_to_value(number[i])
        if digit < 0 or digit >= base:
            return -1
        exp = len(number)-1-i
        value += pow(base, exp) * digit
    return value

if __name__ == "__main__":
    print comvert_to_base("1001", 2)
