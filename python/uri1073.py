'''
URI 1073.py
Even numbers
'''

n = int(input())
while n <= 5 or n >= 2000:
    n = int(input())

for i in range (2, n + 1, 2):
    print(f"{i}^2 = {i*i}")
    