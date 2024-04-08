#include <iostream>
#define MAX 5
using namespace std;

class Pila {
private:
    int vector[MAX];
    int tope;

public:
    Pila();
    void push(int&);
    void pop();
    bool pila_vacia();
    bool pila_llena();
    void ver_pila();
    void LimpiarPila();
    bool Iguales(Pila &otra_pila);
};

Pila::Pila() {
    tope = -1;
}

void Pila::push(int &elemento) {
    if (pila_llena()) {
        cout << "La pila ha alcanzado su capacidad máxima." << endl;
    } else {
        tope++;
        vector[tope] = elemento;
        cout << "Elemento " << elemento << " insertado en la pila." << endl;
    }
}

bool Pila::pila_vacia() {
    return tope == -1;
}

bool Pila::pila_llena() {
    return tope == MAX - 1;
}

void Pila::pop() {
    if (pila_vacia()) {
        cout << "La pila está vacía. No se puede eliminar ningún elemento." << endl;
    } else {
        int eliminado = vector[tope];
        tope--;
        cout << "Elemento " << eliminado << " eliminado de la pila." << endl;
    }
}

void Pila::LimpiarPila() {
    tope = -1;
    cout << "La pila ha sido limpiada." << endl;
}

void Pila::ver_pila() {
    if (pila_vacia()) {
        cout << "La pila está vacía." << endl;
    } else {
        cout << "Elementos de la pila:" << endl;
        for (int i = tope; i >= 0; i--) {
            cout << vector[i] << endl;
        }
    }
}

bool Pila::Iguales(Pila &otra_pila) {
    if (tope != otra_pila.tope) {
        return false;
    }
    for (int i = 0; i <= tope; i++) {
        if (vector[i] != otra_pila.vector[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int dato, n, opcion;
    Pila pila1, pila2;
    
    cout << "MENU" << endl;
    do {
        cout << "*****Pila en lista enlazada*****" << endl;
        cout << "[1]Push en Pila 1" << endl;
        cout << "[2]Pop en Pila 1" << endl;
        cout << "[3]Mostrar Pila 1" << endl;
        cout << "[4]Limpiar Pila 1" << endl;
        cout << "[5]Iguales" << endl;
        cout << "[0]Salir" << endl;
        cout << "\nIngresa tu opción: ";
        cin >> opcion;
        
        switch (opcion) {
            case 1:
                cout << "¿Cuantos elementos quieres introducir a la pila 1?: "; 
                cin >> n;
                do {
                    cout << "Digite el elemento de la pila 1: "; 
                    cin >> dato;
                    pila1.push(dato);
                    n--;
                } while (n > 0);
                break;
            case 2:
                pila1.pop();
                break;
            case 3:
                pila1.ver_pila();
                break;
            case 4:
                pila1.LimpiarPila();
                break;
            case 5:
                cout << "¿Cuantos elementos quieres introducir a la pila 2?: "; 
                cin >> n;
                do {
                    cout << "Digite el elemento de la pila 2: "; 
                    cin >> dato;
                    pila2.push(dato);
                    n--;
                } while (n > 0);
                if (pila1.Iguales(pila2)) {
                    cout << "Las pilas son iguales." << endl;
                } else {
                    cout << "Las pilas no son iguales." << endl;
                }
                break;
            case 0:
                return 0;
            default:
                cout << "Opcion no valida. Por favor ingresa una opción correcta." << endl;
                break;
        }
    } while (opcion != 0);
    
    return 0;
}
