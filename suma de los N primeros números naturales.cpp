
#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;

    cout << "Ingrese N: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        suma = suma + i;
    }

    cout << "La suma es: " << suma;

}

