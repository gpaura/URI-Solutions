'''
URI 1072.py
Repetição, intervalo 2
'''

n = int(input())
contIn = 0
contOut = 0
while n > 10000 or n < 1:
    n = int(input())

for i in range (n):
    x = int(input())
    if x <= -10000000 or x >= 10000000:
        x = int(input())
    else:
        if x >= 10 and x <= 20:
            contIn += 1
        else:
            contOut += 1

print(f"{contIn} in")
print(f"{contOut} out")
