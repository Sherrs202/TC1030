#ifndef PERSONA_H
#define PERSONA_H

#include <string>

using namespace std;

class Persona {

protected:

    string nombre;
    int vida;

public:

    Persona();

    void setNombre(string n);

    string getNombre();

    void mostrarInfo();

    void accion();

};

#endif