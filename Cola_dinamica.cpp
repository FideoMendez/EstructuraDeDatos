#include <iostream>
#include <string>

using namespace std;

class Dato	//Clase Dato
{	
public:
    double Codigo;
    string Nombre;
    string Carrera;
    Dato() {
        Codigo = 0;
        Nombre = "Unknow";
        Carrera = "Unknow";
    }
};

class Nodo	//Clase Nodo
{	
public:
    Dato dato;
    Nodo* puntero;
    Nodo() { //Constructor de la clase
        puntero = NULL;
    }
};

class Cola	//Clase Cola
{
private:
	Nodo* inicio;
	Nodo* fin;
public:
	Cola();
	void Encolar(Nodo*& inicio, Nodo*& fin);
	void Desencolar(Nodo*& inicio);
	void MostrarCola(Nodo* inicio);
};

Cola::Cola() {

}

void Cola::Encolar(Nodo*& inicio, Nodo*& fin) { //Punteros enviados por referencia      
    Nodo* Elemento = new Nodo; //Creacion del nodo      
    if (inicio == NULL) {
        inicio = fin = Elemento; //Le asigno la direccion del primer nodo          
        cout << "Codigo: "; cin >> Elemento->dato.Codigo;
        cout << "Nombres: "; cin >> Elemento->dato.Nombre;
        cout << "Carrera: "; cin >> Elemento->dato.Carrera;
    }
    else {
        fin->puntero = Elemento; //Asigno el puntero del anterior elemento al nuevo
        fin = Elemento; //Cambio la direccion del ultimo nodo creado 
        cout << "Codigo: "; cin >> Elemento->dato.Codigo;
        cout << "Nombres: "; cin >> Elemento->dato.Nombre;
        cout << "Carrera: "; cin >> Elemento->dato.Carrera; cout << endl;
    }
}

void Cola::Desencolar(Nodo*& inicio) {
    if (inicio != NULL) {
        cout << "Codigo: " << inicio->dato.Codigo << endl;
        cout << "Nombres: " << inicio->dato.Nombre << endl;
        cout << "Carrera: " << inicio->dato.Carrera << endl;
        inicio = inicio->puntero; // Cambio Inicio al siguiente nodo
    }
    else {
        cout << "La cola se encuentra vacia" << endl;
    }
}

void Cola::MostrarCola(Nodo* inicio) {
    Nodo* temp = inicio; // Usamos un nodo temporal para no modificar el puntero original de inicio
    if (temp == NULL) {
        cout << "La cola está vacía" << endl;
        return;
    }
    cout << "Elementos en la cola:" << endl;
    while (temp != NULL) {
        cout << "Codigo: " << temp->dato.Codigo << endl;
        cout << "Nombre: " << temp->dato.Nombre << endl;
        cout << "Carrera: " << temp->dato.Carrera << endl;
        temp = temp->puntero; // Avanzamos al siguiente nodo
    }
}

int main(int argc, char* argv[]) {
    Cola cola;
    Nodo* inicio = NULL, * fin = NULL; //Punteros libres para el manejo de la cola
    int opc = 0, respuesta = 0;
    do {
        cout << "1. LA COLA ESTA VACIA?" << endl;
        cout << "2. ENCOLAR" << endl;
        cout << "3. DESENCOLAR" << endl;
	cout << "4. MOSTRAR" << endl;
        cout << "5. FINALIZAR" << endl;
        cout << "Opcion: "; cin >> opc;
        switch (opc) {
        case 1:
            if (inicio == NULL)
                cout << "La cola se encuentra vacia" << endl;
            else
                cout << "Existe elemento(s) dentro de la cola" << endl;
            break;
        case 2:
            cola.Encolar(inicio, fin);
            break;
        case 3:
            cola.Desencolar(inicio);
            break;
	case 4:
	    cola.MostrarCola(inicio);	
	    break;
	default:
	    cout << "Ingrese una opcion valida." << endl;
        }
    } while (opc != 5);

    return 0;
}
