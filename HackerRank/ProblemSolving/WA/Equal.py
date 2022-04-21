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
    mini = min(arr)
    arr = [x-mini if x not in [1, 2, 5] or x == mini else x for x in arr]
    print(arr)
    
    count=0
    while(1):
        # print(arr)
        if(max(arr)>=5):
            for x in range(len(arr)):
                if arr[x] >= 5:
                    arr[x] -= 5
                    break
        elif(max(arr)>=2):
            for x in range(len(arr)):
                if arr[x] >= 2:
                    arr[x] -= 2
                    break
        elif(max(arr)>=1):
            for x in range(len(arr)):
                if arr[x] >= 1:
                    arr[x] -= 1
                    break
        count += 1
        # if(count>5):
        #     break
        if(len(set(arr))==1):
            break
    print(count)
    return count
        

if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input().strip())

    for t_itr in range(t):
        n = int(input().strip())

        arr = list(map(int, input().rstrip().split()))

        result = equal(arr)

    #     fptr.write(str(result) + '\n')

    # fptr.close()
