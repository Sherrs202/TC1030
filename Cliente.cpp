#include <iostream>
#include "Cliente.h"

using namespace std;

// Constructor por default de la clase Cliente
Cliente::Cliente() {

    nombre = "Cliente";

}

/**
 * Muestra la acción realizada por un cliente.
 */
void Cliente::accion() {

    cout << "El cliente quiere comprar una bebida." << endl;

}
