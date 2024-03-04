def potencia(base, exponente):
    if (exponente == 0):
        return 1
    else:
        return base * potencia(base, exponente - 1)
x = int(input("Ingrese la base: "))
y = int(input("Ingrese el exponente: "))
resultado = potencia(x, y)
print("El resultado es: ", resultado)
