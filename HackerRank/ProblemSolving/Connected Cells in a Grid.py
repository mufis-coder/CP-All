#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'connectedCell' function below.
#
# The function is expected to return an INTEGER.
# The function accepts 2D_INTEGER_ARRAY matrix as parameter.
#

countRegMax = 0
countReg = 0
stepTrack = [[]]

def findReg(stepx, stepy, lenx, leny, matrix):
    global stepTrack, countReg
    if((stepx<0 or stepy<0 or stepx==lenx or stepy==leny) 
                    or (stepTrack[stepx][stepy]==1) or (matrix[stepx][stepy]==0)):
        return
    
    stepTrack[stepx][stepy] = 1
    countReg += 1
    # print(stepx, stepy)
    
    findReg(stepx+1, stepy, lenx, leny, matrix)
    findReg(stepx-1, stepy, lenx, leny, matrix)
    findReg(stepx, stepy+1, lenx, leny, matrix)
    findReg(stepx, stepy-1, lenx, leny, matrix)
    findReg(stepx-1, stepy-1, lenx, leny, matrix)
    findReg(stepx+1, stepy+1, lenx, leny, matrix)
    findReg(stepx-1, stepy+1, lenx, leny, matrix)
    findReg(stepx+1, stepy-1, lenx, leny, matrix)
    

def connectedCell(matrix):
    global stepTrack, countRegMax, countReg
    stepTrack = [[0 for _ in y] for y in matrix]
    for x in range(len(matrix)):
        for y in range(len(matrix[0])):
            if(stepTrack[x][y]==0 and matrix[x][y]==1):
                # print("start and finsh: ", x, y)
                findReg(x, y, len(matrix), len(matrix[0]), matrix)
                if(countReg>countRegMax):
                    countRegMax = countReg
            countReg = 0
    print(countRegMax)
    return countRegMax

if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    m = int(input().strip())

    matrix = []

    for _ in range(n):
        matrix.append(list(map(int, input().rstrip().split())))

    result = connectedCell(matrix)

    # fptr.write(str(result) + '\n')

    # fptr.close()
