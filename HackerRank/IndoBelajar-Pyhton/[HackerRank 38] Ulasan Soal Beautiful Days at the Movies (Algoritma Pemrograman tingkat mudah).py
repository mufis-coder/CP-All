#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the beautifulDays function below.
def beautifulDays(i, j, k):
    # c = 0
    # for x in range(i, j+1):
    #     re = 0
    #     no = str(x)
    #     for i in no[::-1]:
    #         re = re*10 + int(i)
    #     if abs(x-re)%k == 0:
    #         c += 1
    # return c

    return len([x for x in range(i, j+1) if abs(x-(int(str(x)[::-1])))%k == 0])

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    ijk = input().split()

    i = int(ijk[0])

    j = int(ijk[1])

    k = int(ijk[2])

    result = beautifulDays(i, j, k)

    fptr.write(str(result) + '\n')

    fptr.close()
