#include <iostream>
using namespace std;

int main() {
    int anio;
    cout << "Anio: "; cin >> anio;

    bool bisiesto = (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0); [cite: 19]

    if (bisiesto) cout << anio << " es bisiesto.";
    else cout << anio << " no es bisiesto.";
    cout << endl;
    return 0;
}
