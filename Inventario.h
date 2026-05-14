#ifndef INVENTARIO_H
#define INVENTARIO_H

#include "Bebida.h"

class Inventario {

public:

    Bebida cerveza;
    Bebida whisky;

    void mostrarInventario();
    void comprarBebidas();
};

#endif