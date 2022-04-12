#!/usr/bin/env python
# coding: utf-8

# In[5]:


#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the utopianTree function below.
def utopianTree(n):
    # height = 0 
    # for i in range(0, n+1):
    #     if i%2==0:
    #         height += 1
    #     else:
    #         height *= 2
    # return height
    
    # pangkat = n//2 + 1
    # tinggi = 2**pangkat - 1
    # if n%2 == 0:
    #     return tinggi
    # else:
    #     return tinggi*2

    return (2**(n//2+1)-1 if n%2==0 else (2**(n//2+1)-1)*2)


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input())

    for t_itr in range(t):
        n = int(input())

        result = utopianTree(n)

        fptr.write(str(result) + '\n')

    fptr.close()


# In[ ]:




