#include "Array.h"
#include <iostream>
using namespace std;

int main()
{
	int A[] = {1,3,5,7,9};

	//Instanciar la clase
	Array array1(5);
	array1.MostrarArray(A);
	cout << "\nEl mayor del array es: " << array1.MostrarMayor(A);
	int mayorNr = array1.MostrarMayor(A);
	cout << "\nEl mayor del array es: " << mayorNr;
	cout << "\nEl menor del array es: " << array1.MostrarMenor(A);
	int menorNr = array1.MostrarMenor(A);
	cout << "\nEl menor del array es: " << menorNr;
	cout << "\nEl promedio es: " << array1.MostrarPromedio(A);

	return 0;
}
