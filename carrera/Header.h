#ifndef LANCHA_H
#define LANCHA_H

#include <string>
using namespace std;
class Lancha {
private:
    int velocidad;
    int distancia_recorrida;
    int nitro;
    string nombre_corredor;

public:
    Lancha(string nombre);

    void lanzarDado();

    void usarNitro();

    void calcularDistancia();

    int getDistanciaRecorrida();
};

#endif
