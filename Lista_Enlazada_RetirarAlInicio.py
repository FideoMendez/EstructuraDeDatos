class Nodo:
      def __init__(self, dato):
        self.dato = dato
        self.siguiente = None

class ListaEnlazada:
    def __init__(self):
        self.cabeza = None

    def esta_vacia(self):
        return self.cabeza is None
    
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
        
    def retirar_al_principio(self):
        if self.esta_vacia():
            return None
        dato_retirado = self.cabeza.dato
        self.cabeza = self.cabeza.siguiente
        return dato_retirado

# Ejemplo de uso
lista = ListaEnlazada()
lista.insertar_al_principio(3)
lista.insertar_al_principio(7)
lista.insertar_al_principio(11)
lista.imprimir_lista()

elemento_retirado = lista.retirar_al_principio()
print("Elemento retirado al principio:", elemento_retirado)
print("Lista después de retirar el primer elemento:")
lista.imprimir_lista()
