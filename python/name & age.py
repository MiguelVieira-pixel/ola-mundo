nome = input("Qual é o seu nome? ")
idade = input("Qual é a sua idade? ")
resp = input("Deseja continuar? (s/n) ")
resp = resp.lower()
while resp != "s" and resp != "n":
    resp = input("Resposta inválida. Tente novamente:")
    resp = resp.lower()
if resp == "s":
    print("nome:{}\t/idade:{}".format(nome, idade))