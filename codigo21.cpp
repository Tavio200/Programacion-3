#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char frase[50];
    int sum = 0;

    cout << "Introduzca una frase: ";
    cin.getline(frase, 50);

    for (int x = 0; x < strlen(frase); x++) {
        switch (frase[x]) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
            case 'A': case 'E': case 'I': case 'O': case 'U':
                sum++;
                break;
            default:
                break;
        }
    }

    cout << "En la frase hay " << sum << " vocales\n";

    return 0;
}

