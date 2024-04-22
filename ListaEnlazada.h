#pragma once
#include "Nodo.h"
class ListaEnlazada
{
private:
	Nodo* primero;
	Nodo* ultimo;
public:
	ListaEnlazada();
	void agregarAnimal(string _n, string _h, string _eC);
	void eliminarAnimal(string _n);
	void encontrarAnimal(string _n);
	void mostrarLista();
};
