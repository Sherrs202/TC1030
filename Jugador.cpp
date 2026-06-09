#include "Jugador.h"

Jugador::Jugador() {
    dinero = 100;
    tieneArma = false;
}

void Jugador::accion() {
    cout << "El jugador administra la taberna." << endl;
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
