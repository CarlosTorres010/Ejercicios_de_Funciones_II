#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double radio;

    cout << "Introduce el radio del c�rculo: ";
    cin >> radio;

    double area = M_PI * pow(radio, 2);

    cout << "El �rea del c�rculo con radio " << radio << " es: " << area << std::endl;

    return 0;
}
