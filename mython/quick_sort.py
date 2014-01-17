# -*- coding: utf-8 -*-

import os
import sys

def quick_sort(l):
    if len(l) < 1:
        return l

    pivot = l[0]
    left  = []
    right = []
    
    for i in xrange(1, len(l)):
        if l[i] < pivot:
            left.append(l[i])
        else:
            right.append(l[i])

    left  = quick_sort(left)
    right = quick_sort(right)

    return left + [pivot] + right

if __name__ == "__main__":
    from random import shuffle
    l = [1,2,3,4,5,6,7,8,9]
    shuffle(l)

    assert quick_sort(l) == [1,2,3,4,5,6,7,8,9]
