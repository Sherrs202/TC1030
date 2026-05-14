#include <iostream>
#include <ctime>

#include "Inventario.h"
#include "Cliente.h"

using namespace std;

int main() {

    srand(time(0));

    Inventario inventario;

    // Datos iniciales
    inventario.cerveza.nombre = "Cerveza";
    inventario.cerveza.cantidad = 5;

    inventario.whisky.nombre = "Whisky";
    inventario.whisky.cantidad = 3;

    Cliente cliente;

    int opcion;

    do {

        cout << "\n====== TABERNA ======\n";
        cout << "1. Atender cliente\n";
        cout << "2. Ver inventario\n";
        cout << "3. Comprar bebidas\n";
        cout << "4. Salir\n";

        cin >> opcion;

        switch(opcion) {

            case 1:
                cliente.pedirBebida(inventario);
                break;

            case 2:
                inventario.mostrarInventario();
                break;

            case 3:
                inventario.comprarBebidas();
                break;
        }

    } while(opcion != 4);

    return 0;
};
