def entry():
    try:
        return int(input("Digite um número inteiro: "))
    except ValueError:
        print("Resposta inválida.")
        return entry()
num = entry()

fat = 1
i = 0
for i in range(num, 1, -1):
    fat = fat * i

print("O resultado do fatorial é", fat, ".")
