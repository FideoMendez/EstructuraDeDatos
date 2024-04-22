class Nodo:
    def __init__(self, dato):
        self.dato = dato
        self.siguiente = None

class ListaEnlazada:
    def __init__(self):
        self.cabeza = None

    def insertar_al_principio(self, dato):
        nuevo_nodo = Nodo(dato)
        nuevo_nodo.siguiente = self.cabeza
        self.cabeza = nuevo_nodo

    def imprimir_lista(self):
        actual = self.cabeza
        while actual:
            print(actual.dato, end=" -> ")
            actual = actual.siguiente
        print("None")
        
    def insertar_en_medio(self, dato, posicion):
        nuevo_nodo = Nodo(dato)
        if posicion == 0:
            self.insertar_al_principio(dato)
            return
        actual = self.cabeza
        for _ in range(posicion - 1):
            if actual is None:
                raise IndexError("Posición fuera de rango")
            actual = actual.siguiente
        nuevo_nodo.siguiente = actual.siguiente
        actual.siguiente = nuevo_nodo

# Ejemplo de uso
lista = ListaEnlazada()
lista.insertar_al_principio(3)
lista.insertar_al_principio(7)
lista.insertar_al_principio(11)
lista.insertar_en_medio(10,2)
lista.imprimir_lista()
