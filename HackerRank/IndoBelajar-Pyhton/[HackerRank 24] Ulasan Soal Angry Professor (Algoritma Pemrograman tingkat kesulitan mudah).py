#!/usr/bin/env python
# coding: utf-8

# In[5]:


#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the angryProfessor function below.
def angryProfessor(k, a):
    # jmlh = 0
    # for i in range(0, len(a)):
    #     if a[i]<= 0:
    #         jmlh += 1
    # return ('YES' if jmlh<k else 'NO')

    batal = k > len([x for x in a if x<= 0])
    return 'YES' if batal else 'NO'


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input())

    for t_itr in range(t):
        nk = input().split()

        n = int(nk[0])

        k = int(nk[1])

        a = list(map(int, input().rstrip().split()))

        result = angryProfessor(k, a)

        fptr.write(result + '\n')

    fptr.close()


# In[ ]:




