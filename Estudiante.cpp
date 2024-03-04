#include <Estudiante.h>
#include <iosteam>
#include <string>

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
