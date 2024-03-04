def division_recursiva(dividendo, divisor):
    if dividendo < divisor:
        return 0
    elif dividendo == divisor:
        return 1
    else:
        return 1 + division_recursiva(dividendo - divisor, divisor)

divisor = int(input("Introduce el divisor "))
dividendo = int(input("Introduce el dividendo "))
resultado = division_recursiva(dividendo, divisor)
print("El resultado es", resultado)
