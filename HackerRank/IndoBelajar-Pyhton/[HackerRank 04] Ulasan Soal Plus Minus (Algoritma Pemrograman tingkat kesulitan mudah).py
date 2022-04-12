#!/usr/bin/env python
# coding: utf-8

# In[8]:


#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the plusMinus function below.
def plusMinus(arr):
    p = len([bil for bil in arr if bil>0])/len(arr)
    n = len([bil for bil in arr if bil<0])/len(arr)
    nol = len([bil for bil in arr if bil==0])/len(arr)

    print(p)
    print(n)
    print(nol)

if __name__ == '__main__':
    n = int(input())

    arr = list(map(int, input().rstrip().split()))

    plusMinus(arr)


# In[ ]:




