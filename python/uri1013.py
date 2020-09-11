import math
A, B, C = map(int, input().split(' '))

maiorab = (A + B + abs(A - B)) / 2

if (maiorab > C):
    print("{:.0f} eh maior". format(maiorab))
else:
    print("{} eh maior". format(C))

