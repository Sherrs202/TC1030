#ifndef JUGADOR_H
#define JUGADOR_H

#include "Persona.h"

class Jugador : public Persona {

private:

    int dinero;
    bool tieneArma;

public:

    Jugador();

    void accion() override;

    int getDinero();

    void vender(int ganancia);

    void comprar(int costo);

    bool getArma();

    void conseguirArma();

};

#endif
