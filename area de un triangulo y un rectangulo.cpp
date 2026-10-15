
#include <iostream>
using namespace std;

int main() {
    float base, altura;
    float areaTriangulo, areaRectangulo;

    cout << "Ingrese la base: ";
    cin >> base;

    cout << "Ingrese la altura: ";
    cin >> altura;

    areaTriangulo = (base * altura) / 2;
    areaRectangulo = base * altura;

    cout << "Area del triangulo: "
         << areaTriangulo << endl;

    cout << "Area del rectangulo: "
         << areaRectangulo << endl;

}

