#include "Bebida.h"

Bebida::Bebida() {

}

Bebida::Bebida(string n, int pc, int pv, int c) {

    nombre = n;
    precioCompra = pc;
    precioVenta = pv;
    cantidad = c;

}

int Bebida::getCantidad() {

    return cantidad;

}

int Bebida::getPrecioVenta() {

    return precioVenta;

}

int Bebida::getPrecioCompra() {

    return precioCompra;

}

string Bebida::getNombre() {

    return nombre;

}

void Bebida::comprar(int cant) {

    cantidad += cant;

}

void Bebida::vender() {

    if(cantidad > 0) {

        cantidad--;

    }

}
