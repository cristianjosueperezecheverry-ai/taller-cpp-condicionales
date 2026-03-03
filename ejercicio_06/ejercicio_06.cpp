#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10;
    
    int temp = a; a = b; b = temp;
    
    a = a + b; b = a - b; a = a - b;
    
    a ^= b; b ^= a; a ^= b; [cite: 17]

    cout << "A: " << a << " B: " << b << endl;
    return 0;
}
