#include <iostream>
#include "Bebida.h"

using namespace std;

Bebida::Bebida() {

    nombre = "Coca Cola";
    precioCompra = 5;
    precioVenta = 15;
    cantidad = 5;

}

Bebida::Bebida(string n, int compra, int venta, int cant) {

    nombre = n;
    precioCompra = compra;
    precioVenta = venta;
    cantidad = cant;

}

void Bebida::vender() {

    if(cantidad > 0) {

        cantidad--;

    }

}

void Bebida::comprar(int cant) {

    cantidad += cant;

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