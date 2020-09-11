'''
URI 1070.py
Repetição, odd numbers
'''

number = int(input())

if number % 2 == 0:
    for i in range (number + 1, number + 12, 2):
        print(i)
else:
    for i in range (number, number + 12, 2):
        print(i)