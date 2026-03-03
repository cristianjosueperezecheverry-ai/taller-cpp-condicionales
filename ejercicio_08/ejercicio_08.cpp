#include <iostream>
using namespace std;

int main() {
    double saldo = 500.0;
    int op, trans = 0;
    double monto;

    cout << "1. Deposito\n2. Retiro\n3. Saldo\nOpcion: ";
    cin >> op;

    switch(op) {
        case 1: 
            cin >> monto; saldo += monto; trans++; break; [cite: 21]
        case 2: 
            cin >> monto; 
            if(monto <= saldo) { saldo -= monto; trans++; } [cite: 22]
            else cout << "Insuficiente"; break;
        case 3: cout << "Saldo: " << saldo; break;
    }
    return 0;
}
