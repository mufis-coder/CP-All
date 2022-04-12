#!/usr/bin/env python
# coding: utf-8

# In[8]:


#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the migratoryBirds function below.
def migratoryBirds(arr):
    # index_most = 0
    # total = 0
    # for i in range(1,6):
    #     hitung = len([burung for burung in arr if burung==i])
    #     if total < hitung:
    #         total = hitung
    #         index_most = i
    # return index_most

    hitung = [0]*5
    for burung in arr:
        hitung[burung-1] +=1
    return hitung.index(max(hitung)) + 1

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    arr_count = int(input().strip())

    arr = list(map(int, input().rstrip().split()))

    result = migratoryBirds(arr)

    fptr.write(str(result) + '\n')

    fptr.close()


# In[ ]:




