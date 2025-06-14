resp = "s"
while resp == "s":

    def entry():
        try:
            return int(input("Digite um número inteiro: "))
        except ValueError:
            print("Resposta inválida.")
            return entry()

    num = entry()
    raiz = 0
    raiz = float(num ** 0.5)
    prox = int(0)
    def verificador():
        cont = int(0)
        while cont < raiz:
            cont += 1
        return cont
    prox = verificador()

    if raiz + 0.5 < prox:
        prox -= 1

    print(f"o número mais próximo da raíz quadrada de", num," é ", prox)
    resp = input("Deseja fazer outra operação: [S/N]")
    resp = resp.lower()
    while resp != "s" and resp != "n":
        resp = input("Resposta inválida. Tente novamente:")
        resp = resp.lower()
print("Adios")