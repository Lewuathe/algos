# -*- coding: utf-8 -*-

import os
import sys

def bin_convert(num, base=2):
    ans = ''
    (quot, remainder) = (num, 1)
    while quot >= base:
        remainder = quot % base
        quot      = quot / base
        ans += str(remainder)
    else:
        ans += str(quot)

    return ans[::-1]
        
        

if __name__ == "__main__":
    assert bin_convert(90) == "1011010"
