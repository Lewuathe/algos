# -*- coding: utf-8 -*-

import os
import sys

def swap(i, j, list):
    tmp = list[i]
    list[i] = list[j]
    list[j] = tmp

def bubble_sort(list):
    for index in xrange(len(list)-1, 0, -1):
        for row in range(0, index):
            if list[row] > list[row+1]:
                swap(row, row+1, list)
                
    return list
                

if __name__ == "__main__":
    from random import shuffle
    l = [1,2,3,4,5,6,7,8,9,10]
    shuffle(l)
    print l
    print bubble_sort(l)
