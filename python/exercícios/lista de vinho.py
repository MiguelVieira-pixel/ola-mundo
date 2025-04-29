#t = tinto, r = rosé, b = branco e finalize com "f", e mostre a porcentagem de cada tipo de vinho.
t = 0
r = 0
b = 0
count = 0

def is_valid_response(resp):
    while resp != "t" and resp != "r" and resp != "b" and resp != "f":
        resp = input("Resposta inválida. Tente novamente:")
        resp = resp.lower()
    return resp in ["t", "r", "b", "f"]

resp = input("Digite o tipo de vinho (t = tinto, r = rosé, b = branco) ou 'f' para finalizar:")
resp = resp.lower()
is_valid_response(resp)
if resp == "f":
    print("Nenhum vinho foi cadastrado.")
    exit() 

while resp != "f":
    if resp == "t":
        t += 1
        count += 1
    elif resp == "r":
        r += 1
        count += 1
    elif resp == "b":
        b += 1
        count += 1
    resp = input("Digite o tipo de vinho (t = tinto, r = rosé, b = branco) ou 'f' para finalizar:")
    resp = resp.lower()
    is_valid_response(resp)

porcent_t = (t / count) * 100
porcent_r = (r / count) * 100
porcent_b = (b / count) * 100

if count >= 1:
    print(f"Porcentagem de vinhos tintos: {porcent_t:.2f}%")
    print(f"Porcentagem de vinhos rosés: {porcent_r:.2f}%")
    print(f"Porcentagem de vinhos brancos: {porcent_b:.2f}%")
