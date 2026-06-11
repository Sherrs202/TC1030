#include <iostream>
#include "Jugador.h"

using namespace std;

// Constructor por default de la clase Jugador
Jugador::Jugador() {

    dinero = 100;
    tieneArma = false;

}

/**
 * Aumenta el dinero del jugador después de una venta.
 *
 * @param ganancia cantidad obtenida por la venta.
 */
void Jugador::vender(int ganancia) {

    dinero += ganancia;

    cout << "\nVenta realizada" << endl;
    cout << "Dinero actual: $" << dinero << endl;

}

/**
 * Disminuye el dinero disponible del jugador.
 *
 * @param costo cantidad gastada en una compra.
 */
void Jugador::comprar(int costo) {

    dinero -= costo;

}

// Muestra la acción realizada por el jugador
void Jugador::accion() {

    cout << "El jugador esta trabajando" << endl;

}

// Regresa el dinero disponible
int Jugador::getDinero() {

    return dinero;

}

/**
 * Agrega dinero al saldo actual del jugador.
 *
 * @param cantidad dinero a agregar.
 */
void Jugador::agregarDinero(int cantidad) {

    dinero += cantidad;

}

// Indica si el jugador posee un arma
bool Jugador::getArma() {

    return tieneArma;

}

// Permite al jugador obtener un arma
void Jugador::conseguirArma() {

    tieneArma = true;

}
