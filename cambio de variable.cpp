#include <iostream>
using namespace std;

int main() {
   int a,b,c;
   a = 2;
   b = 4;
   
   c = b;
   b = a;
   a = c;
   cout<< "valor de a: " << a << endl;
   cout<< "valor de b: " << b << endl;
}
