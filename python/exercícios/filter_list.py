vendas = range(1000, 5000)

# print(list(vendas))

def filtra(venda):
    if venda > 4000:
        return True
    else
        return False

bateram_meta = filter(filtra, vendas)
print(list(bateram_meta))