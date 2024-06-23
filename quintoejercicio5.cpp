/*Funci�n calcularRaices: Ampl�a el ejercicio anterior definiendo una funci�n void llamada
calcularRaices que reciba los coeficientes de la ecuaci�n (a, b, c) por valor y las variables donde
se almacenar�n las ra�ces por referencia. Adem�s, incluye una variable por referencia que indique si
las ra�ces son reales o complejas. La funci�n debe calcular las ra�ces utilizando la f�rmula general y
actualizar las variables correspondientes.*/

#include <iostream>
#include <cmath>
using namespace std;

void calcularRaices(double a, double b, double c, double &raiz1, double &raiz2, bool &sonReales) {
    double discriminante = b * b - 4 * a * c;
    
    if (discriminante >= 0) {
        sonReales = true;
        raiz1 = (-b + sqrt(discriminante)) / (2 * a);
        raiz2 = (-b - sqrt(discriminante)) / (2 * a);
    } else {
        sonReales = false;
        raiz1 = -b / (2 * a);
        raiz2 = sqrt(-discriminante) / (2 * a);
    }
}

int main() {
	
    double a, b, c;
    double raiz1, raiz2;
    bool sonReales;

    cout << "Ingrese los coeficientes a, b y c: ";
    cin >> a >> b >> c;

    calcularRaices(a, b, c, raiz1, raiz2, sonReales);

    if (sonReales) {
        cout << "Las ra�ces son reales: " << raiz1 << " y " << raiz2 << endl;
    } else {
        cout << "Las ra�ces son complejas: " << raiz1 << " + " << raiz2 << "i y " << raiz1 << " - " << raiz2 << "i" << endl;
    }

    return 0;
}

