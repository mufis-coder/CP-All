#!/usr/bin/env python
# coding: utf-8

# In[5]:


#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the viralAdvertising function below.
def viralAdvertising(n):
    # jumlah = 0
    # temp = 5
    # for i in range(1, n+1):
    #     jumlah += temp//2
    #     temp = temp//2*3
    # return jumlah

    jumlah = [2]
    for _ in range(n-1):
        jumlah.append(jumlah[-1]*3//2)
    return sum(jumlah)
        


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    result = viralAdvertising(n)

    fptr.write(str(result) + '\n')

    fptr.close()


# In[ ]:




