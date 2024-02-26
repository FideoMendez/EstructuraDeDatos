def fibonacci(terminos):
    if (terminos <= 1):
        return 1
    else:
        return fibonacci(terminos - 1) + fibonacci(terminos - 2)
n = int(input("Ingrese la cantidad de terminos de la serie fibonacci: "))
if (n <= 0):
    print("Ingrese un valor entero positivo.")
else:
    print("Serie fibonacci:")
    print("0")
    for i in range(n):
        print(fibonacci(i))
