#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the countApplesAndOranges function below.
def countApplesAndOranges(s, t, a, b, apples, oranges):
    # jml_apel, jml_jeruk = 0, 0
    # apl = [a+i for i in apples]
    # jrk = [b+i for i in oranges]
    # for d in apl:
    #     if s<=d<=t:
    #         jml_apel +=1
    # for d in jrk:
    #     if s<=d<=t:
    #         jml_jeruk +=1
    # print(jml_apel)
    # print(jml_jeruk)

    #solusi 2
    jml_apel = [1 if s<=a+d<=t else 0 for d in apples]
    jml_jeruk = [1 if s<=b+d<=t else 0 for d in oranges]
    print(sum(jml_apel))
    print(sum(jml_jeruk))

if __name__ == '__main__':
    st = input().split()

    s = int(st[0])

    t = int(st[1])

    ab = input().split()

    a = int(ab[0])

    b = int(ab[1])

    mn = input().split()

    m = int(mn[0])

    n = int(mn[1])

    apples = list(map(int, input().rstrip().split()))

    oranges = list(map(int, input().rstrip().split()))

    countApplesAndOranges(s, t, a, b, apples, oranges)
