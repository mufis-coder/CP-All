#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the equalizeArray function below.
def equalizeArray(arr):
    # maxim = max(set(arr), key=arr.count)
    # return len([x for x in arr if x!=maxim])

    bil_unik = set(arr)
    list_new = [arr.count(x) for x in bil_unik]
    return len(arr) - max(list_new)

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    arr = list(map(int, input().rstrip().split()))

    result = equalizeArray(arr)

    fptr.write(str(result) + '\n')

    fptr.close()
