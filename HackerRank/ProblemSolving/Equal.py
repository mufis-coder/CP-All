#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'equal' function below.
#
# The function is expected to return an INTEGER.
# The function accepts INTEGER_ARRAY arr as parameter.
#

def equal(arr):
    # Write your code here
    sumAll = 9223372036854775807
    mini = min(arr)
    
    for base in range(0, 3):
        sumOperation = 0
        for x in arr:
            delta = x - mini + base
            sumOperation += int(delta/5) + int(delta%5/2) + int(delta%5%2/1)
        sumAll = min(sumAll, sumOperation)
    return sumAll
            
        

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input().strip())

    for t_itr in range(t):
        n = int(input().strip())

        arr = list(map(int, input().rstrip().split()))

        result = equal(arr)

        fptr.write(str(result) + '\n')

    fptr.close()
