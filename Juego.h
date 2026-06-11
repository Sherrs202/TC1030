/*
 *
 * Proyecto Taberna
 * Gerardo Silva
 * TC1030 - Programación Orientada a Objetos
 * Fecha: 2026
 * Versión: 1.0
 * Esta clase define un objeto de tipo Juego que controla
 * la lógica principal de la simulación, incluyendo eventos,
 * inventario, ventas y administración de recursos.
 *
 */

#ifndef JUEGO_H
#define JUEGO_H

#include <vector>

#include "Jugador.h"
#include "Cliente.h"
#include "Bandido.h"
#include "Bebida.h"

using namespace std;

// Clase principal que controla la lógica del juego
class Juego {

private:

    // Jugador que participa en la partida
    Jugador jugador;

    // Inventario de bebidas disponibles
    vector<Bebida> bebidas;

    // Contador de días transcurridos
    int dia;

public:

    // Constructor por default
    Juego();

    // Muestra el menú principal del juego
    void menu();

    // Muestra las bebidas disponibles en el inventario
    void mostrarInventario();

    // Permite comprar bebidas para el inventario
    void comprarBebidas();

    /**
     * Genera un evento aleatorio.
     *
     * Puede aparecer un cliente o un bandido,
     * ejecutando diferentes acciones dentro del juego.
     */
    void eventoPersona();

};

#endif
