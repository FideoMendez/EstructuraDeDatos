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
        
    def eliminar_dato_en_medio(self):
        if not self.cabeza or not self.cabeza.siguiente:
            print("Lista vacía o con un solo elemento")
            return
        anterior = None
        rapido = self.cabeza
        lento = self.cabeza
        while rapido and rapido.siguiente:
            rapido = rapido.siguiente.siguiente
            anterior = lento
            lento = lento.siguiente
        if anterior:
            anterior.siguiente = lento.siguiente
        else:
            self.cabeza = lento.siguiente

# Ejemplo de uso
lista = ListaEnlazada()
lista.insertar_al_inicio(3)
lista.insertar_al_inicio(7)
lista.insertar_al_inicio(2)
lista.insertar_al_inicio(11)
lista.insertar_al_inicio(5)
lista.imprimir_lista()
lista.eliminar_dato_en_medio()
print("Lista después de eliminar el dato en medio:")
lista.imprimir_lista()
