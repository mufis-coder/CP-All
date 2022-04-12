#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'pickingNumbers' function below.
#
# The function is expected to return an INTEGER.
# The function accepts INTEGER_ARRAY a as parameter.
#

def pickingNumbers(a):
    # Write your code here
    unik = sorted(set(a))
    n_max = max([a.count(x) for x in unik])
    for x, y in zip(unik[:-1], unik[1:]):
        if (abs(x-y)) not in (1, 0):
            continue
        n = a.count(x) + a.count(y)
        n_max = max(n_max, n)
    return n_max

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    a = list(map(int, input().rstrip().split()))

    result = pickingNumbers(a)

    fptr.write(str(result) + '\n')

    fptr.close()
