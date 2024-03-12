#include "Array2.h"
#include <iostream>
#include <string>

using namespace std;

Array2::Array2(int n) {
	this->n = n;
}
void Array2::cargarArray(int X[]) {
	int a;
for (int i=0; i<n; i++){
	cout << "Ingrese el elemento nro" << i + 1 << ": ";
		cin>> a;
	X[i] = a; 
	cout << endl;
}

}
void Array2::mostrarArray(int Y[]) {
	for (int i = 0; i < n; i++) {
		cout << "Elemento " << i + 1 << " = " << Y[i]<<endl;
	}
}
void Array2::MostrarSumaArrays(int X[], int Y[]) {
	int suma=0;
	for (int i = 0; i < n; i++)
		suma += (X[i] + Y[i]);
	cout << suma << endl;
}

string Array2::MostrarSumaMayor(int X[], int Y[]) {
	int sumaX = 0; int sumaY = 0; int mayor = 0; string a;
	for (int i = 0; i < n; i++)
	{
		sumaX += X[i];
		sumaY += Y[i];
	}
	if (sumaX < sumaY) mayor = sumaY;
	else mayor = sumaX;
	cout << mayor << endl;

	 a = to_string(mayor);
	 return a;
}
