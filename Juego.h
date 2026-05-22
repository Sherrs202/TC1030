#ifndef JUEGO_H
#define JUEGO_H

#include <vector>

#include "Jugador.h"
#include "Cliente.h"
#include "Bandido.h"
#include "Bebida.h"

using namespace std;

class Juego {

private:

    int dia;

    Jugador jugador;

    vector<Bebida> bebidas;

public:

    Juego();

    void menu();

    void mostrarInventario();

    void comprarBebidas();

    void esperarClientes();

    void eventoRandom();

};

#endif