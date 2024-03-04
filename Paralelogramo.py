class Paralelogramo:
    def __init__(self, base, altura):
        self.base=base
        self.altura=altura
    def area(self):
        return self.base * self.altura
    def perimetro(self):
        return 2*(self.base + self.altura)
p = Paralelogramo(5,3)
print("Area:", p.area())
print("Perimetro:", p.perimetro())
