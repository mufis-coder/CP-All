#!/usr/bin/env python
# coding: utf-8

# In[5]:


#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the breakingRecords function below.
def breakingRecords(scores):
    # minic, maxic = 0, 0
    # mini, maxi = scores[0], scores[0]
    # for i in scores[1:]:
    #     if maxi<i:
    #         maxi=i
    #         maxic+=1
    #     if mini>i:
    #         mini=i
    #         minic+=1
    # return maxic, minic

    minic, maxic = 0, 0
    mini, maxi = scores[0], scores[0]
    for i in scores[1:]:
        mini, minic = (i, minic+1) if mini>i else (mini, minic)
        maxi, maxic = (i, maxic+1) if maxi<i else (maxi, maxic)
    return maxic, minic

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    scores = list(map(int, input().rstrip().split()))

    result = breakingRecords(scores)

    fptr.write(' '.join(map(str, result)))
    fptr.write('\n')

    fptr.close()


# In[ ]:




