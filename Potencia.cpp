#include <iostream>
using namespace std;

int potencia(int x, int m);
int main()
{
    int base, expo;
    cout<<"Ingrese la base: "<<endl;
    cin>>base;
    cout<<"Ingrese el exponente: " <<endl;
    cin>>expo;
    cout<<"El resultado es: "<<potencia(base,expo);
    
    return 0;
}

int potencia(int base, int expo) {
    if(expo==0) 
      return 1;
    else 
      return base*potencia(base,expo - 1);
}
