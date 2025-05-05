#H = 1/1 + 1/2 + 1/N
N = 0
H = 0.0

def entry():
    try:
        return int(input("Digite um número inteiro: "))
    except ValueError:
        print("Resposta inválida.")
        return entry()

N = entry()
for i in range(1,N + 1):
    H = H + i ** -1

print(f"o resultado é {H:.2f}")