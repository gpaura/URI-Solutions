'''
URI 1074.py
Par ou ímpar
'''

n = int(input())
while n < 1 or n >= 10000:
    n = int(input())

for i in range (n):
    x = int(input())
    while x <= -10000000 or x >= 10000000:
        x = int(input())
    if x == 0:
        print("NULL")
    if x < 0:
        if x % 2 == 0:
            print("EVEN NEGATIVE")
        else: 
            print("ODD NEGATIVE")
    if x > 0:
        if x % 2 == 0:
            print("EVEN POSITIVE")
        if x % 2 != 0:
            print("ODD POSITIVE")
