#!/usr/bin/env python
# coding: utf-8

# In[8]:


#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the bonAppetit function below.
def bonAppetit(bill, k, b):
    # total = 0
    # for i in range(len(bill)):
    #     if i != k:
    #         total += bill[i]
    # total = int(total/2)
    # if total<b:
    #     print(b-total)
    # elif total>=b:
    #     print('Bon Appetit')
    total = (sum(bill) - bill[k])//2
    print('Bon Appetit' if total==b else abs(total-b))

if __name__ == '__main__':
    nk = input().rstrip().split()

    n = int(nk[0])

    k = int(nk[1])

    bill = list(map(int, input().rstrip().split()))

    b = int(input().strip())

    bonAppetit(bill, k, b)


# In[ ]:




