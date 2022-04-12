#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the howManyGames function below.
def howManyGames(p, d, m, s):
    # Return the number of games you can buy
    # c = 0
    # k = s
    # s -= p
    # while (s-p) >= 0:
    #     if p>m:
    #         p -= d
    #     if p<=m:
    #         p = m
    #     # print (p)
    #     s -= p
    #     c += 1
    # return(c+1 if (k-p) >= 0 else 0)

    n_games = 0
    while s>=p:
        n_games += 1
        s -= p
        p = max(m, p-d)
    return n_games


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    pdms = input().split()

    p = int(pdms[0])

    d = int(pdms[1])

    m = int(pdms[2])

    s = int(pdms[3])

    answer = howManyGames(p, d, m, s)

    fptr.write(str(answer) + '\n')

    fptr.close()


