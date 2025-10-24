import time, random

# print('Aguarde')
# time.sleep(4)
# print('pronto')

while True:
    numeroAleatorio = random.randint(1,50)
    print(numeroAleatorio)
    time.sleep(1)
    if numeroAleatorio % 2 == 0:
        break