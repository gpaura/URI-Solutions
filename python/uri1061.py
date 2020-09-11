dia = input().split()
dia = int(dia[1])

tempo = input().split(":")
hour, minu, sec = list(map(int, tempo))

diaFinal = input().split()
diaFinal = int(diaFinal[1])

tempoF = input().split(":")
hourF, minF, secF = list(map(int, tempoF))

secResult = secF - sec
minResult = minF - minu
hourResult = hourF - hour
diaResult = diaFinal - dia

if secResult < 0:
    minResult = minResult - 1
    secResult = secResult + 60

if minResult < 0:
    hourResult = hourResult - 1
    minResult = minResult + 60

if hourResult < 0:
    diaResult = diaResult - 1
    hourResult = hourResult + 24

print(f"{diaResult} dia(s)")
print(f"{hourResult} hora(s)")
print(f"{minResult} minuto(s)")
print(f"{secResult} segundo(s)")      
