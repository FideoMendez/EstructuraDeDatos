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
    
    def insertar_al_final(self, dato):
        nuevo_nodo = Nodo(dato)
        if not self.cabeza:
            self.cabeza = nuevo_nodo
            return
        temp = self.cabeza
        while temp.siguiente:
            temp = temp.siguiente
        temp.siguiente = nuevo_nodo

# Ejemplo de uso
lista = ListaEnlazada()
lista.insertar_al_principio(3)
lista.insertar_al_principio(7)
lista.insertar_al_principio(11)
lista.insertar_al_final(9)
lista.imprimir_lista()
