/*
1.Ejercicio 
Calcular el area del circulo 
*/

#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double radio;

    cout << "Introduce el radio del circulo: ";
    cin >> radio;

    double area = M_PI * pow(radio, 2);

    cout << "El área del círculo con radio " << radio << " es: " << area << endl;

    return 0;
}
