#ifndef JUGADOR_H
#define JUGADOR_H

#include "Persona.h"

class Jugador : public Persona {

private:

    int dinero;
    bool tieneArma;

public:

    Jugador();

    void vender(int ganancia);

    void comprar(int costo);

    void accion();

    int getDinero();

    void agregarDinero(int cantidad);

    bool getArma();

    void conseguirArma();

};

#endif