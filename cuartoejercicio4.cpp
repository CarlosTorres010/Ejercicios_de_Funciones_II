/*Cálculo de Raíces de una Ecuación Cuadrática: Crea un programa que calcule las raíces de una
ecuación cuadrática utilizando la fórmula general. Utiliza la función sqrt de la librería cmath para
calcular la raíz cuadrada. Solicita al usuario los coeficientes de la ecuación (a, b, c) y muestra las
raíces obtenidas. Considera los casos en los que las raíces son reales o complejas.
*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	 double a, b, c;

    cout << "Introduce el coeficiente a: "; cin >> a;
    cout << "Introduce el coeficiente b: "; cin >> b;
    cout << "Introduce el coeficiente c: "; cin >> c;

    double discriminante = b * b - 4 * a * c;

    double raiz1, raiz2;

    if (discriminante > 0) {
        raiz1 = (-b + sqrt(discriminante)) / (2 * a);
        raiz2 = (-b - sqrt(discriminante)) / (2 * a);
        cout << "Las raices son reales y distintas:" << endl;
        cout << "Raiz 1 = " << raiz1 << endl;
        cout << "Raiz 2 = " << raiz2 << endl;
    }
    else if (discriminante == 0) {
        raiz1 = -b / (2 * a);
        cout << "Las raices son reales e iguales:" << endl;
        cout << "Raiz 1 = Raíz 2 = " << raiz1 << endl;
    }
    else {
        double parteReal = -b / (2 * a);
        double parteImaginaria = sqrt(-discriminante) / (2 * a);
        cout << "Las raices son complejas conjugadas:" << endl;
        cout << "Raiz 1 = " << parteReal << " + " << parteImaginaria << "i" << endl;
        cout << "Raiz 2 = " << parteReal << " - " << parteImaginaria << "i" << endl;
    }
	return 0;
}
