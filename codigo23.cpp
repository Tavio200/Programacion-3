#include <iostream>
using namespace std;

int main() {
    char frase[50];

    cout << "Introduzca una frase: ";
    cin.getline(frase, 50);

    for (int x = 0; x < 50; x++) {
        if (frase[x] != '\0') {
            frase[x] = frase[x] + 3;
        }
    }

    cout << "\nLa nueva frase es:\n\n" << frase << "\n\n";

    return 0;
}

