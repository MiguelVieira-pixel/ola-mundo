import time

print("cronometro")

for j in range(2,-1,-1):
    for i in range(60,0,-1):
        if j > 0:
            print(f"{j} minutes, {i} seconds")
        else:
            print(f"{i} seconds")
    time.sleep(1)    
