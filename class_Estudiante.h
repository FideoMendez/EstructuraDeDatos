#pragma once
#include <iostream>
#include <string>

using namespace std;

class Estudiante
{ 
private:
	string nombre;
	int edad;
	string materia;
	float calificacion;
public:
	Estudiante();
	~Estudiante();
	void set_nombre(string _n);
	string get_nombre();
	void set_edad(int _e);
	int get_edad();
};
