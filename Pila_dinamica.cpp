#include <iostream>
#include <string>
using namespace std;

class Nodo {
public:
    int dato;
    string nombre;
    Nodo* sig;

    // Constructor de Nodo
    Nodo() {
        dato = 0;
        nombre = "";
        sig = NULL;
    }
};

class Pila {
private:
    Nodo* tope;

public:
    Pila() {
        tope = NULL;
    }

    void push();
    void pop();
    void show();
    void top();
    void size();
};

void Pila::push() {
    int valor;
    string valor2;
    Nodo* aux = new Nodo;
    cout << "Ingresa el id del proceso: ";
    cin >> valor;
    cout << "Ingresa el nombre del proceso: ";
    cin.ignore();
    getline(cin, valor2);
    aux->dato = valor;
    aux->nombre = valor2;
    aux->sig = NULL;

    if (aux != NULL) {
        if (tope == NULL) {
            tope = aux;
        }
        else {
            aux->sig = tope;
            tope = aux;
        }
        cout << "Nuevo proceso insertado en la pila!\n";
    }
}

void Pila::pop() {
    if (tope == NULL) {
        cout << "\nLa pila esta vacia!\n\n";
        return;
    }

    Nodo* temp = tope;
    tope = tope->sig;
    cout << "\nEl proceso eliminado es: " << temp->dato << " - " << temp->nombre << "\n" << endl;
    delete temp;
}

void Pila::show() {
    Nodo* aux1 = tope;
    if (tope == NULL) {
        cout << "\nLa pila esta vacia!\n\n";
        return;
    }

    cout << "Procesos:\n" << endl;
    while (aux1 != NULL) {
        cout << aux1->dato << " - " << aux1->nombre << "\n" << endl;
        aux1 = aux1->sig;
    }
}

void Pila::top() {
    if (tope == NULL) {
        cout << "\nLa pila esta vacia!\n\n";
        return;
    }

    cout << "Proceso TOP:\n" << endl;
    cout << tope->dato << " - " << tope->nombre << "\n" << endl;
}

void Pila::size() {
    if (tope == NULL) {
        cout << "\nLa pila esta vacia!\n\n";
        return;
    }

    int contador = 0;
    Nodo* aux1 = tope;
    while (aux1 != NULL) {
        contador++;
        aux1 = aux1->sig;
    }

    cout << "El tamano de la pila es: '" << contador << "'\n" << endl;
}

int main() {
    Pila l;
    int opcion;
    do {
        cout << "[:]Pila en lista enlazada" << endl;
        cout << "[1]Push" << endl;
        cout << "[2]Pop" << endl;
        cout << "[3]Mostrar" << endl;
        cout << "[4]Top" << endl;
        cout << "[5]Size" << endl;
        cout << "[0]Salir" << endl;
        cout << "\nIngresa tu opcion: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            l.push();
            break;
        case 2:
            l.pop();
            break;
        case 3:
            l.show();
            break;
        case 4:
            l.top();
            break;
        case 5:
            l.size();
            break;
        case 0:
            return 0;
        default:
            cout << "Por favor ingresa una opcion correcta.\n";
            break;
        }
    } while (opcion != 0);

    return 0;
}
