#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    float aux, numeros[10];
    int i, j, n = 10;

    for (i = 0; i < n; i++) {
        cout << "Escriba un numero: ";
        cin >> numeros[i];
    }

    // Sort the array in descending order
    sort(numeros, numeros + n, greater<float>());

    // Display the sorted array
    for (i = 0; i < n; i++) {
        cout << numeros[i] << endl;
    }

    return 0;
}

