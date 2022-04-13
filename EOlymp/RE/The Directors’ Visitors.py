def findMaxMeet(times):
    times.sort(key=lambda row: (row[1], row[0]), reverse=False)
    temp = times[0][1]
    count = 1
    for i in range(1, len(times)):
        if (times[i][0] >= temp):
            count += 1
            temp = times[i][1]
    print(count)


if __name__ == '__main__':

    tc = int(input())
    times = []
    while(tc):
        timeInp = input()
        timeSplt = timeInp.split(" ")
        temps = []
        for x in timeSplt:
            temp = x.split(":")
            timeInt = int(temp[0])*60 + int(temp[1])
            temps.append(timeInt)
        times.append(temps)
        tc -= 1
    findMaxMeet(times)