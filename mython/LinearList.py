# -*- coding: utf-8 -*-

import os
import sys

class LinearList:
    def __init__(self, val):
        self.val = val
        self.next = None

    def append(self, linearList):
        current = self
        while current.next != None:
            current = current.next
        current.next = linearList
        return self

    def debug(self):
        current = self
        while current != None:
            print current.val
            current = current.next

if __name__ == "__main__":
    l1 = LinearList(1)
    l2 = LinearList(2)
    l3 = LinearList("Takeshi")
    l1.append(l2).append(l3)
    l1.debug()
