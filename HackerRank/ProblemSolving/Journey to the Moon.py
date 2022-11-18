#!/bin/python3

import math
import os
import random
import re
import sys


def journeyToMoon(n, astronaut):
    clusters = [set([i]) for i in range(n)]
    for p in astronaut:
        all_related = clusters[p[0]].union(clusters[p[1]])
        for i in all_related:
            clusters[i] = all_related
    clusters = set([tuple(s) for s in clusters])
    
    s = 0
    s2 = 0
    for c in clusters:
        s += len(c)
        s2 += len(c)**2

    return (s**2-s2)//2

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    first_multiple_input = input().rstrip().split()

    n = int(first_multiple_input[0])

    p = int(first_multiple_input[1])

    astronaut = []

    for _ in range(p):
        astronaut.append(list(map(int, input().rstrip().split())))

    result = journeyToMoon(n, astronaut)

    fptr.write(str(result) + '\n')

    fptr.close()
