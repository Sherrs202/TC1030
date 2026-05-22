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

    Bebida(string n, int compra, int venta, int cant);

    void vender();

    void comprar(int cant);

    int getCantidad();

    int getPrecioVenta();

    int getPrecioCompra();

    string getNombre();

};

#endif