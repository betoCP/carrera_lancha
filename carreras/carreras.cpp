#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Header.h"

using namespace std;

int main() {
    srand(time(0)); // Semilla para numeros aleatorios

    // Crear dos lanchas
    Lancha lancha1("Lancha 1");
    Lancha lancha2("Lancha 2");

    // Realizar cinco turnos de juego
    for (int turno = 1; turno <= 5; turno++) {
        cout << "Turno " << turno << endl;
        // Lanzar el dado para cada lancha
        lancha1.lanzarDado();
        lancha2.lanzarDado();

        // Usar nitro (opcional)
        lancha1.usarNitro();
        lancha2.usarNitro();

        // Calcular la distancia recorrida
        lancha1.calcularDistancia();
        lancha2.calcularDistancia();
    }

    // Determinar al ganador
    int distancia_lancha1 = lancha1.getDistanciaRecorrida();
    int distancia_lancha2 = lancha2.getDistanciaRecorrida();

    cout << endl;
    if (distancia_lancha1 > distancia_lancha2) {
        cout << "Lancha 1 ha ganado la carrera" << endl;
    }
    else if (distancia_lancha2 > distancia_lancha1) {
        cout << "Lancha 2 ha ganado la carrera" << endl;
    }
    else {
        cout << "Ha habido un empate" << endl;
    }

    return 0;
}

