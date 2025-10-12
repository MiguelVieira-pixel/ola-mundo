area = float()
tinta = float()

largura = float(input('Digite a largura da parede: '))
altura = float(input('Digite a altura da parede: '))

area = largura * altura
tinta = area / 2

print(f'A parede tem a dimensão de {largura}x{altura} e sua área é de {area:.2f}m²')
print(f'Para pintar essa parede, você precisará de {tinta:.2f}l de tinta.')