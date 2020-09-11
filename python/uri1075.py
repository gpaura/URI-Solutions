'''
URI 1075.py
Resto 2
'''

n = int(input())
while n >= 10000:
    n = int(input())

for i in range (1, 10001):
    if i % n == 2:
        print(i)
