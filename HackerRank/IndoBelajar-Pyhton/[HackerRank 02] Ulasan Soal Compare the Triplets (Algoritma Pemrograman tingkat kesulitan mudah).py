#!/usr/bin/env python
# coding: utf-8

# In[8]:


#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the compareTriplets function below.
def compareTriplets(a, b):
    first, second = 0, 0
    # for i in range(0,3):
    #     if a[i]>b[i]:
    #         first += 1
    #     elif a[i]<b[i]:
    #         second += 1
    # return [first, second]
    for x, y in zip(a, b):
        if x>y:
            first += 1
        elif x<y:
            second += 1
    return first, second

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    a = list(map(int, input().rstrip().split()))

    b = list(map(int, input().rstrip().split()))

    result = compareTriplets(a, b)

    fptr.write(' '.join(map(str, result)))
    fptr.write('\n')

    fptr.close()


# In[ ]:




