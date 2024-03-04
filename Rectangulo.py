class Rectangulo:
    def __init__(self, base, altura):
        self.base = base
        self.altura = altura
    def Area(self):
        area = self.base * self.altura
        return area
    
base = float(input("Ingrese la base del rectangulo: "))
altura = float(input("Ingrese la altura del rectangulo: "))
rectangulo = Rectangulo(base, altura)
area = rectangulo.Area()
print("El area del rectangulo es: ", area)
  
