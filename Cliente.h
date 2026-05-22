#ifndef CLIENTE_H
#define CLIENTE_H

#include "Persona.h"

class Cliente : public Persona {

public:

    Cliente();

    void pedir();

    void accion();

};

#endif