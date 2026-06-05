#include <iostream>
#include "Cliente.h"

using namespace std;

Cliente::Cliente() {

    nombre = "Cliente";

}

void Cliente::accion() {

    cout << "El cliente quiere comprar una bebida." << endl;

}
