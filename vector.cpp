#include <iostream>
#include "Vector.h"

using namespace std;

Vector::Vector(void)
{
	vec[10] = 0;
	n = 0;
}


Vector::~Vector(void)
{

}
void Vector::set_n(int _n) {
	n = _n;
}
int Vector::get_n() {
	return n;
}
void Vector::cargarVector(int vec[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "vec[" << i << "] =";
		cin >> vec[i];
	}
}

void Vector::mostrarVector(int vec[], int n) {
	for (int i = 0; i < n; i++) {
		cout << vec[i] << ", ";
	}
	cout << endl;
}

void Vector::ordenarVector(int vec[], int n) {
	int aux;
	for (int i = 0; i < (n - 1); i++) {
		for (int j = i; j < n; j++) {
			if (vec[i] > vec[j]) {
				aux = vec[i];
				vec[i] = vec[j];
				vec[j] = aux;
			}
		}
	}
}
