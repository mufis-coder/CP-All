#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the repeatedString function below.
def repeatedString(s, n):
    pos = [i for i, x in enumerate(s) if x=='a']
    re = len(pos)*(n//len(s))
    sisa = n%len(s)
    re += len([x for x in pos if x<sisa])
    return re

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    n = int(input())

    result = repeatedString(s, n)

    fptr.write(str(result) + '\n')

    fptr.close()
