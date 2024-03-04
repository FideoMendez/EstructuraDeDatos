#include <iostream>

using namespace std;

float area(float l);
int main()
{
    float lado;
    cout<<"Ingrese el lado del cuadrado: "<<endl;
    do{
        cin>>lado;
    } while (lado <=0);
    cout<<"El area es: "<<area(lado);
    
    return 0;
}

float area(float l)
{
    float a;
    a = l * l;
    return a;
}
