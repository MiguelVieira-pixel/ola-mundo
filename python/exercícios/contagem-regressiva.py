
def contagem_regressiva(numero):
    for i in range(numero, -1, -1):
        print(i)

numero = int(input("Digite um número para iniciar a contagem regressiva: "))
contagem_regressiva(numero)