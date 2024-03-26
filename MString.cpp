#include "MString.h"
#include <iostream>
#include <string>

using namespace std;

MString::MString() {

}
MString::~MString() {

}
//Colocar los metodos del problema
void MString::set_nombre(string _nombre) {
	nombre = _nombre;
}
string MString::get_nombre() {
	return nombre;
}
int MString::Longitud() {
	return nombre.length();
}
int MString::Comparacion(string _var2) {
	return nombre.compare(_var2);
}
int MString::ContarVocales(int _cont) {
	for (int i = 0; i < nombre.length(); i++) {
		if (nombre[i] == 'a' || nombre[i] == 'e' || nombre[i] == 'i' || nombre[i] == 'o' || nombre[i] == 'u')
			_cont++;
	}
	return _cont;
}
string MString::Substraer(int _pos) {
	return nombre.substr(_pos, nombre.length() - _pos);
}
string MString::Intercambiar(string _var1) {
	nombre.swap(_var1);
	return _var1;
}
int MString::Encontrar() {
	return nombre.find(' ');
	/*for (int i = 0; i < nombre.length(); i++) {
		if (nombre.at(i) == ' ') {
			return i;
		}
	}*/
}
string MString::Invertir() {
	char _aux;
	for (int i = 0; i < (nombre.length() / 2); i++) {
		_aux = nombre[i];
		nombre[i] = nombre[nombre.length() - 1 - i];
		nombre[nombre.length() - 1 - i] = _aux;
	}
	return nombre;
}
int MString::Palindromo(string _var1) {
	_var1 = nombre;
	char _aux;
	for (int i = 0; i < (nombre.length() / 2); i++) {
		_aux = nombre[i];
		nombre[i] = nombre[nombre.length() - 1 - i];
		nombre[nombre.length() - 1 - i] = _aux;
	}
	return _var1.compare(nombre);
}
