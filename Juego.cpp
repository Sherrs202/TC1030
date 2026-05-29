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

        case 6: {

            int salir;

            cout << "\nQuieres salir?" << endl;
            cout << "1. Si" << endl;
            cout << "2. No" << endl;

            cin >> salir;

            if(salir == 1) {

                jugando = false;

                cout << "\nFIN DEL JUEGO" << endl;

                cout << "Llegaste al dia "
                     << dia
                     << endl;

                cout << "Dinero final: $"
                     << jugador.getDinero()
                     << endl;

            }

            break;
        }

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

    cout << "Cantidad: ";
    cin >> cantidad;

    opcion--;

    int costo =
        bebidas[opcion].getPrecioCompra()
        * cantidad;

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

    int opcion;

    cout << "\nUn cliente se acerco..." << endl;

    cout << "\nQuieres vender?" << endl;
    cout << "1. Si" << endl;
    cout << "2. No" << endl;

    cin >> opcion;

    switch(opcion) {

    case 1: {

        int random = rand() % bebidas.size();

        Cliente cliente;

        cliente.setNombre("Cliente");

        Persona* persona = &cliente;

        persona->accion();

        cout << "\nPidio: "
             << bebidas[random].getNombre()
             << endl;

        if(bebidas[random].getCantidad() > 0) {

            bebidas[random].vender();

            jugador.vender(
                bebidas[random].getPrecioVenta()
            );

        }
        else {

            cout << "\nNo queda esa bebida" << endl;

        }

        break;
    }

    case 2:

        cout << "\nEl cliente se fue" << endl;
        break;

    default:

        cout << "\nOpcion invalida" << endl;

    }

}

void Juego::eventoRandom() {

    int evento = rand() % 4;

    switch(evento) {

    case 0:

        cout << "\nNo paso nada hoy" << endl;
        break;

    case 1:

        cout << "\nUn cliente rico compro mucho" << endl;

        jugador.agregarDinero(50);

        break;

    case 2: {

        cout << "\nUn bandido aparecio" << endl;

        Bandido bandido;

        Persona* persona = &bandido;

        persona->accion();

        if(jugador.getArma()) {

            cout << "\nTe defendiste del robo" << endl;

        }
        else {

            cout << "\nTe robaron $50" << endl;

            jugador.comprar(50);

        }

        break;
    }

    case 3:

        cout << "\nLlovio mucho hoy" << endl;
        break;

    }

}
