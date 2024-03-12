#pragma once
#include <iostream>
#include <string>
using namespace std;

class Array2
{
private: 
	int n;
public: 
	Array2(int n);
	void cargarArray(int X[]);
	void mostrarArray(int Y[]);
	void MostrarSumaArrays(int X[], int Y[]);
	string MostrarSumaMayor(int X[], int Y[]);

};
