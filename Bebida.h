/*
 *
 * Proyecto Taberna
 * Gerardo Silva
 * TC1030 - Programación Orientada a Objetos
 * Fecha: 2026
 * Versión: 1.0
 * Esta clase define un objeto de tipo Bebida que representa
 * los productos vendidos en la taberna y almacena información
 * sobre precio y cantidad disponible.
 *
 */

#ifndef BEBIDA_H
#define BEBIDA_H

#include "Item.h"

class Bebida : public Item {

private:
    // Cantidad disponible en inventario
    int cantidad;

    // Precio al que se vende la bebida
    int precioVenta;

    // Precio al que se compra la bebida
    int precioCompra;

public:

    // Constructor por default
    Bebida();

    /**
     * Constructor con parámetros.
     *
     * @param n nombre de la bebida.
     * @param pc precio de compra.
     * @param pv precio de venta.
     * @param c cantidad inicial.
     */    
    Bebida(string n, int pc, int pv, int c);

    // Regresa la cantidad disponible
    int getCantidad();

    // Regresa el precio de venta
    int getPrecioVenta();

    // Regresa el precio de compra
    int getPrecioCompra();

    // Regresa el nombre de la bebida
    string getNombre();

    /**
     * Aumenta la cantidad disponible.
     *
     * @param cant cantidad de bebidas a agregar.
     */
    void comprar(int cant);

    // Disminuye la cantidad disponible en una unidad
    void vender();

};

#endif
