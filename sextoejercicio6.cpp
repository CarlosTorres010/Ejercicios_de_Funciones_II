/* Juego de Piedra, Papel y Tijeras: Desarrolla un programa que simule el juego de piedra, papel y
tijeras contra la computadora. El usuario elegirá su jugada (piedra, papel o tijeras) y la computadora
generará su jugada de forma aleatoria. El programa determinará el ganador de cada ronda según las
reglas del juego. El juego continuará hasta que el usuario o la computadora gane 3 rondas. Muestra el
resultado final indicando el ganador del juego.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

string obtenerJugadaComputadora() {
    int jugada = rand() % 3; 
    switch (jugada) {
        case 0:
            return "piedra";
        case 1:
            return "papel";
        case 2:
            return "tijeras";
        default:
            return "piedra";
    }
}

string determinarGanador(string jugadaUsuario, string jugadaComputadora) {
    if (jugadaUsuario == jugadaComputadora) {
        return "empate";
    } else if ((jugadaUsuario == "piedra" && jugadaComputadora == "tijeras") ||
               (jugadaUsuario == "papel" && jugadaComputadora == "piedra") ||
               (jugadaUsuario == "tijeras" && jugadaComputadora == "papel")) {
        return "usuario";
    } else {
        return "computadora";
    }
}

int main() {
    srand(time(0)); 

    int victoriasUsuario = 0;
    int victoriasComputadora = 0;

    while (victoriasUsuario < 3 && victoriasComputadora < 3) {
        string jugadaUsuario;
        cout << "Elige tu jugada (piedra, papel o tijeras): ";
        cin >> jugadaUsuario;

        string jugadaComputadora = obtenerJugadaComputadora();
        cout << "La computadora eligió: " << jugadaComputadora << endl;

        string resultado = determinarGanador(jugadaUsuario, jugadaComputadora);
        if (resultado == "usuario") {
            victoriasUsuario++;
            cout << "Ganaste esta ronda!" << endl;
        } else if (resultado == "computadora") {
            victoriasComputadora++;
            cout << "La computadora ganó esta ronda!" << endl;
        } else {
            cout << "Es un empate!" << endl;
        }

        cout << "Puntuación: Usuario " << victoriasUsuario << " - " << victoriasComputadora << " Computadora" << endl;
    }

    if (victoriasUsuario == 3) {
        cout << "Felicidades! Ganaste el juego!" << endl;
    } else {
        cout << "La computadora ganó el juego! Mejor suerte la próxima vez!" << endl;
    }

    return 0;
}

