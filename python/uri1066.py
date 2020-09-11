'''
URI 1066.py
positive, negative, odd, even
'''
numberList = []
n = 0
while n < 5:
    number = int(input())
    numberList.append(int(number))
    n += 1

positive = 0
negative = 0
odd = 0
even = 0

for i in range (5):
    if numberList[i] > 0:
        positive += 1
    if numberList [i] < 0:
        negative += 1
    if numberList[i] % 2 != 0:
        odd += 1
    if numberList[i] % 2 == 0:
        even += 1

print(f"{even} valor(es) par(es)")
print(f"{odd} valor(es) impar(es)")
print(f"{positive} valor(es) positivo(s)")
print(f"{negative} valor(es) negativo(s)")
