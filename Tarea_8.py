class Complex:
    def __init__(self, realpart, imagpart):
        self.r = realpart
        self.i = imagpart
        
re = float(input("Ingrese la parte real: "))
im = float(input("Ingrese la parte imaginaria: "))
#Crea el objeto x de la clase Complex - instancia en python
x = Complex(re, im)
print(x.r, x.i)
