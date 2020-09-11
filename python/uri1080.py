# -*- coding: utf-8 -*-
maior = 0
aux = 0
for i in range (100): # Usar (10) para teste!!!
    number = int(input())
    aux = number
    if aux > maior:
        maior = aux
        x = i + 1
    

print(maior)
print(x)