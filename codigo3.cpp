#include <iostream>
using namespace std;

int main() {
    int tabla[100], i = 0;
    for (int x = 1; x <= 100; x++) {
        int cont = 0;
        for (int z = 1; z <= x; z++) {
            if (x % z == 0) {
                cont++;
            }
        }
        if (cont == 2 || x == 1) {
            tabla[i] = x;
            i++;
        }
    }
    for (int x = 0; x < i; x++) {
        cout << tabla[x] << endl;
    }
    system("PAUSE");
    return 0;
}

