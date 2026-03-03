#include <iostream>
using namespace std;

int main() {
    const int LEER = 0b001;
    const int ESCRIBIR = 0b010;
    const int EJECUTAR = 0b100;

    int valor;
    cout << "Ingrese valor entero de permisos: ";
    cin >> valor;

    cout << "Permisos: " << endl;
    if (valor & LEER) cout << "- LEER" << endl;
    if (valor & ESCRIBIR) cout << "- ESCRIBIR" << endl;
    if (valor & EJECUTAR) cout << "- EJECUTAR" << endl;
    
    return 0;
}
