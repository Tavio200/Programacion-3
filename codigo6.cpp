#include <iostream>
using namespace std;

int main() {
    int tabla[10];
    int sum = 0, res, mul = 1, div;
    
    for (int x = 0; x < 10; x++) {
        cout << "Introduzca un n�mero: ";
        cin >> tabla[x];
    }
    
    for (int x = 0; x < 10; x++) {
        sum += tabla[x];
        mul *= tabla[x];
    }
    
    res = tabla[0] * 2;
    div = tabla[0] * tabla[0];
    
    cout << "Suma: " << sum << endl;
    cout << "Resta: " << res << endl;
    cout << "Multiplicaci�n: " << mul << endl;
    cout << "Divisi�n: " << div << endl;
    
    system("PAUSE");
    return 0;
}

