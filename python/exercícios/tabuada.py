#tabuada de numero inteiro e -1 para voltar.
num = 0
result = 0

def entry():
    try:
        return int(input("Digite um número inteiro ou (-1) para sair: ")) 
    except ValueError:
        print("resposta inválida") 
        return entry()

num = entry()
while num != -1:
    for i in range(1,11):
        result = num * i
        print(f"{num} x {i} = {result}")
       
    num = entry()
print("thanks for your time!")