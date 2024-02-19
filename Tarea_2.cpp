#include <iostream>
using namespace std;

float Potencia(float base, float exponente);
float Factorial(int f);
float Serie(float x, int n);

int main()
{
    int op;
    float num, x;
    char opc;
    do {
        cout << "*** MENU DE OPCIONES ***" << endl;
        cout << "1. Potencia" << endl;
        cout << "2. Factorial" << endl;
        cout << "3. Realizar una serie" << endl;
        cout << "0. Salir." << endl;
        cout << "Ingresa la opcion a realizar: ";
        cin >> op;
        switch (op) {
            case 1:
                cout << "Ingrese la base: ";
                do {
                    cin >> num;
                }   while(num <= 0);
                cout << "Ingrese el exponente: ";
                do {
                    cin >> x;
                }   while(x <= 0);
                cout << "El resultado es: " << Potencia(num, x) << endl;
            break;
            
            case 2: 
                cout << "Ingrese el numero a sacar el factorial: ";
                cin >> num;
                cout << "El factorial de " << num << " es: " << Factorial(num) << endl;
            break;
            
            case 3: 
                cout << "Ingrese un valor para x: ";
                cin >> x;
                cout << "Ingrese un valor para n: ";
                cin >> num;
                cout << "El resultado de la serie es: " << Serie(x, num) << endl;
            break;
            
            default: cout << "Opcion no valida. Ingrese otra opcion." << endl;
        }
    }   while (op != 0);
    
    return 0;
}

float Potencia(float base, float exponente) 
{
    float pot = 1;
    for (int i = 1; i <= exponente; i++) {
        pot *= base;
    }
    return pot;
}

float Factorial(int f)
{
    int fact = 1;
    for (int i = 1; i <= f; i++) {
        fact *= i;
    }
    return fact;
}

float Serie(float x, int n)
{
    float result = 3;
    for (int i = 0; i < n; i++) {
        result = result + (Potencia(x, i) / Factorial(i));
    }
    return result;
}
