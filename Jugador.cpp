#include <iostream>
#include "Jugador.h"

using namespace std;

Jugador::Jugador() {

    dinero = 100;
    tieneArma = false;

}

void Jugador::vender(int ganancia) {

    dinero += ganancia;

    cout << "\nVenta realizada" << endl;
    cout << "Dinero actual: $" << dinero << endl;

}

void Jugador::comprar(int costo) {

    dinero -= costo;

}

void Jugador::accion() {

    cout << "El jugador esta trabajando" << endl;

}

int Jugador::getDinero() {

    return dinero;

}

void Jugador::agregarDinero(int cantidad) {

    dinero += cantidad;

}

bool Jugador::getArma() {

    return tieneArma;

}

void Jugador::conseguirArma() {

    tieneArma = true;

}
