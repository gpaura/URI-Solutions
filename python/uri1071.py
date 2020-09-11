'''
URI 1071.py
Repetição, soma de ímpares consecutivos I
'''

x = int(input())
y = int(input())

sum = 0
if x < y:
    for i in range (x + 1, y):
        if i % 2 != 0:
            sum += i
    print(sum)
else:
    for i in range (x - 1, y, -1):
        if i % 2 != 0:
            sum += i
    print(sum)