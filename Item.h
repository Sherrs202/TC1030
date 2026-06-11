/*
 *
 * Proyecto Taberna
 * Gerardo Silva
 * TC1030 - Programación Orientada a Objetos
 * Fecha: 2026
 * Versión: 1.0
 * Esta clase define un objeto de tipo Item que sirve como
 * clase base para los objetos disponibles en el juego.
 *
 */

#ifndef ITEM_H
#define ITEM_H

#include <string>

using namespace std;

// Clase base para los obejtps disponibles en el juego
class Item {

protected:

    //Nombre del item
    string nombre;

    // Precio del objeto
    int precio;

public:

    // Constructor por default
    Item();

};

#endif
