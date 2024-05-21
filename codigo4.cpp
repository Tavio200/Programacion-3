#include <iostream>
using namespace std;

int main() {
    int tabla[100], i = 0;
    for (int x = 1; x <= 100; x++) {
        if (x % 2 == 0) {
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

