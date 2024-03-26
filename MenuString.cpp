#include <iostream>
#include <string>
#include "MString.h"

using namespace std;

int main() {
	int op, cont = 0, pos;
	string nombre, var1, var2;
	MString mstring;
	do {
		cout << "MENU" << endl;
		cout << "1.- Longitud de una cadena." << endl;
		cout << "2.- Comparacion de dos cadenas." << endl;
		cout << "3.- Contar vocales de una cadena." << endl;
		cout << "4.- Sacar un substring." << endl;
		cout << "5.- Intercambiar una cadena." << endl;
		cout << "6.- Encontrar caracteres." << endl;
		cout << "7.- Invertir una frase." << endl;
		cout << "8.- Palindromo" << endl;
		cout << "0 para salir." << endl;
		cout << "Ingrese una opcion: ";
		cin >> op;
		switch (op) {
		case 1:
			cin.ignore();
			cout << "Ingrese un nombre o cadena: ";
			getline(cin, nombre);
			mstring.set_nombre(nombre);
			cout << "El string tiene: " << mstring.Longitud() << endl << endl;
			break;
		case 2:
			cin.ignore();
			cout << "Ingrese un nombre o cadena: ";
			getline(cin, nombre);
			mstring.set_nombre(nombre);
			cout << "Redigite el nombre: ";
			getline(cin, var2);
			if (mstring.Comparacion(var2) == 0)
				cout << "Los datos coinciden" << endl << endl;
			else
				cout << nombre << " es diferente que " << var2 << " :1" << endl << endl;
			break;
		case 3:
			cin.ignore();
			cout << "Ingrese un nombre o cadena: ";
			getline(cin, nombre);
			mstring.set_nombre(nombre);
			cout << "Numero de vocales: " << mstring.ContarVocales(cont) << endl << endl;
			break;
		case 4:
			cin.ignore();
			cout << "Ingrese un nombre o cadena: ";
			getline(cin, nombre);
			mstring.set_nombre(nombre);
			cout << "Ingrese desde donde desea extraer el substring: ";
			cin >> pos;
			cout << "String substraido: " << mstring.Substraer(pos) << endl << endl;
		case 5:
			cin.ignore();
			cout << "Ingrese un nombre o cadena: ";
			getline(cin, nombre);
			mstring.set_nombre(nombre);
			cout << "Valores intercambiados: " << mstring.Intercambiar(var1) << endl;
			break;
		case 6:
			cin.ignore();
			cout << "Ingrese un nombre o cadena: ";
			getline(cin, nombre);
			mstring.set_nombre(nombre);
			cout << "Existe un espacio en: " << mstring.Encontrar() << endl;
			break;
		case 7:
			cin.ignore();
			cout << "Ingrese un nombre o cadena: ";
			getline(cin, nombre);
			mstring.set_nombre(nombre);
			cout << "Cadena invertida: " << mstring.Invertir() << endl << endl;
			break;
		case 8:
			cin.ignore();
			cout << "Ingrese un nombre o cadena: ";
			getline(cin, nombre);
			mstring.set_nombre(nombre);
			if (mstring.Palindromo(var1) == 0) {
				cout << "Es un palindromo." << endl << endl;
			}
			else {
				cout << "No es un palindromo." << endl << endl;
			}
			break;
		case 0:
			cout << "Ha salido del programa." << endl;
			break;
		default:
			cout << "Opcion incorrecta. Ingrese otra opcion." << endl;
		}
	} while (op != 0);

	return 0;
}
