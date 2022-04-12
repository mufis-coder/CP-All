#!/usr/bin/env python
# coding: utf-8

# In[4]:


print(up(0.5))#!/bin/python3

import os
import sys
import math

#
# Complete the pageCount function below.
#
def pageCount(n, p):
    #
    # Write your code here.
    #
    # return (p//2 if abs(p)<=abs(p-n) else abs(p//2-n//2))
    
    depan = p//2
    belakang = abs(p-n)//2 + (1 if p%2!=0 and abs(n-p)==1 else 0)
    return depan if depan<belakang else belakang

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    p = int(input())

    result = pageCount(n, p)

    fptr.write(str(result) + '\n')

    fptr.close()


# In[ ]:




