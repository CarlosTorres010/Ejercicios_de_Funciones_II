/*Generador de N�meros Aleatorios: Crea un programa que genere y muestre una serie de n�meros aleatorios entre 0 y un 
n�mero m�ximo especificado por el usuario. El programa solicitar� al usuario la cantidad de n�meros aleatorios que desea
generar y el valor m�ximo permitido. Utiliza la funci�n rand de la librer�a cstdlib para generar los n�meros aleatorios.*/

#include<iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;   

int main() {
    srand(time(0));

    int i,cantidad, maximo;

    cout << "Ingresa la cantidad de nuevos a generar: "; cin >> cantidad;
 
    cout << "Introduce el valor m�ximo permitido para los numeros aleatorios: "; cin >> maximo;

    cout << "Numeros aleatorios generados:" << endl;
    i=0;
    while (i < cantidad) {
        int numeroAleatorio = rand() % (maximo + 1); 
        cout << numeroAleatorio << " ";
        i++;
    }
    cout << endl;

    return 0;
}
