#include "Persona.h"

// Constructor por default de la clase Persona
Persona::Persona() {

    nombre = "Sin nombre";
    vida = 100;

}

/**
 * Asigna un nombre a la persona.
 *
 * @param n nuevo nombre de la persona.
 */
void Persona::setNombre(string n) {

    nombre = n;

}

// Regresa el nombre de la persona
string Persona::getNombre() {

    return nombre;

}
