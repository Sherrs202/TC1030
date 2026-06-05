#include "Persona.h"

Persona::Persona() {

    nombre = "Sin nombre";
    vida = 100;

}

void Persona::setNombre(string n) {

    nombre = n;

}

string Persona::getNombre() {

    return nombre;

}
