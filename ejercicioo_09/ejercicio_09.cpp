#include <iostream>
using namespace std;

int main() {
    float peso, altura, imc;
    cin >> peso >> altura;
    imc = peso / (altura * altura); [cite: 23]

    if (imc < 18.5) cout << "Bajo peso";
    else if (imc < 25) cout << "Normal";
    else if (imc < 30) cout << "Sobrepeso";
    else cout << "Obesidad"; [cite: 24]
    
    return 0;
