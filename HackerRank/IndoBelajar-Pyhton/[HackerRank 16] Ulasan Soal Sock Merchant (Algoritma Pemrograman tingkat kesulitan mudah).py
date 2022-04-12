#!/usr/bin/env python
# coding: utf-8

# In[8]:


#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the sockMerchant function below.
def sockMerchant(n, ar):
    # warna_unik = set(ar)
    # warna_jumlah = {warna:0 for warna in warna_unik}
    # for warna in ar:
    #     warna_jumlah[warna] += 1
    # jumlah_total = 0
    # for warna in warna_unik:
    #     jumlah_total += warna_jumlah[warna]//2
    # return jumlah_total

    # warna_unik = set(ar)
    # jumlah_total = 0
    # for warna in warna_unik:
    #     jumlah_total += len([kk for kk in ar if kk==warna])//2
    # return jumlah_total

    return sum([len([kk for kk in ar if kk==warna])//2 for warna in set(ar)])


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    ar = list(map(int, input().rstrip().split()))

    result = sockMerchant(n, ar)

    fptr.write(str(result) + '\n')

    fptr.close()


# In[ ]:




