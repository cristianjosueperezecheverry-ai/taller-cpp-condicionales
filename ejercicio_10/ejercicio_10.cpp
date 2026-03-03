#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    char tipo; double monto; int cupon; bool finSemana;
    cout << "Cliente (V/N), Monto, Cupon (1-3), Fin de semana (1/0): ";
    cin >> tipo >> monto >> cupon >> finSemana;

    double desc = 0;
    if (tipo == 'V') desc += 0.15;
    if (finSemana) desc += 0.05;

    switch(cupon) {
        case 1: desc += 0.10; break;
        case 2: desc += 0.20; break;
    }

    desc = min(desc, 0.50);
    cout << "Total: " << monto * (1 - desc) << endl;
    return 0;
}
