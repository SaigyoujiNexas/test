n = int(input())
a = n
b = 0
for i in range(n):
        for x in range(b):
                print(" ",end="")
        for y in range(a):
                print("*", end = "")
        print("")
        a -= 1
        b += 1
