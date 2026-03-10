#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double celsius;
    cout << "Ingrese grados Celsius: ";
    cin >> celsius;

    double fahrenheit = (celsius * 9/5) + 32;
    double kelvin = celsius + 273.15;
    double rankine = (celsius * 9/5) + 491.67;

    cout << fixed << setprecision(2);
    cout << "Fahrenheit: " << fahrenheit << endl;
    cout << "Kelvin: " << kelvin << endl;
    cout << "Rankine: " << rankine << endl;
    return 0;
}
