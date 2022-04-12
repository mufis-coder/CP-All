#!/usr/bin/env python
# coding: utf-8

# In[4]:


#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the countingValleys function below.
def countingValleys(n, s):
    # jumlah_lembah, tinggi,flag = 0, 0, 0
    # for pos in s:
    #     if pos == 'U':
    #         tinggi += 1
    #     elif pos == 'D':
    #         tinggi -= 1
    #     if tinggi<0 and flag == 0:
    #         jumlah_lembah +=1
    #     if tinggi<0 and flag==0:
    #         flag = 1
    #     elif tinggi>=0 and flag==1:
    #         flag = 0
    # return jumlah_lembah

    # tinggi_sea, lembah = 0, 0
    # data = {'D':-1, 'U':1}
    # for x in s:
    #     if tinggi_sea>0:
    #         tinggi_sea += data[x]
    #         continue
    #     tinggi_sea += data[x]
    #     if tinggi_sea == 0:
    #         lembah+=1
    # return lembah

    tinggi_sea, lembah = 0, 0
    data = {'D':-1, 'U':1}
    for x in s:
        tinggi_sea += data[x]
        lembah += 1 if data[x] == 1 and tinggi_sea==0 else 0
    return lembah



if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    s = input()

    result = countingValleys(n, s)

    fptr.write(str(result) + '\n')

    fptr.close()


# In[ ]:




