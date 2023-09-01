def fatorial(x):
    ac = 1
    while x>1:
        ac *= x
        x -= 1
    return ac

N = int(input())
contador = 0

for i in reversed(range(9)):
    while N>=fatorial(i): 
        N -= fatorial(i)
        contador +=1
print(contador)

