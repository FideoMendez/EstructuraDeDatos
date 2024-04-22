#include "ListaEnlazada.h"

ListaEnlazada::ListaEnlazada() {
	primero = nullptr;
	ultimo = nullptr;
}

void ListaEnlazada::agregarAnimal(string _n, string _h, string _eC) {
	Nodo* nuevoAnimal = new Nodo(_n, _h, _eC);
	if (primero == nullptr) {
		primero = nuevoAnimal;
		ultimo = nuevoAnimal;
	}
	else {
		ultimo->siguiente = nuevoAnimal;
		ultimo = nuevoAnimal;
	}
}

void ListaEnlazada::eliminarAnimal(string _n) {
	Nodo* actual = primero;
	Nodo* anterior = nullptr;
	while (actual != nullptr && actual->nombre != _n) {
		anterior = actual;
		actual = actual->siguiente;
	}
	if (actual == nullptr) {
		cout << "El animal no se encuentra en la lista." << endl;
		return;
	}
	if (actual == primero) {
		primero = primero->siguiente;
	}
	else {
		anterior->siguiente = actual->siguiente;
	}
	delete actual;
	cout << "El animal " << _n << " ha sido eliminado de la lista." << endl;
}

void ListaEnlazada::encontrarAnimal(string _n) {
	Nodo* actual = primero;
	while (actual != nullptr) {
		if (actual->nombre == _n) {
			cout << "Nombre: " << actual->nombre << endl;
			cout << "Habitat: " << actual->habitat << endl;
			cout << "Estado de conservacion: " << actual->estadoConservacion << endl;
			return;
		}
		actual = actual->siguiente;
	}
	cout << "El animal no se encuentra en la lista." << endl;
}

void ListaEnlazada::mostrarLista() {
	Nodo* actual = primero;
	if (actual == nullptr) {
		cout << "Lista vacia." << endl;
		return;
	}
	cout << "Lista de animales en peligro de extincion: " << endl;
	while (actual != nullptr) {
		cout << "Nombre: " << actual->nombre << endl;
		cout << "Habitat: " << actual->habitat << endl;
		cout << "Estado de conservacion: " << actual->estadoConservacion << endl;
		actual = actual->siguiente;
	}
}
