def factorial(num):
    if (num == 0):
        return 1
    else:
        return num * factorial(num - 1)   
        
numero = int(input("Ingrese un valor entero a sacar el factorial: "))
resultado = factorial(numero)
print("El factorial de ", numero, " es: ", resultado)
