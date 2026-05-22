#include <iostream>
#include "Cliente.h"

using namespace std;

Cliente::Cliente() {

}

void Cliente::pedir() {

    cout << nombre << " pidio una bebida" << endl;

}

void Cliente::accion() {

    pedir();

}