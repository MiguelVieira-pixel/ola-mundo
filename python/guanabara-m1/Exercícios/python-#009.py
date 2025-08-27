num = int(input('Digite um número para ver sua tabuada: '))
i = 0
resul = 0
print('-' * 12)
for i in range(1, 11, 1):
    resul = num * i
    print(f'{num} x {i:2} = {resul}')
print('-' * 12)