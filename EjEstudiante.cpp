#include "Estudiante.h"
#include <iostream>
#include <string>

using namespace std;

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
