#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'gridlandMetro' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER n
#  2. INTEGER m
#  3. INTEGER k
#  4. 2D_INTEGER_ARRAY track
#

def gridlandMetro(n, m, k, track):
    # Write your code here
    allGround = n*m
    allTracks = {}
    for tr in track:
        r, c1, c2 = tr[0], tr[1], tr[2]
        if r not in allTracks:
            allTracks[r] = (c1, c2)
            allGround -= (allTracks[r][1] - allTracks[r][0] + 1)
        else:
            if(c1>=allTracks[r][0] and c1<=allTracks[r][1]):
                allGround += (allTracks[r][1] - allTracks[r][0] + 1)
                allTracks[r] = (min(c1, allTracks[r][0]), max(c2, allTracks[r][1]))
                allGround -= (allTracks[r][1] - allTracks[r][0] + 1)
            else:
                allGround -= (c2 - c1 + 1)
    print(allGround)
    return allGround

if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    first_multiple_input = input().rstrip().split()

    n = int(first_multiple_input[0])

    m = int(first_multiple_input[1])

    k = int(first_multiple_input[2])

    track = []

    for _ in range(k):
        track.append(list(map(int, input().rstrip().split())))

    result = gridlandMetro(n, m, k, track)

    # fptr.write(str(result) + '\n')

    # fptr.close()
