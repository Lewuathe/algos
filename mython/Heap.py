# -*- coding: utf-8 -*-

import os
import sys

def swap(i, j, list):
    tmp = list[i]
    list[i] = list[j]
    list[j] = tmp

class Heap:
    def __init__(self, size):
        self.heap_list = [0 for i in range(0, size)]
        self.counter   = 0

    def add(self, val):
        i = self.counter + 1
        self.counter += 1
        while (i != 1) and (self.heap_list[i/2] < val):
            self.heap_list[i] = self.heap_list[i/2]
            i = i/2
        self.heap_list[i] = val
        

    def max(self):
        max = self.heap_list[1]
        self.heap_list[1] = self.heap_list[self.counter]
        i = 1
        while (self.heap_list[i] < self.heap_list[2*i]) or (self.heap_list[i] < self.heap_list[2*i+1]):
            if self.heap_list[2*i] > self.heap_list[2*i+1]:
                swap(2*i, i, self.heap_list)
                i = 2*i
            else:
                swap(2*i+1, i, self.heap_list)
                i = 2*i+1
        self.counter -= 1
        return max
            
    def debug(self):
        print "HEAP LIST: ", self.heap_list
        print "COUNTER: ", self.counter


if __name__ == "__main__":
    h = Heap(50)
    h.add(10)
    h.add(1)
    h.add(2)
    h.add(3)
    h.add(4)
    h.add(20)
    h.debug()
    h.max()
    h.debug()
    h.max()
    h.debug()
    
    
