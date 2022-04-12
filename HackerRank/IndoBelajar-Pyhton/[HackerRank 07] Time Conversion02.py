def timeConversion(s):
    jam = int(s[:2])
    if s[-2] == 'P' and jam!= 12 and jam>=1:
        jam += 12
    elif s[-2] == 'A' and jam==12:
        jam = 0
    return ('{j:02d}{md}'.format(j=jam,md=s[2:-2]))



time = timeConversion('12:05:45AM')
print(time)