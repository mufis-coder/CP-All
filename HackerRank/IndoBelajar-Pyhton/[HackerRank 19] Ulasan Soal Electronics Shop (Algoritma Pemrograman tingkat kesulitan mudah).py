#!/usr/bin/env python
# coding: utf-8

# In[8]:


#!/bin/python3

import os
import sys

#
# Complete the getMoneySpent function below.
#
def getMoneySpent(keyboards, drives, b):
    # harga = [k+d for k in keyboards for d in drives ]
    # harga_sorted = sorted(harga)
    # for x in harga_sorted[::-1]:
    #     if b-x>=0:
    #         return x
    # return -1

    harga = [k+d for k in keyboards for d in drives ]
    harga.append(-1)
    return max([x for x in harga if x<=b])

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    bnm = input().split()

    b = int(bnm[0])

    n = int(bnm[1])

    m = int(bnm[2])

    keyboards = list(map(int, input().rstrip().split()))

    drives = list(map(int, input().rstrip().split()))

    #
    # The maximum amount of money she can spend on a keyboard and USB drive, or -1 if she can't purchase both items
    #

    moneySpent = getMoneySpent(keyboards, drives, b)

    fptr.write(str(moneySpent) + '\n')

    fptr.close()


# In[ ]:




