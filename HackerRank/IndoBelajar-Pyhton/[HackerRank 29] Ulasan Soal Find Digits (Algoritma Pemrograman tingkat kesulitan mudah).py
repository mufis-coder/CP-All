#!/usr/bin/env python
# coding: utf-8

# In[5]:


#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the findDigits function below.
def findDigits(n):
    # jmlh = 0
    # for x in str(n):
    #     x = int(x)
    #     if x == 0:
    #         continue
    #     if (n%x) == 0:
    #         jmlh += 1
    # return jmlh

    jmlh = [1 if (n%int(x))==0 else 0 for x in str(n) if int(x)!=0]
    return sum(jmlh)

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input())

    for t_itr in range(t):
        n = int(input())

        result = findDigits(n)

        fptr.write(str(result) + '\n')

    fptr.close()


# In[ ]:




