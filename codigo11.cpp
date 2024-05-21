#include <iostream>
using namespace std;

int main() {
    int tabla[100], sum = 0;
    int i = 0;
    
    for (int x = 1; x <= 100; x++) {
        if (x % 2 == 0) {
            tabla[i] = x;
            i++;
        }
    }
    
    for (int x = 0; x < i; x++) {
        sum += tabla[x];
    }
    
    cout << sum << endl;
    system("PAUSE");
    return 0;
}

