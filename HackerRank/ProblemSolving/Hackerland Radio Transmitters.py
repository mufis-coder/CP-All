#!/bin/python3

from audioop import minmax
import math
import os
import random
import re
import sys

#
# Complete the 'hackerlandRadioTransmitters' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER_ARRAY x
#  2. INTEGER k
#

def hackerlandRadioTransmitters(x, k):
    # Write your code here
    x = sorted(set(x))
    count = 0
    length = len(x)
    i = 0
    while(i<length):
        temp = x[i]
        while(i<length and x[i]-temp<=k):
            i+=1
        place = x[i-1]
        while(i<length and x[i]-place<=k):
            i += 1
        count += 1
    print(x)
    print(count)
    return count

if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    first_multiple_input = input().rstrip().split()

    n = int(first_multiple_input[0])

    k = int(first_multiple_input[1])

    x = list(map(int, input().rstrip().split()))

    result = hackerlandRadioTransmitters(x, k)

    # fptr.write(str(result) + '\n')

    # fptr.close()
