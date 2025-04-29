#t = tinto, r = rosé, b = branco e finalize com "f", e mostre a porcentagem de cada tipo de vinho.
resp = input("Digite o tipo de vinho (t = tinto, r = rosé, b = branco) ou 'f' para finalizar:")
resp = resp.lower()
while resp != "t" and resp != "r" and resp != "b" and resp != "f":
    resp = input("Resposta inválida. Tente novamente:")
    resp = resp.lower()
    if resp == "t":
        t += 1
    elif resp == "r":
        r += 1
