'''
URI 1067.py
Odd numbers 
'''

number = int(input())
while number < 1 or number > 1000:
    number = int(input())

for i in range (number + 1):   # Deve-se somar 1 ao number para imprimir o valor
    if i % 2 != 0:             # digitado, caso ele também seja ímpar.
        print(i)

