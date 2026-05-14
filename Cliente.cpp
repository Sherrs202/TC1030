#include <iostream>
#include <cstdlib>

#include "Cliente.h"

using namespace std;

void Cliente::pedirBebida(Inventario &inventario) {

    int bebidaRandom = rand() % 2;

    if(bebidaRandom == 0) {

        cout << "\nCliente pide Cerveza\n";

        if(inventario.cerveza.cantidad > 0) {

            inventario.cerveza.cantidad--;

            cout << "Vendiste una cerveza.\n";
        }

        else {

            cout << "Ya no quedan cervezas.\n";
        }
    }

    else {

        cout << "\nCliente pide Whisky\n";

        if(inventario.whisky.cantidad > 0) {

            inventario.whisky.cantidad--;

            cout << "Vendiste un whisky.\n";
        }

        else {

            cout << "Ya no queda whisky.\n";
        }
    }
}