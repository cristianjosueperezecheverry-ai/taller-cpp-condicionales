#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double n1, n2;
    char opera;
    cout << "Operacion (num opera num): ";
    cin >> n1 >> opera >> n2;

    switch (opera) {
        case '+': cout << n1 + n2; break;
        case '-': cout << n1 - n2; break;
        case '*': cout << n1 * n2; break;
        case '/': 
            if (n2 != 0) cout << n1 / n2; 
            else cout << "Error: Division por cero"; [cite: 14]
            break;
        case '%': 
            if (n2 != 0) cout << fmod(n1, n2); 
            else cout << "Error: Division por cero";
            break;
    }
    cout << endl;
    return 0;
}
