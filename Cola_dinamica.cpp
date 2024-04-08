//clase Dato
#pragma once 
#include <iostream>
#include <string>

using namespace std;

class Dato {
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

//clase Nodo 
#pragma once
#include <iostream>
#include "Dato.h"

using namespace std;

class Nodo {
public:
    Dato dato;
    Nodo* puntero;
    Nodo() { //Constructor de la clase
        puntero = NULL;
    }
};

#pragma once
#include <iostream>
#include "Dato.h"
#include "Nodo.h"

using namespace std;

class Cola
{
private:
	Nodo* inicio;
	Nodo* fin;
public:
	Cola();
	void Encolar(Nodo*& inicio, Nodo*& fin);
	void Desencolar(Nodo*& inicio);
};

#include <iostream>
#include "Cola.h"
#include "Dato.h"
#include "Nodo.h"

using namespace std;

int main(int argc, char* argv[]) {
    Cola cola;
    Nodo* inicio = NULL, * fin = NULL; //Punteros libres para el manejo de la cola
    int opc = 0, respuesta = 0;
    do {
        cout << "1. LA COLA ESTA VACIA?" << endl;
        cout << "2. ENCOLAR" << endl;
        cout << "3. DESENCOLAR" << endl;
        cout << "4. FINALIZAR" << endl;
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

        }

    } while (opc != 4);


    return 0;
}

#include <iostream>
#include "Cola.h"
#include "Dato.h"
#include "Dato.h"

using namespace std;

Cola::Cola() {

}

void Cola::Encolar(Nodo*& inicio, Nodo*& fin) { //Punteros enviados por referencia      
    Nodo* Elemento = new Nodo; //Creacion del nodo      
    if (inicio == NULL) {
        inicio = fin = Elemento; //Le asigno la direccion del primer nodo          
        cout << "Codigo: "; cin >> Elemento->dato.Codigo;
        cout << "Nombres: s"; cin >> Elemento->dato.Nombre;
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
