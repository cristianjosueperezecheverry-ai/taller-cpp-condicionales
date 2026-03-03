#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    cout << "Ingrese los 3 lados: ";
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {
 
        if (a == b && b == c) cout << "Equilatero ";
        else if (a == b || b == c || a == c) cout << "Isosceles ";
        else cout << "Escaleno ";

        double a2 = pow(a, 2), b2 = pow(b, 2), c2 = pow(c, 2);
        if (a2 + b2 == c2 || a2 + c2 == b2 || b2 + c2 == a2) cout << "Rectangulo";
        else if (a2 + b2 < c2 || a2 + c2 < b2 || b2 + c2 < a2) cout << "Obtusangulo";
        else cout << "Acutangulo";
    } else {
        cout << "No es un triangulo valido.";
    }
    cout << endl;
    return 0;
}
