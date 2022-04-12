def timeConversion(s):
    if s[8] == 'P':
        stemp = s[2:8]
        angka = int(s[0])*10 + int(s[1])
        if angka >= 12:
            angka = angka
        else:
            angka += 12
            if angka >= 24:
                angka -= 24
        s = str(angka) + stemp
    elif s[8] == 'A':
        stemp = s[2:8]
        angka = int(s[0])*10 + int(s[1])
        if angka >= 12:
            angka -= 12
        else:
            angka = angka
        s = str(angka) + stemp
    if (len(s)==7):
        s = str(0) + s
    return (s)

time = timeConversion('12:05:45AM')
print(time)