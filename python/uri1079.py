# -*- coding: utf-8 -*-

'''
URI 1079.py
Médias Ponderas
'''

n = int(input())

for i in range (n):
    valores = input().split(" ")
    n1 = float(valores[0])
    n2 = float(valores[1])
    n3 = float(valores[2])
    media = (2*n1 + 3*n2 + 5*n3) / 10.0
    print("%.1f" %media)