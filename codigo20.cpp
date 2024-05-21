#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char frase[50];
    cout << "Introduzca una frase: ";
    cin.getline(frase, 50);

    int indice = strlen(frase);

    cout << "La frase al reves es: \n";
    for (int x = indice - 1; x >= 0; x--) {
        cout << frase[x];
    }
    cout << endl;

    return 0;
}

