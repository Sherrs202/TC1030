#include <iostream>
#include "Jugador.h"

using namespace std;

Jugador::Jugador() {

    dinero = 100;
    tieneArma = false;

    nombre = "Jugador";

}

void Jugador::accion() {

    cout << "El jugador administra el negocio." << endl;

}

int Jugador::getDinero() {

    return dinero;

}

void Jugador::vender(int ganancia) {

    dinero += ganancia;

}

void Jugador::comprar(int costo) {

    dinero -= costo;

}

bool Jugador::getArma() {

    return tieneArma;

}

void Jugador::conseguirArma() {

    tieneArma = true;

}
