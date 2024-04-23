#include <iostream>

#define MAX 100

using namespace std;

class Cola
{
private:
    int info[MAX];
    int inicio, fin;

public:
    Cola(void);
    bool Encolar(int Valor);
    bool Desencolar(void);
    bool PrimeroCola(int &Valor);
    bool ColaVacia(void);
    void mostrar(void);
    void VaciarCola(void);
};

Cola::Cola(void)
{
    inicio = 0;
    fin = 0;
}

bool Cola::ColaVacia(void)
{
    return inicio == fin;
}

bool Cola::Encolar(int Valor)
{
    if (fin == MAX)
    {
        cout << "Error: La cola está llena." << endl;
        return false;
    }
    else
    {
        info[fin] = Valor;
        fin++;
        return true;
    }
}

bool Cola::PrimeroCola(int &Valor)
{
    if (ColaVacia())
    {
        cout << "Error: La cola está vacía." << endl;
        return false;
    }
    else
    {
        Valor = info[inicio];
        return true;
    }
}

bool Cola::Desencolar(void)
{
    if (ColaVacia())
    {
        cout << "Error: La cola está vacía." << endl;
        return false;
    }
    else
    {
        inicio++;
        return true;
    }
}

void Cola::mostrar()
{
    if (ColaVacia())
    {
        cout << "La cola está vacía." << endl;
    }
    else
    {
        cout << "Contenido de la cola:" << endl;
        for (int i = inicio; i < fin; i++)
            cout << "[" << info[i] << "] ";
        cout << endl;
    }
}

void Cola::VaciarCola(void)
{
    inicio = 0;
    fin = 0;
    cout << "La cola ha sido vaciada." << endl;
}

int main()
{
    Cola cola;
    int opcion;
    do
    {
        cout << "Menú de opciones:" << endl;
        cout << "1. Encolar" << endl;
        cout << "2. Desencolar" << endl;
        cout << "3. Mostrar cola" << endl;
        cout << "4. Vaciar cola" << endl;
        cout << "5. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            int elemento;
            cout << "Ingrese el valor a encolar: ";
            cin >> elemento;
            cola.Encolar(elemento);
            break;
        case 2:
            cola.Desencolar();
            break;
        case 3:
            cola.mostrar();
            break;
        case 4:
            cola.VaciarCola();
            break;
        case 5:
            cout << "Saliendo del programa." << endl;
            break;
        default:
            cout << "Opción no válida." << endl;
            break;
        }
    } while (opcion != 5);

    return 0;
}
