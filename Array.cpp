#include "Array.h"
#include <iostream>
using namespace std;

void Array::MostrarArray(int A[]) {
	for (int i = 0; i < n; i++)
		cout << A[i] << " ";
}
int Array::MostrarMayor(int A[]) {
	int mayor = 0;
	for (int i = 0; i < n; i++) {
		if (A[i] > mayor) {
			mayor = A[i];
		}
	}
	return mayor;
}
int Array::MostrarMenor(int A[]) {
	int menor = 999;
	for (int i = 0; i < n; i++) {
		if (A[i] < menor) {
			menor = A[i];
		}
	}
	return menor;
}
double Array::MostrarPromedio(int A[]) {
	double suma = 0;
	for (int i = 0; i < n; i++) {
		suma += A[i];
	}
	return suma/n;
}
