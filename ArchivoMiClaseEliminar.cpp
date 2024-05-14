#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class UserDoc {
private:
    string nombre;
    int edad;
    string sexo;
    char estado; // eliminado = E, activo = A

public:
    UserDoc();
    UserDoc(string nom, int ed, string sx);
    void setDoc(string nom, int ed, string sx);
    string getNombre();
    int getEdad();
    string getSexo();
    char getEstado();
    void guardarArchivo(ofstream& fsalida);
    bool leerArchivo(ifstream& fentrada);
    bool eliminar(fstream& fes, int nroReg);
    int getTamBytesRegistro();
};

class DatosDocs {
private:
    string nomArchivo;
    UserDoc* Docs;

public:
    DatosDocs(string nomArch);
    void introducirDatos(UserDoc* newReg);
    void adicionarNuevo();
    void eliminarReg();
    void mostrarMenu();
    void listar();
};

UserDoc::UserDoc() {
    nombre = "";
    edad = 0;
    sexo = "";
    estado = ' ';
}

UserDoc::UserDoc(string nom, int ed, string sx) {
    nombre = nom;
    edad = ed;
    sexo = sx;
    estado = 'A';
}

void UserDoc::setDoc(string nom, int ed, string sx) {
    nombre = nom;
    edad = ed;
    sexo = sx;
    estado = 'A';
}

string UserDoc::getNombre() {
    return(nombre);
}

int UserDoc::getEdad() {
    return(edad);
}

string UserDoc::getSexo() {
    return(sexo);
}

char UserDoc::getEstado() {
    return(estado);
}

void UserDoc::guardarArchivo(ofstream& fsalida) {
    fsalida.write(reinterpret_cast<char*>(&nombre), sizeof(nombre));
    fsalida.write(reinterpret_cast<char*>(&edad), sizeof(edad));
    fsalida.write(reinterpret_cast<char*>(&sexo), sizeof(sexo));
    fsalida.write(reinterpret_cast<char*>(&estado), sizeof(estado));
}

bool UserDoc::leerArchivo(ifstream& fentrada) {
    bool k = false;
    if (fentrada.is_open()) {
        fentrada.read(reinterpret_cast<char*>(&nombre), sizeof(nombre));
        if (!fentrada.eof()) {
            fentrada.read(reinterpret_cast<char*>(&edad), sizeof(edad));
            fentrada.read(reinterpret_cast<char*>(&sexo), sizeof(sexo));
            fentrada.read(reinterpret_cast<char*>(&estado), sizeof(estado));
            k = true;
        }
    }
    return k;
}

bool UserDoc::eliminar(fstream& fes, int nroReg) {
    bool k = false;
    if (fes.is_open()) {
        fes.seekg(getTamBytesRegistro() * (nroReg - 1), ios::beg);
        fes.read(reinterpret_cast<char*>(&nombre), sizeof(nombre));
        if (!fes.eof()) {
            fes.read(reinterpret_cast<char*>(&edad), sizeof(edad));
            fes.read(reinterpret_cast<char*>(&sexo), sizeof(sexo));
            fes.read(reinterpret_cast<char*>(&estado), sizeof(estado));

            estado = 'E';
            fes.seekp(getTamBytesRegistro() * (nroReg - 1), ios::beg);
            fes.write(reinterpret_cast<char*>(&nombre), sizeof(nombre));
            fes.write(reinterpret_cast<char*>(&edad), sizeof(edad));
            fes.write(reinterpret_cast<char*>(&sexo), sizeof(sexo));
            fes.write(reinterpret_cast<char*>(&estado), sizeof(estado));
            k = true;
        }
    }
    return k;
}

int UserDoc::getTamBytesRegistro() {
    return sizeof(nombre) + sizeof(edad) + sizeof(sexo) + sizeof(estado);
}

DatosDocs::DatosDocs(string nomArch) {
    nomArchivo = nomArch;
}

void DatosDocs::introducirDatos(UserDoc* newReg) {
    string nombre;
    int edad;
    string sexo;
    cout << endl << "Introducir los siguientes datos --->>> :" << endl;
    cin.ignore();
    cout << "Nombre : ";
    getline(cin, nombre);
    cout << "Edad : ";
    cin >> edad;
    cout << "Sexo <Femenino/Masculino>: ";
    cin >> sexo;
    newReg->setDoc(nombre, edad, sexo);
}

void DatosDocs::adicionarNuevo() {
    ofstream fsalida(nomArchivo, ios::app | ios::binary);
    Docs = new UserDoc();
    introducirDatos(Docs);
    cout << endl << "Registro agregado correctamente." << endl;
    Docs->guardarArchivo(fsalida);
    fsalida.close();
}

void DatosDocs::eliminarReg() {
    int nroReg;
    cout << endl << "Introducir numero de registro a eliminar :  ";
    cin >> nroReg;
    Docs = new UserDoc();
    fstream fes(nomArchivo, ios::in | ios::out | ios::binary);
    if (Docs->eliminar(fes, nroReg)) {
        cout << endl << "Registro eliminado correctamente." << endl;
    } else {
        cout << endl << "Registro no existe." << endl;
    }
    fes.close();
}

void DatosDocs::listar() {
    int cr = 0;
    cout << endl << "Los registros son --->>> : " << endl;
    Docs = new UserDoc();
    ifstream fentrada(nomArchivo, ios::in | ios::binary);
    while (Docs->leerArchivo(fentrada)) {
        cr++;
        if (Docs->getEstado() == 'A') {
            cout << cr << ". " << Docs->getNombre() << "  " << Docs->getEdad() << "  " << Docs->getSexo() << "  " << Docs->getEstado() << endl;
        }
    }
    fentrada.close();
}

void DatosDocs::mostrarMenu() {
    cout << "***** FORO DEL DOCTOR *****" << endl;
    cout << "1. Introducir nuevo doctor" << endl;
    cout << "2. Listar doctores" << endl;
    cout << "3. Eliminar doctor" << endl;
    cout << "4. Salir" << endl;
    cout << "Selecciona una opción: ";
}

int main() {
    DatosDocs* Doc = new DatosDocs("Doctores.dat");
    int opcion;
    do {
        Doc->mostrarMenu();
        cin >> opcion;
        switch (opcion) {
        case 1:
            Doc->adicionarNuevo();
            break;
        case 2:
            Doc->listar();
            break;
        case 3:
            Doc->eliminarReg();
            break;
        case 4:
            cout << "Saliendo del programa..." << endl;
            break;
        default:
            cout << "Opción no válida. Inténtalo de nuevo." << endl;
        }
    } while (opcion != 4);

    return 0;
}
