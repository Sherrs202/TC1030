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

    Jugador jugador;

    vector<Bebida> bebidas;

    int dia;

public:

    Juego();

    void menu();

    void mostrarInventario();

    void comprarBebidas();

    void eventoPersona();

};

#endif
