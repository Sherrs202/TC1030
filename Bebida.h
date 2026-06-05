#ifndef BEBIDA_H
#define BEBIDA_H

#include "Item.h"

class Bebida : public Item {

private:

    int cantidad;
    int precioVenta;
    int precioCompra;

public:

    Bebida();

    Bebida(string n, int pc, int pv, int c);

    int getCantidad();

    int getPrecioVenta();

    int getPrecioCompra();

    string getNombre();

    void comprar(int cant);

    void vender();

};

#endif
