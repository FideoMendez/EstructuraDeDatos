// ejemplomatriz.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include "Matriz.h"

#define MAX 20

using namespace std;

int main() 
{
	Matriz m1; //Se crea el objeto m1 de la clase matrix
	int matriz[MAX][MAX], fil, col, may, opc;
	float prom;
	do {
		cout << "Ingrese el numero de filas: ";
		cin >> fil;
	} while ((fil <= 0) || (fil > MAX));

	do {
		cout << "Ingrese el numero de columnas: ";
		cin >> col;
	} while ((col <= 0) || (col > MAX));
	m1.set_fil(fil);
	m1.set_col(col);
	//Menu
	do {
		cout << "\t Menu\n";
		cout << "\t ====\n\n";
		cout << "(1) Cargar Matriz\n";
		cout << "(2) Mostrar Matriz\n";
		cout << "(3) Promedio Matriz\n";
		cout << "(4) Mayor Matriz\n";
		cout << "(0) Salir\n";
		cout << "Opcion:";
		cin >> opc;
		switch (opc) {
		case 1: m1.cargarmat(matriz);
			break;
		case 2: m1.mostrarmat(matriz);
			break;
		case 3: prom = m1.promedio(matriz);
			cout << "El valor promedio es: " << prom;
			break;
		case 4: cout << "El mayor es: " << m1.mayor(matriz);
			break;
		case 0: cout << "Salir\n";
			break;
		default: cout << "Error\n";
			break;
		}
	} while (opc != 0);
	return 0;
}
