#pragma once
#include <iostream>
#include <string>

using namespace std;

class Nodo
{
public:
	string nombre;
	string habitat;
	string estadoConservacion;
	Nodo* siguiente;
	Nodo(string _n, string _h, string _eC) {	//Constructor
		this->nombre = _n;
		this->habitat = _h;
		this->estadoConservacion = _eC;
		siguiente = nullptr;
	}
};
