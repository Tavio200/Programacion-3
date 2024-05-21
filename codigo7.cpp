#include <iostream>
using namespace std;

int main() {
    float numeros[10];
    float aux;
    
    for (int i = 0; i < 10; i++) {
        cout << "Escriba un numero: ";
        cin >> numeros[i];
    }
    
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (numeros[j] > numeros[j + 1]) {
                aux = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = aux;
            }
        }
    }
    
    for (int i = 0; i < 10; i++) {
        cout << numeros[i] << endl;
    }
    
    system("PAUSE");
    return 0;
}


