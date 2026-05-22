#include <iostream>
#include "Persona.h"

using namespace std;

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

void Persona::mostrarInfo() {

    cout << "Nombre: " << nombre << endl;
    cout << "Vida: " << vida << endl;

}

void Persona::accion() {

    cout << "La persona hace una accion" << endl;

}