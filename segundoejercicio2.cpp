/*Generador de Números Aleatorios: Crea un programa que genere y muestre una serie de números aleatorios entre 0 y un 
número máximo especificado por el usuario. El programa solicitará al usuario la cantidad de números aleatorios que desea
generar y el valor máximo permitido. Utiliza la función rand de la librería cstdlib para generar los números aleatorios.*/

#include<iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;   

int main() {
    srand(time(0));

    int cantidad, maximo;

    cout << "Introduce la cantidad de números aleatorios a generar: "; cin >> cantidad;
 
    cout << "Introduce el valor máximo permitido para los números aleatorios: "; cin >> maximo;

    cout << "Números aleatorios generados:" << endl;
    for (int i = 0; i < cantidad; ++i) {
        int numeroAleatorio = rand() % (maximo + 1); 
        cout << numeroAleatorio << " ";
    }
    cout << endl;

    return 0;
}
