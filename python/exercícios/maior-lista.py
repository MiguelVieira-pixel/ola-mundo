def lista_de_numero(numeros):
    maior_numero = 0
    maior_numero = numeros[0]
    for numero in numeros:
        if numero > maior_numero:
            maior_numero = numero
    return maior_numero

lista = [1, 2, 3, 9, 5]
maior = lista_de_numero(lista)
print(f"O maior número da lista é {maior}")