#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double cateto1, cateto2;

    cout << "Ingrese el valor del cateto 1: "; cin >> cateto1;
    cout << "Ingrese el valor del cateto 2: "; cin >> cateto2;

    double hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));

    cout << "La hipotenusa es: " << hipotenusa << endl;

    return 0;
}

