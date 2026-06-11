#include "Bebida.h"
// Constructor por default de la clase Bebida
Bebida::Bebida() {

}

/**
 * Inicializa una bebida con sus datos principales
 * 
 * @param n nombre de la bebida
 * @param pc precio de compra de la bebida
 * @param pv precio de venta de la bebida   
 * @param c cantidad inicial disponible 
*/

Bebida::Bebida(string n, int pc, int pv, int c) {

    nombre = n;
    precioCompra = pc;
    precioVenta = pv;
    cantidad = c;

}

// Regresa la cantidad disponible
int Bebida::getCantidad() {

    return cantidad;

}

// Regresa el precio de venta
int Bebida::getPrecioVenta() {

    return precioVenta;

}

// regresa el precio de compra
int Bebida::getPrecioCompra() {

    return precioCompra;

}

// Regresa el nombre de la bebida
string Bebida::getNombre() {

    return nombre;

}

/*
 * Aumenta la cantidad disponible en el inventario
 *
 * @param cant cantidad de bebidas a agregar
*/
void Bebida::comprar(int cant) {

    cantidad += cant;

}

// Disminuye la cantidad disponible despues de una venta
void Bebida::vender() {

    if(cantidad > 0) {

        cantidad--;

    }

}
