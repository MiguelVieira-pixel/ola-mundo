resp = "s"
while resp == "s":
    cont = 0
    def entry():
        try:
            return int(input("Digite um número inteiro: "))
        except ValueError:
            print("Resposta inválida.")
            return entry()
    num = entry()
    i = 0
    metade = int(num / 2)
    for i in range(1,metade):
        if num % i == 0:
            cont += 1

    if num == 0:
        print("0 não é um número primo.")
    elif cont > 1:
        print(f"O número", num, "não é um numero primo.")
    else:
        print(f"O número", num, "é um numero primo.")
        
    resp = input("Deseja fazer outra operação: [S/N]")
    resp = resp.lower()
    while resp != "s" and resp != "n":
        resp = input("Resposta inválida. Tente novamente:")
        resp = resp.lower()
print("Adios")