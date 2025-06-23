fib = 1
fibona = 0
fibonacchi =0
i = 0
for i in range(1,21):
    fibona = fibonacchi
    fibonacchi = fib + fibona 
    fib = fibona
    
    print(fibonacchi)