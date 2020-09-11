'''
URI 1078.py
Tabuada
'''

n = int(input())
while n >= 1000 or n <= 2:
    n = int(input())

for i in range (1, 11):
    print(f"{i} x {n} = {i * n}")