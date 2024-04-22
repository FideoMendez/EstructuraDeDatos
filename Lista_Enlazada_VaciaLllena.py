class Nodo:
    def __init__(self, dato):
        self.dato = dato
        self.siguiente = None

class ListaEnlazada:
    def __init__(self):
        self.cabeza = None

    def esta_vacia(self):
        return self.cabeza is None
    
    def insertar_al_inicio(self, dato):
        nuevo_nodo = Nodo(dato)
        nuevo_nodo.siguiente = self.cabeza
        self.cabeza = nuevo_nodo

    def imprimir_lista(self):
        actual = self.cabeza
        while actual:
            print(actual.dato, end=" -> ")
            actual = actual.siguiente
        print("None")
        
    def Vacia(self):
        return self.cabeza is None
    
    def Llena(self):
        if not self.Vacia():
            return True
        else:
            return False
        

# Ejemplo de uso
lista = ListaEnlazada()
lista.insertar_al_inicio(3)
lista.insertar_al_inicio(7)
lista.insertar_al_inicio(11)
lista.imprimir_lista()

print("La lista esta vacia?", lista.Vacia())
print("La lista esta llena?", lista.Llena())
