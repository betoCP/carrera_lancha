#include "Header.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

Lancha::Lancha(string nombre) : velocidad(0), distancia_recorrida(0), nitro(1), nombre_corredor(nombre) {}

void Lancha::lanzarDado() {
    int puntos = rand() % 6 + 1;
    velocidad += puntos;
    cout << nombre_corredor << " ha lanzado el dado y ha obtenido " << puntos << " puntos." << endl;
}

void Lancha::usarNitro() {
    char respuesta;
    cout << "Desea usar el nitro en este turno (s/n): ";
    cin >> respuesta;

    if (respuesta == 's' || respuesta == 'S') {
        if (nitro > 0) {
            nitro--;
            int resultado = rand() % 2;
            if (resultado == 0) {
                velocidad /= 2;
                cout << "Nitro utilizado La velocidad de " << nombre_corredor << " se ha reducido a la mitad." << endl;
            }
            else {
                velocidad *= 2;
                cout << "Nitro utilizado La velocidad de " << nombre_corredor << " se ha duplicado." << endl;
            }
        }
        else {
            cout << "Ya no tienes nitro disponible." << endl;
        }
    }
}

void Lancha::calcularDistancia() {
    distancia_recorrida += velocidad * 100;
    cout << nombre_corredor << " ha recorrido " << distancia_recorrida << " metros." << endl;
}

int Lancha::getDistanciaRecorrida() {
    return distancia_recorrida;
}
