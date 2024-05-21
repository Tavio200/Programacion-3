#include <iostream>
using namespace std;

int main() {
    int tabla[100];
    for (int x = 0; x < 100; x++) {
        tabla[x] = 100 - x;
    }
    for (int x = 0; x < 100; x++) {
        cout << tabla[x] << endl;
    }
    system("PAUSE");
    return 0;
}

