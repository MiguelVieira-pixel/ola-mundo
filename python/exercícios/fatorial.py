def entry():
    try:
        return int(input("Digite um número :"))
    except ValueError:
        print("Resposta inválida.")
        return entry()

num = 0

num = entry()
fat = 1

for i in range(num,1,-1):
    fat = fat * i

print("O resultado do fatorial é", fat, ".")