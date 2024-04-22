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
        
    def retirar_al_inicio(self, valor):
        if not self.cabeza:
            print("Lista vacia")
            return 0
        if self.cabeza.dato == valor:
            nodo = self.cabeza
            self.cabeza = self.cabeza.siguiente
            return nodo.dato
        actual = self.cabeza
        while actual.siguiente:
            if actual.siguiente.dato == valor:
                nodo = actual.siguiente
                actual.siguiente = actual.siguiente.siguiente
                return nodo.dato
            actual = actual.siguiente
        print("Elemento no encontrado")
        return None

# Ejemplo de uso
lista = ListaEnlazada()
lista.insertar_al_inicio(3)
lista.insertar_al_inicio(7)
lista.insertar_al_inicio(11)
lista.imprimir_lista()

elemento_retirado = lista.retirar_al_inicio(3)
print("Elemento retirado al principio:", elemento_retirado)
print("Lista después de retirar el primer elemento:")
lista.imprimir_lista()
