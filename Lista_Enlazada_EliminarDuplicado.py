class Nodo:
    def __init__(self, dato):     #init_ es el constructor
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
            print (actual.dato, end=" -> ")
            actual = actual.siguiente
        print ("None")
        
    def eliminar_dato_duplicado(self):
        actual = self.cabeza
        while actual:
            recorrer = actual
            while recorrer.siguiente:
                if recorrer.siguiente.dato == actual.dato:
                    recorrer.siguiente = recorrer.siguiente.siguiente
                else:
                    recorrer = recorrer.siguiente
            actual = actual.siguiente
        
        
#ejemplo de uso
lista = ListaEnlazada()
lista.insertar_al_principio(3)
lista.insertar_al_principio(3)
lista.insertar_al_principio(3)
lista.insertar_al_principio(7)
lista.insertar_al_principio(11)
lista.insertar_al_principio(15)
lista.eliminar_dato_duplicado()
lista.imprimir_lista()
