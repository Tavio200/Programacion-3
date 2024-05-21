#include <iostream>
using namespace std;

int main() {
    int numeros[10][10];

    for (int x = 0; x < 10; x++) {
        for (int y = 0; y < 10; y++) {
            numeros[x][y] = (x * 10) + y + 1;
        }
    }

    for (int x = 0; x < 10; x++) {
        for (int y = 0; y < 10; y++) {
            cout << numeros[x][y] << " ";
        }
        cout << endl;
    }

    return 0;
}

