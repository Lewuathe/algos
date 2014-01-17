# -*- coding: utf-8 -*-

import os
import sys

def dfs(l, index):
    print l[index]
    if l[2*index] != 0:
        dfs(l, 2*index)
    if l[2*index+1] != 0:
        dfs(l, 2*index+1)

if __name__ == "__main__":
    # your code
    l = [0,1,2,3,4,5,6,7,0,0,0,0,0,0,0,0,0,0,0,0,0]
    dfs(l, 1)
    
