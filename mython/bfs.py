# -*- coding: utf-8 -*-

import os
import sys

def bfs(l, index):
    queue = []
    queue.append(index)
    while queue:
        i = queue.pop(0)
        print l[i]
        l[i] = 0
        if l[2*i] != 0:
            queue.append(2*i)
        if l[2*i+1] != 0:
            queue.append(2*i+1)

if __name__ == "__main__":
    # your code
    l = [0, 1,2,3,4,5,6,7,0,0,0,0,0,0,0,0,0,0,0,0]
    bfs(l, 1)
