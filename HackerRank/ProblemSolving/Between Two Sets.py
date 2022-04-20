#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'getTotalX' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER_ARRAY a
#  2. INTEGER_ARRAY b
#

def getTotalX(a, b):
    # Write your code here
    nFac = max(a)
    nFacUp = nFac
    mFac = min(b)
    
    count = 0
    while(1):
        flag = 1
        for x in a:
            if(nFac%x!=0):
                flag = 0
                break
        flag2 = 1
        if(flag==1):
            for x in b:
                if(x%nFac!=0):
                    flag2=0
                    break
            if(flag2==1):
                count += 1
        
        nFac += nFacUp
        if(nFac>mFac):
            break
        
    return count

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    first_multiple_input = input().rstrip().split()

    n = int(first_multiple_input[0])

    m = int(first_multiple_input[1])

    arr = list(map(int, input().rstrip().split()))

    brr = list(map(int, input().rstrip().split()))

    total = getTotalX(arr, brr)

    fptr.write(str(total) + '\n')

    fptr.close()
