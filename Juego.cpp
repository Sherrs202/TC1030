#include <iostream>
#include <cstdlib>

#include "Juego.h"

using namespace std;

Juego::Juego() {

    dia = 1;

    jugador.setNombre("Gerardo");

    bebidas.push_back(Bebida("Coca Cola", 5, 15, 5));
    bebidas.push_back(Bebida("Agua", 3, 10, 5));
    bebidas.push_back(Bebida("Monster", 10, 25, 3));

}

void Juego::menu() {

    int opcion;

    bool jugando = true;

    while(jugando) {

        cout << "\n=========== DIA " << dia << " ===========" << endl;

        cout << "\nDinero: $" << jugador.getDinero() << endl;

        cout << "\n1. Ver inventario";
        cout << "\n2. Comprar bebidas";
        cout << "\n3. Esperar clientes";
        cout << "\n4. Comprar arma ($100)";
        cout << "\n5. Dormir";
        cout << "\n6. Salir";
        cout << "\n\nOpcion: ";

        cin >> opcion;

        switch(opcion) {

        case 1:

            mostrarInventario();
            break;

        case 2:

            comprarBebidas();
            break;

        case 3:

            esperarClientes();
            break;

        case 4:

            if(jugador.getDinero() >= 100) {

                jugador.comprar(100);

                jugador.conseguirArma();

                cout << "\nCompraste un arma" << endl;

            }
            else {

                cout << "\nNo tienes suficiente dinero" << endl;

            }

            break;

        case 5:

            cout << "\nTerminando dia..." << endl;

            dia++;

            eventoRandom();

            break;

        case 6:

            int salir;

            cout << "\nQuieres salir del juego?" << endl;
            cout << "1. Si" << endl;
            cout << "2. No" << endl;

            cin >> salir;

            if(salir == 1) {

                jugando = false;

                cout << "\n=========== FIN DEL JUEGO ===========" << endl;

                cout << "Llegaste hasta el dia " << dia << endl;

                cout << "Dinero final: $" << jugador.getDinero() << endl;

            }

            break;

        default:

            cout << "\nOpcion invalida" << endl;

        }

    }

}

void Juego::mostrarInventario() {

    cout << "\n======= INVENTARIO =======\n";

    for(int i = 0; i < bebidas.size(); i++) {

        cout << i + 1 << ". "
             << bebidas[i].getNombre()
             << " | Cantidad: "
             << bebidas[i].getCantidad()
             << endl;

    }

}

void Juego::comprarBebidas() {

    int opcion;
    int cantidad;

    mostrarInventario();

    cout << "\nQue bebida quieres comprar?: ";
    cin >> opcion;

    cout << "Cuantas quieres comprar?: ";
    cin >> cantidad;

    opcion--;

    int costo = bebidas[opcion].getPrecioCompra() * cantidad;

    if(jugador.getDinero() >= costo) {

        jugador.comprar(costo);

        bebidas[opcion].comprar(cantidad);

        cout << "\nCompra realizada" << endl;

    }
    else {

        cout << "\nNo tienes suficiente dinero" << endl;

    }

}

void Juego::esperarClientes() {

    int vender;

    cout << "\nQuieres vender bebidas?" << endl;
    cout << "1. Si" << endl;
    cout << "2. No" << endl;

    cin >> vender;

    if(vender == 2) {

        cout << "\nDecidiste no vender hoy" << endl;

        return;

    }

    int random = rand() % bebidas.size();

    Cliente cliente;

    cliente.setNombre("Cliente");

    cliente.accion();

    if(bebidas[random].getCantidad() > 0) {

        cout << "Pidio: " << bebidas[random].getNombre() << endl;

        bebidas[random].vender();

        jugador.vender(bebidas[random].getPrecioVenta());

    }
    else {

        cout << "\nNo queda esa bebida" << endl;

    }

}

void Juego::eventoRandom() {

    int evento = rand() % 4;

    switch(evento) {

    case 0:

        cout << "\nNo paso nada hoy" << endl;
        break;

    case 1:

        cout << "\nUn cliente rico llego al negocio" << endl;

        jugador.agregarDinero(50);

        break;

    case 2:

        cout << "\nUn bandido aparecio" << endl;

        if(jugador.getArma()) {

            cout << "Te defendiste del robo" << endl;

        }
        else {

            cout << "Te robaron $50" << endl;

            jugador.comprar(50);

        }

        break;

    case 3:

        cout << "\nLlovio mucho hoy" << endl;
        break;

    }

}