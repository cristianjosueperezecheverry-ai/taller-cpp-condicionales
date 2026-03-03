#include <iostream>
#include <string>
using namespace std;

int main() {
    int nota;
    cout << "Nota (0-100): "; cin >> nota;

    char letra;
    if (nota >= 90) letra = 'A';
    else if (nota >= 80) letra = 'B';
    else if (nota >= 70) letra = 'C';
    else if (nota >= 60) letra = 'D';
    else letra = 'F';

    string estado = (nota >= 60) ? "Aprobado" : "Reprobado";
    cout << "Letra: " << letra << " | Estado: " << estado << endl;
    return 0;
}
