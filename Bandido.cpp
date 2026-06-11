#include <iostream>
#include "Bandido.h"

using namespace std;

// Constructor por default de la calse Bandido
Bandido::Bandido() {

    nombre = "Bandido";

}

/**
 * Muestra la acción realizada por un bandido
*/
void Bandido::accion() {

    cout << "El bandido intenta robarte." << endl;

}
