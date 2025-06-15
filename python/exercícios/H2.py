resp = "s"
while resp == "s":

    def entry():
        try:
            return int(input("Digite um número inteiro: "))
        except ValueError:
            print("Resposta inválida.")
            return entry()
    N = entry()
    H = 0
    for i in range(1,N + 1):
        H = H + i**-1 

    print(f"O resultado é {H:.2f}")
    resp = input("Deseja fazer outra operação: [S/N]")
    resp = resp.lower()
    while resp != "s" and resp != "n":
        resp = input("Resposta inválida. Tente novamente:")
        resp = resp.lower()
print("Adios")