#include "Matriz.h"
#include <iostream>

#define MAX 20

using namespace std;

Matriz::Matriz() {
	//Constructor
}
Matriz::~Matriz() {
	//Destructor
}
//Metodos que modiican o retornan los atributos
void Matriz::set_fil(int _fil) {
	fil = _fil;
}
int Matriz::get_fil() {
	return fil;
}
void Matriz::set_col(int _col) {
	col = _col;
}
int Matriz::get_col() {
	return col;
}
void Matriz::mostrarmat(int MAT[MAX][MAX]) {
	for (int i = 0; i < fil; i++)
	{
		for (int j = 0; j < col; j++) {
			cout << MAT[i][j] << "\t";
		}
		cout << endl;
	}
}
void Matriz::cargarmat(int MAT[MAX][MAX]) {
	for (int i = 0; i < fil; i++)
		for (int j = 0; j < col; j++) {
			cout << "MAT[" << i << "][" << j << "]= ";
			cin >> MAT[i][j];
		}
}
float Matriz::promedio(int MAT[MAX][MAX]) {
	float prom, s = 0;
	for (int i = 0; i < fil; i++)
		for (int j = 0; j < col; j++)
			s = s + MAT[i][j];
	prom = s / (m * n);
	return prom;
}
int Matriz::mayor(int MAT[MAX][MAX]) {
	int may = MAT[0][0];
	for (int i = 0; i < fil; i++)
		for (int j = 0; j < col; j++)
			if (MAT[i][j] > may)
				may = MAT[i][j];
	return may;
}
