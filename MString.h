#pragma once
#include <iostream>
#include <string>

using namespace std;

class MString
{
private:
	//int longitud;
	string nombre;
public:
	MString();
	~MString();
	void set_nombre(string _nombre);
	string get_nombre();
	int Longitud();
	int Comparacion(string _var2);
	int ContarVocales(int _cont);
	string Substraer(int _pos);
	string Intercambiar(string _var1);
	int Encontrar();
	string Invertir();
	int Palindromo(string _var1);
};
