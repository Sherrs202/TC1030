#include <iostream>
#include "Inventario.h"

using namespace std;

void Inventario::mostrarInventario() {

    cout << "\n--- INVENTARIO ---\n";

    cerveza.mostrarInfo();
    whisky.mostrarInfo();
}

void Inventario::comprarBebidas() {

    int opcion;
    int cantidadComprar;

    cout << "\nQue bebida quieres comprar?\n";
    cout << "1. Cerveza\n";
    cout << "2. Whisky\n";
    cin >> opcion;

    cout << "Cuantas quieres comprar?: ";
    cin >> cantidadComprar;

    if(opcion == 1) {

        cerveza.cantidad += cantidadComprar;
    }

    else if(opcion == 2) {

        whisky.cantidad += cantidadComprar;
    }

    cout << "Compra realizada.\n";
}