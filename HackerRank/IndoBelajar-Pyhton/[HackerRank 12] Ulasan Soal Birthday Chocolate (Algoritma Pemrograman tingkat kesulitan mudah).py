#!/usr/bin/env python
# coding: utf-8

# In[5]:


#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the birthday function below.
def birthday(s, d, m):
    # jumlah = 0
    # for i in range(0, len(s)):
    #     if i+m <= len(s):
    #         temp = sum([s[m] for m in range(i, i+m)])
    #         if temp==d:
    #             jumlah += 1
    # return jumlah

    jumlah = [1 if sum(s[i:i+m])==d else 0 for i in range(len(s)-m+1)]
    return sum(jumlah)


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    s = list(map(int, input().rstrip().split()))

    dm = input().rstrip().split()

    d = int(dm[0])

    m = int(dm[1])

    result = birthday(s, d, m)

    fptr.write(str(result) + '\n')

    fptr.close()


# In[ ]:




