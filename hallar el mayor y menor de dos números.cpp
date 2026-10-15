



#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Ingrese el primer numero: ";
    cin >> a;

    cout << "Ingrese el segundo numero: ";
    cin >> b;

    if (a > b) {
        cout << "El mayor es: " << a << endl;
        cout << "El menor es: " << b << endl;
    }
    else if (a < b) {
        cout << "El mayor es: " << b << endl;
        cout << "El menor es: " << a << endl;
    }
    else {
        cout << "Los dos numeros son iguales";
    }

}
