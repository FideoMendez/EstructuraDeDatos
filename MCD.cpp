#include <iostream>
using namespace std;

int MCD(int num1,int num2);


int main()
{
    int x,y;
    cout << "Ingresa el numero 1: ";
    cin >> x;
    cout << "Ingresar el numero 2: ";
    cin >> y;
    cout << "El MCD es: " << MCD(x, y);
        return 0;
}

int MCD(int num1, int num2)
{
    if (num2 == 0)
        return num1;
    else
        return MCD(num2, num1 % num2);
}
