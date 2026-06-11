/*
 *
 * Proyecto Taberna
 * Gerardo Silva
 * TC1030 - Programación Orientada a Objetos
 * Fecha: 2026
 * Versión: 1.0
 * Esta clase define un objeto de tipo Persona que sirve como
 * clase base abstracta para los personajes del juego.
 *
 */

#ifndef PERSONA_H
#define PERSONA_H

#include <string>

using namespace std;

// Clase abstracta que representa a una persona dentro del juego
class Persona {

protected:

    // Datos básicos de la persona
    string nombre;
    int vida;

public:

    // Constructor por default
    Persona();

    /**
     * Asigna un nombre a la persona.
     *
     * @param n nuevo nombre de la persona.
     */
    void setNombre(string n);

    // Regresa el nombre de la persona
    string getNombre();

    /**
     * Método abstracto que define una acción.
     *
     * Será implementado por las clases derivadas.
     */
    virtual void accion() = 0;

};

#endif
