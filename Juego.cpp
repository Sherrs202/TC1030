#include <iostream>
#include <cstdlib>

#include "Juego.h"

using namespace std;

Juego::Juego() {

    dia = 1;

    bebidas.push_back(
        Bebida("Coca Cola",5,15,5)
    );

    bebidas.push_back(
        Bebida("Agua",3,10,5)
    );

    bebidas.push_back(
        Bebida("Monster",10,25,3)
    );

}

void Juego::mostrarInventario() {

    cout << "\nInventario\n";

    for(int i=0;i<bebidas.size();i++) {

        cout
        << i+1
        << ". "
        << bebidas[i].getNombre()
        << " Cantidad: "
        << bebidas[i].getCantidad()
        << endl;

    }

}

void Juego::comprarBebidas() {

    int opcion;
    int cantidad;

    mostrarInventario();

    cout << "\nSelecciona bebida: ";
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

        cout << "Compra realizada\n";

    }
    else {

        cout << "Dinero insuficiente\n";

    }

}

void Juego::eventoPersona() {

    Cliente cliente;
    Bandido bandido;

    Persona* persona;

    int tipo = rand() % 2;

    if(tipo == 0) {

        persona = &cliente;

    }
    else {

        persona = &bandido;

    }

    cout << "\n===== EVENTO =====\n" << endl;

    persona->accion();

    // CLIENTE
    if(tipo == 0) {

        int opcion;

        cout << "\n¿Quieres atender al cliente?" << endl;
        cout << "1. Si" << endl;
        cout << "2. No" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        if(opcion == 1) {

            int bebida = rand() % bebidas.size();

            cout << "\nEl cliente pidio: "
                 << bebidas[bebida].getNombre()
                 << endl;

            if(bebidas[bebida].getCantidad() > 0) {

                bebidas[bebida].vender();

                jugador.vender(
                    bebidas[bebida].getPrecioVenta()
                );

                cout << "\nVenta realizada." << endl;

                cout << "Ganaste $"
                     << bebidas[bebida].getPrecioVenta()
                     << endl;

            }
            else {

                cout << "\nYa no queda esa bebida." << endl;

            }

        }
        else {

            cout << "\nEl cliente se fue sin comprar." << endl;

        }

    }

    // BANDIDO
    else {

        int opcion;

        cout << "\n¿Quieres defenderte?" << endl;
        cout << "1. Si" << endl;
        cout << "2. No" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        if(opcion == 1) {

            if(jugador.getArma()) {

                cout << "\nSacaste tu arma." << endl;
                cout << "El bandido huyo." << endl;

            }
            else {

                cout << "\nIntentaste defenderte..." << endl;
                cout << "Pero no tienes arma." << endl;

                cout << "\nEl bandido te robo $50." << endl;

                jugador.comprar(50);

            }

        }
        else {

            cout << "\nDecidiste no defenderte." << endl;

            cout << "El bandido te robo $50." << endl;

            jugador.comprar(50);

        }

    }

}
void Juego::menu() {

    int opcion;

    do {

        cout << "\n======== DIA "
             << dia
             << " ========\n";

        cout
        << "Dinero: $"
        << jugador.getDinero()
        << endl;

        cout << "\n1. Inventario";
        cout << "\n2. Comprar bebidas";
        cout << "\n3. Evento";
        cout << "\n4. Comprar arma";
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

            eventoPersona();
            break;

        case 4:

            if(jugador.getDinero() >= 100) {

                jugador.comprar(100);

                jugador.conseguirArma();

                cout << "Compraste un arma\n";

            }
            else {

                cout << "No tienes dinero suficiente\n";

            }

            break;

        case 5:

            dia++;

            cout << "Terminando dia...\n";

            break;

        }

    } while(opcion != 6);

}
