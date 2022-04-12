#!/usr/bin/env python
# coding: utf-8

# In[5]:


#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the divisibleSumPairs function below.
def divisibleSumPairs(n, k, ar):
    # jumlah = 0
    # for i in range(0, n):
    #     for j in range(0, n):
    #         if j!=i:
    #             if (ar[i] + ar[j])%k==0:
    #                 jumlah+=1
    # return jumlah//2

    # count = 0
    # for i, item1 in enumerate(ar[:-1]):
    #     for item2 in (ar[i+1:]):
    #         if (item2+item1)%k==0:
    #             count += 1
    # return count

    count = 0
    for i, item1 in enumerate(ar[:-1]):
        count += len([item2 for item2 in ar[i+1:] if (item1+item2)%k==0])
    return count


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    nk = input().split()

    n = int(nk[0])

    k = int(nk[1])

    ar = list(map(int, input().rstrip().split()))

    result = divisibleSumPairs(n, k, ar)

    fptr.write(str(result) + '\n')

    fptr.close()


# In[ ]:




