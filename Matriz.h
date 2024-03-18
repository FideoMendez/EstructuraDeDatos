#pragma once
#include <iostream>

#define MAX 20

using namespace std;

class Matriz
{
private:
	int MAT[MAX][MAX], fil, col;
public:
	Matriz();	//Constructor
	~Matriz();	//Destructor
	//Metodos que modiican o retornan los atributos
	void set_fil(int _fil);
	int get_fil();
	void set_col(int _col);
	int get_col();
	void mostrarmat(int MAT[MAX][MAX]);
	void cargarmat(int MAT[MAX][MAX]);
	float promedio(int MAT[MAX][MAX]);
	int mayor(int MAT[MAX][MAX]);
};
