#ifndef BEBIDA_H
#define BEBIDA_H

#include <string>

using namespace std;

class Bebida {

public:

    string nombre;
    int cantidad;
    int precioCompra;
    int precioVenta;

    void mostrarInfo();
};

#endif
