#include "ListaEnlazada.h"

int main()
{
	ListaEnlazada listaAnimal;
	string nombre;
	string habitat;
	string estadoConservacion;
	char opcion;
	int op;
	do {
		cout << "\n***** MENU *****" << endl;
		cout << "1. Agregar animal." << endl;
		cout << "2. Eliminar un animal." << endl;
		cout << "3. Buscar un animal de la lista." << endl;
		cout << "4. Mostrar lista de animales." << endl;
		cout << "5. Salir." << endl;
		cout << "Elija una opcion: ";
		cin >> op;
		cin.ignore();
		switch (op) {
		case 1:
			cout << "Ingrese el nombre del animal: ";
			getline(cin, nombre);
			cout << "Ingrese el habitat del animal: ";
			getline(cin, habitat);
			cout << "Ingrese el estado de conservacion del animal: ";
			getline(cin, estadoConservacion);
			listaAnimal.agregarAnimal(nombre, habitat, estadoConservacion);
			break;
		case 2:
			cout << "Ingrese el nombre del animal a eliminar: ";
			getline(cin, nombre);
			listaAnimal.eliminarAnimal(nombre);
			break;
		case 3:
			cout << "Ingrese el nombre del animal a encontrar: ";
			getline(cin, nombre);
			listaAnimal.encontrarAnimal(nombre);
			break;
		case 4:
			listaAnimal.mostrarLista();
			break;
		case 5:
			cout << "Ha salido del programa." << endl;
			return 0;
			break;
		default:
			cout << "Opcion no valida, ingrese otra opcion." << endl;
		}
		cout << "Desea ingresar otro animal? (SI S/s, No N/n): ";
		cin >> opcion;
		cin.ignore();
	} while (op != 5 && opcion != 'n');

	return 0;
}
