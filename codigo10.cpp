#include <iostream>
using namespace std;

int main() {
    int numeros1[5], numeros2[5], numeros3[10];
    int aux;
    
    for (int i = 0; i < 5; i++) {
        cout << "Escriba un número: ";
        cin >> numeros1[i];
    }
    
    for (int i = 0; i < 5; i++) {
        numeros2[i] = numeros1[i] * 2;
    }
    
    for (int i = 0; i < 5; i++) {
        numeros3[i] = numeros1[i];
    }
    
    for (int i = 0; i < 5; i++) {
        numeros3[i + 5] = numeros2[i];
    }
    
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 9; j++) {
            if (numeros3[j] > numeros3[j + 1]) {
                aux = numeros3[j];
                numeros3[j] = numeros3[j + 1];
                numeros3[j + 1] = aux;
            }
        }
    }
    
    for (int i = 0; i < 10; i++) {
        cout << numeros3[i] << endl;
    }
    
    system("PAUSE");
    return 0;
}

