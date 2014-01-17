# -*- coding: utf-8 -*-

import os
import sys

def bin_search(list, val):
    left = 0
    right = len(list)-1

    while (left <= right):
        mid = (left + right) / 2
        if list[mid] == val:
            print "Found: ", val, "at", mid
            return
        elif list[mid] < val:
            left = mid+1
        else:
            right = mid-1
    print "Not found:", val
            
            
    

if __name__ == "__main__":
    list = [1,2,3,4,5,6,6,7,8,9,10,11,12]
    bin_search(list, 12)
