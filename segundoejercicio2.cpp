/*Generador de Números Aleatorios: Crea un programa que genere y muestre una serie de números aleatorios entre 0 y un 
número máximo especificado por el usuario. El programa solicitará al usuario la cantidad de números aleatorios que desea
generar y el valor máximo permitido. Utiliza la función rand de la librería cstdlib para generar los números aleatorios.*/

#include<iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;   

int main() {
    srand(time(0));

    int i,cantidad, maximo;

    cout << "Ingresa la cantidad de nuevos a generar: "; cin >> cantidad;
 
    cout << "Introduce el valor máximo permitido para los numeros aleatorios: "; cin >> maximo;

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
