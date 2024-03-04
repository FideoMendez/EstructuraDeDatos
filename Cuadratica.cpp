#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, b, c, solucion, discriminante;
    float x1, x2;
    cout << "Ingrese los valores de a"<<endl;
    cin>>a;
    cout << "Ingrese los valores de b"<<endl;
    cin>>b;
    cout << "Ingrese los valores de c"<<endl;
    cin>>c;
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                cout << "La escuacion es indeterminada"<<endl;
            }
            else {
                cout << "La ecuacion no tiene solucion"<<endl;
            }    
        }
        else {
            solucion = -c / b;
            cout << "La solucion de la ecuacion es x: "<<solucion<<endl;
        }
    }
    else {
        discriminante = b*b - 4*a*c;
        if (discriminante > 0) {
            x1 = (-b - sqrt(discriminante)) / (2*a);
            x2 = (-b + sqrt(discriminante)) / (2*a);
            cout << "Las soluciones son x1: "<<x1<<" y x2: "<<x2<<endl;
        }
        else if (discriminante == 0) {
            solucion = -b / (2*a);
            cout << "La solucion es x: "<<solucion<<endl;
        }
        else {
            cout << "No tiene solucion en los reales."<<endl;
        }
    }

    return 0;
}
