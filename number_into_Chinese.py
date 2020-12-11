num = int(input())
part1 = str(int(num / 100000000))
part2 = str(int(num % 100000000 /10000))
part3 = str(int(num % 10000))
old = [3]
old= [part1, part2, part3]
def change(old):
    old = str(old)
    if (len(old) == 4):
        changed = str(chr(ord(old[0])+49)+'Q')
        if (old[1] == '0' and old[2] == '0' and old[3] == '0'):
            pass
        elif(old[1] == '0' and old[2] == '0' and old[3] != '0'):
            changed = str(changed + 'a' + chr(ord(old[3]) + 49))
        elif(old[1] == '0' and old[3] == '0'):
            changed = str(changed + 'a' + chr(ord(old[2]) + 49) + 'S')
        elif(old[1] != '0' and old[2] == '0' and old[3] == '0'):
            changed = str(changed + chr(ord(old[1]) + 49) + 'B')
        elif(old[1] == '0' and old[2] != '0' and old[3] != '0'):
            changed = str(changed + 'a' + chr(ord(old[2]) + 49) +'S' +chr(ord(old[3]) + 49))
        elif(old[1] != '0' and old[2] == '0' and old[3] != '0'):
            changed = str(changed + chr(ord(old[1]) + 49) + 'B' + 'a' + chr(ord(old[3]) + 49))
        elif(old[1] != '0' and old[2] != '0' and old[3] == '0'):
            changed = str(changed + chr(ord(old[1]) + 49) + 'B' + chr(ord(old[2]) + 49) + 'S')
        else:
            changed = str(changed + chr(ord(old[1]) + 49) + 'B' + chr(ord(old[2]) + 49) + 'S' + chr(ord(old[3]) + 49))
    if (len(old) == 3):
        changed = str(chr(ord(old[0]) + 49) + 'B')
        if (old[1] == '0' and old[2] == '0'):
            pass
        elif(old[1] == '0' and old[2] != '0'):
            changed = str(changed + 'a' +chr(ord(old[2]) + 49))
        elif(old[1] != '0' and old[2] == '0'):
            changed = str(changed + chr(ord(old[1]) + 49) + 'S')
        else:
            changed = str(changed + chr(ord(old[1]) + 49) + 'S' + chr(ord(old[2]) + 49))
    if (len(old) == 2):
        changed = str(chr(ord(old[0]) + 49))
        if (old[1] != '0'):
            changed = str(changed + 'S' + chr(ord(old[1]) + 49))
        else:
            if (old[0] == '1'):
                changed = str('S')
            else:
                changed = str(chr(ord(old[0]) + 49) + 'S')
    if (len(old) == 1):
        changed = str(chr(ord(old[0]) + 49))
    return changed

for i in range(3):
    old[i] = change(old[i])
for i in range(1,3,1):
    if(('Q' not in old[i]) and old[i] != 'a' and old[i - 1] != 'a'):
        old[i] = ('a' + old[i])
if (old[0] == 'a'):
    if(old[1] == 'a'):
        new = str(old[2])
    else:
        if(old[2] == 'a'):
            new = str(old[1] + 'W')
        else:
            new = str(old[1] + 'W' + old[2])
else:
    if(old[1] == 'a'):
        if(old[2] == 'a'):
            new = str(old[0] + 'Y')
        else:
            if('Q' not in old[2]):
                new = str(old[0] + 'Y' + old[2])
            else:
                new = str(old[0] + 'Y' + 'a' + old[2])

    else:
        if(old[2] == 'a'):
            new = str(old[0] + 'Y' + old[1] + 'W')
        else:
            new = str(old[0] + 'Y' + old[1] + 'W' + old[2])
print(new)
