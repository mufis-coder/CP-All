#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'countLuck' function below.
#
# The function is expected to return a STRING.
# The function accepts following parameters:
#  1. STRING_ARRAY matrix
#  2. INTEGER k
#
stepTrack = []
xsteps = [1, -1, 0, 0]
ysteps = [0, 0, 1, -1]
res = ""

def findStartFinish(matrix):
    global stepTrack
    for i in range(len(matrix)):
        lines = []
        for j in range(len(matrix[i])):
            lines.append(0)
            if(matrix[i][j]=='M'):
                start = (i, j)
            if(matrix[i][j]=='*'):
                finish = (i, j)
        stepTrack.append(lines)
    return start, finish

def countLuck(x, y, finish, matrix, k, lenx, leny, countWand):
    global stepTrack, xsteps, ysteps, res
    if((x<0 or y<0 or x==lenx or y==leny) 
                    or (stepTrack[x][y]==1) or (matrix[x][y]=='X')):
        return
    if(x==finish[0] and y==finish[1]):
        # print("countwand: " + str(countWand) + " K: " + str(k))
        # for i in range(len(matrix)):
        #     print(matrix[i])
        if k==countWand:
            res = "Impressed"
        else:
            res = "Oops!"
        return
    
    stepTrack[x][y] = 1
    count = 0
    for i in range(0, 4):
        xnext = x + xsteps[i]
        ynext = y + ysteps[i]
        if((not(xnext<0 or ynext<0 or xnext>=lenx or ynext>=leny)) 
            and (not(stepTrack[xnext][ynext]==1)) 
            and (matrix[xnext][ynext] == '.' or matrix[xnext][ynext] == '*')):
            count += 1
    if count > 1:
        # temp = list(matrix[x])
        # temp[y] = '1'
        # matrix[x] = "".join(temp)
        countWand += 1
    countLuck(x+1, y, finish, matrix, k, lenx, leny, countWand)
    countLuck(x-1, y, finish, matrix, k, lenx, leny, countWand)
    countLuck(x, y+1, finish, matrix, k, lenx, leny, countWand)
    countLuck(x, y-1, finish, matrix, k, lenx, leny, countWand)
    
        
        
    
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input().strip())
    
    for t_itr in range(t):
        first_multiple_input = input().rstrip().split()

        n = int(first_multiple_input[0])

        m = int(first_multiple_input[1])

        matrix = []

        for _ in range(n):
            matrix_item = input()
            matrix.append(matrix_item)

        k = int(input().strip())
        start, finish = findStartFinish(matrix)

        countLuck(start[0], start[1], finish, matrix, k, 
                            len(matrix), len(matrix[0]), 0)
        stepTrack = []
        result = res
        print(res)
        fptr.write(result + '\n')

    fptr.close()
