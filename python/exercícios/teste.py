import time

inicio = time.time()
for i in range(1,1_000_000_001):
    pass
fim = time.time()
print(f"temo de execução:{fim - inicio}")