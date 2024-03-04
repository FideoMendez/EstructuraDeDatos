#include "Estudiante.h"
#include <iostream>
#include <string>

using namespace std;

Estudiante::Estudiante() {

}
Estudiante::~Estudiante() {

}
void Estudiante::set_nombre(string _n) {
	//Da valores al atributo nombre de la clase
	nombre = _n;
}
string Estudiante::get_nombre() {
	return nombre;
}
void Estudiante::set_edad(int _e) {
	edad = _e;
}
int Estudiante::get_edad() {
	return edad;
}

int main()
{
    //Declarar un objeto de la clase estudiante
    Estudiante alumno;
    string nombre;
    int edad;
    cout << "Ingrese el nombre: ";
    getline(cin, nombre);
    alumno.set_nombre(nombre); //LLamando al metodo set_nombre de la clase Estudiante a traves de alumno
    cout << "Ingrese la edad: ";
    cin >> edad;
    alumno.set_edad(edad);
    cout << "El nombre del estudiante es: " << alumno.get_nombre() << endl; //Muestra el atributo de la clase
    cout << "El nombre es: " << nombre << endl; //Muestra la variable local
    cout << "La edad del estudiante es: " << alumno.get_edad() << endl;

    return 0;
}
