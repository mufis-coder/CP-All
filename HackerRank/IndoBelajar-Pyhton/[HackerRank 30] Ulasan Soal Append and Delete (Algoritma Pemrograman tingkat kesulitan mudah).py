#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the appendAndDelete function below.
def appendAndDelete(s, t, k):
    stop = 0
    for x, y in zip(s, t):
        if x!=y:
            break
        stop += 1
    hapus = len(s) - stop
    tambah = len(t) - (len(s)-hapus)
    if tambah==0 and hapus<=k:
        return 'Yes'
    elif hapus==0 and (k-tambah)%2!=0:
        return 'No'
    operasi = tambah + hapus
    return 'Yes' if operasi<=k else 'No'


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    t = input()

    k = int(input())

    result = appendAndDelete(s, t, k)

    fptr.write(result + '\n')

    fptr.close()
