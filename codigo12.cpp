#include <iostream>
using namespace std;

int main() {
    float numeros1[10], sum = 0;
    
    for (int i = 0; i < 10; i++) {
        cout << "Escriba un número: ";
        cin >> numeros1[i];
    }
    
    for (int i = 0; i < 10; i++) {
        sum += numeros1[i];
    }
    
    cout << sum / 10 << endl;
    system("PAUSE");
    return 0;
}

