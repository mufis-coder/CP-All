def isIntersect(time1, time2):
    if(time1[0]<=time2[0] and time2[0]<=time1[1]):
        return True
    return False

def findMaxMeet(times):
    times.sort(key=lambda row: (row[0], row[1]), reverse=False)
    mapTimes = {}

    for i in range(len(times)):
        time1 = times[i]
        idMap = str(time1[0])+str(time1[1])
        for j in range(i+1, len(times)):
            time2 = times[j]
            if(isIntersect(time1, time2)):
                if(idMap in mapTimes):
                    mapTimes[idMap] += 1
                else: 
                    mapTimes[idMap] = 1
            else:
                break
            
    # print(mapTimes)
    print(len(times) - len(mapTimes))

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