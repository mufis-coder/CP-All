#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'getWays' function below.
#
# The function is expected to return a LONG_INTEGER.
# The function accepts following parameters:
#  1. INTEGER n
#  2. LONG_INTEGER_ARRAY c
#
    

def getWays(n, c):
    # Write your code here
    nCoins = len(c)
    tab = [[0 for x in range(nCoins)] for y in range(n+1)]
    for x in range(nCoins):
        tab[0][x] = 1
    
    for y in range(1, n+1):
        for x in range(nCoins):
            temp1 = tab[y-c[x]][x] if y-c[x] >= 0 else 0
            temp2 = tab[y][x-1] if x >= 1 else 0
            tab[y][x] = temp1 + temp2
            # print(tab[y][x])
            
    return tab[n][nCoins-1]
    
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    first_multiple_input = input().rstrip().split()

    n = int(first_multiple_input[0])

    m = int(first_multiple_input[1])

    c = list(map(int, input().rstrip().split()))

    # Print the number of ways of making change for 'n' units using coins having the values given by 'c'

    ways = getWays(n, c)

    fptr.write(str(ways) + '\n')

    fptr.close()
