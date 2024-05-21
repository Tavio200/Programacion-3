#include <iostream>
using namespace std;

int main() {
    int numeros[3][3], num = 2;

    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            numeros[x][y] = num;
            num += 2;
        }
    }

    int x, y;
    cout << "Introduzca coordenada x: ";
    cin >> x;
    cout << "Introduzca coordenada y: ";
    cin >> y;

    cout << "El número es: " << numeros[x][y] << endl;

    return 0;
}

