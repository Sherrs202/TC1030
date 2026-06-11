/*
 *
 * Proyecto Taberna
 * Gerardo Silva
 * TC1030 - Programación Orientada a Objetos
 * Fecha: 2026
 * Versión: 1.0
 * Esta clase define un objeto de tipo Jugador que representa
 * al dueño de la taberna. Administra el dinero, puede comprar
 * objetos y defenderse de los bandidos.
 *
 */

#ifndef JUGADOR_H
#define JUGADOR_H

#include "Persona.h"

class Jugador : public Persona {

private:

    // Dinero disponible del jugador
    int dinero;

    // Indica si el jugador tiene un arma para defenderse de los bandidos
    bool tieneArma;

public:

// Constructor por default
    Jugador();

    /**
     * Aumenta el dinero del jugador.
     *
     * @param ganancia cantidad obtenida por una venta.
     */
    void vender(int ganancia);

    /**
     * Disminuye el dinero del jugador.
     *
     * @param costo cantidad gastada en una compra.
     */
    void comprar(int costo);

    // Muestra la acción realizada por el jugador
    void accion();

    // Regresa el dinero disponible
    int getDinero();

    /**
     * Agrega dinero al saldo actual.
     *
     * @param cantidad dinero a agregar.
     */
    void agregarDinero(int cantidad);

    // Indica si el jugador tiene un arma
    bool getArma();

    // Permite al jugador obtener un arma
    void conseguirArma();

};

#endif
