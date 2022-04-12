#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the jumpingOnClouds function below.
def jumpingOnClouds(c, k):
    # e = 100
    # i, flag = 0, 0
    # n = len(c)
    # while ((flag==0) or (i!=0)):
    #     flag = 1
    #     if c[(i+k)%n] == 1:
    #         e -= 3
    #     else:
    #         e -= 1
    #     i = (i+k)%n
    # return e

    c = c*k if len(c)%k != 0 else c
    c = c[::k]
    return 100 - len(c) - 2*sum(c)
    


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    nk = input().split()

    n = int(nk[0])

    k = int(nk[1])

    c = list(map(int, input().rstrip().split()))

    result = jumpingOnClouds(c, k)

    fptr.write(str(result) + '\n')

    fptr.close()
