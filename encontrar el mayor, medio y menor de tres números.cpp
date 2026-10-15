

#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;

    cout << "Ingrese el primer numero: ";
    cin >> a;

    cout << "Ingrese el segundo numero: ";
    cin >> b;

    cout << "Ingrese el tercer numero: ";
    cin >> c;

    if (a < b) {
        d = a;
        a = b;
        b = d;
    }

    if (a < c) {
        d= a;
        a = c;
        c = d;
    }

    if (b < c) {
        d= b;
        b = c;
        c = d;
    }

    cout << "El mayor es: " << a << endl;
    cout << "El medio es: " << b << endl;
    cout << "El menor es: " << c << endl;

}
