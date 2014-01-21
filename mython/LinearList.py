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

def find_middle(linearList):
    one_step = linearList
    two_step = linearList

    while two_step.next.next != None:
        one_step = one_step.next
        two_step = two_step.next.next

    return one_step

if __name__ == "__main__":
    l1 = LinearList(1)
    l2 = LinearList(2)
    l3 = LinearList("Takes")
    l4 = LinearList("Nobita")
    l5 = LinearList(5)
    l6 = LinearList(6)
    l7 = LinearList(7)
    l8 = LinearList(8)
    l1.append(l2).append(l3).append(l4).append(l5).append(l6).append(l7).append(l8)
    l1.debug()

    print("================")
    print find_middle(l1).val
