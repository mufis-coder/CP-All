def funcMath(n):
    return int((n*(n+1))/2)

def solveSDA(arr):
    selArr = [arr[i]-i for i in range(0, len(arr))]
    selArr = sorted(selArr)
    
    numSame = {}
    for x in selArr:
        if x not in numSame:
            numSame[x] = 1
        else:
            numSame[x] += 1
    
    count = 0
    for key in numSame:
        if numSame[key]>1:
            count += funcMath(numSame[key]-1)
    # print(selArr)
    # print(numSame)
    return count

if __name__ == "__main__":
    t = int(input())
    while(t):
        n = int(input())
        arr = input()
        arr = arr.split(" ")
        arr = [int(x) for x in arr]
        t -= 1
        print(solveSDA(arr))