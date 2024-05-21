#include <iostream>
using namespace std;

int main() {
    int vector[20], n = 20, dato, centro, inf = 0, sup = n - 1, x = 0;

    for (int i = 0; i < n; i++) {
        cout << "Escriba un número: ";
        cin >> vector[i];
    }

    cout << "Escriba el número a buscar: ";
    cin >> dato;

    while (inf <= sup) {
        centro = (sup + inf) / 2;
        if (vector[centro] == dato) {
            cout << "Existe" << endl;
            x = 1;
            break;
        } else if (dato < vector[centro]) {
            sup = centro - 1;
        } else {
            inf = centro + 1;
        }
    }

    if (x == 0) {
        cout << "No existe" << endl;
    }

    return 0;
}

