# -*- coding: utf-8 -*-

import os
import sys

def get_bit(num, i):
    if num & (1 << i) != 0:
        return 1
    else:
        return 0

def set_bit(num, i):
    return num | (1 << i)

def clear_bit(num, i):
    mask = ~(1 << i)
    return num & mask

def update_bit(num, i, v):
    mask = ~(1 << i)
    return (num & mask) | (v << i)

if __name__ == "__main__":
    print format(10, 'b')
    print get_bit(10, 1)
    print format(set_bit(10, 2), 'b')
    print format(clear_bit(10, 1), 'b')
    print format(update_bit(10, 0, 1), 'b')
