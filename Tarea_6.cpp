#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

bool palindromo(const string& palabra) {
    string invertida = palabra;
    reverse(invertida.begin(), invertida.end());
    return palabra == invertida;
}

int main()
{
    string frase;
    cout << "Ingrese una frase: ";
    cin >> frase;
    if (palindromo(frase)) {
        cout << "Es palindromo." << endl;
    }
    else {
        cout << "No es palindromo." << endl;
    }

    return 0;
}
