#include <iostream>
using namespace std;

int main() {
    int numeros[11][10];

    for (int y = 0; y < 10; y++) {
        int sum = 0;
        for (int x = 0; x < 10; x++) {
            numeros[x][y] = (x * 10) + y + 1;
            sum += numeros[x][y];
        }
        numeros[10][y] = sum;
    }

    for (int x = 0; x < 11; x++) {
        for (int y = 0; y < 10; y++) {
            cout << numeros[x][y] << " ";
        }
        cout << endl;
    }

    return 0;
}

