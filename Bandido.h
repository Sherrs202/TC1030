/*
 *
 * Proyecto Taberna
 * Gerardo Silva
 * TC1030 - Programación Orientada a Objetos
 * Fecha: 2026
 * Versión: 1.0
 * Esta clase define un objeto de tipo Bandido que puede
 * aparecer durante el juego e intentar robar dinero al jugador.
 *
 */

#ifndef BANDIDO_H
#define BANDIDO_H

#include "Persona.h"

// Clase que representa a un bandido y hereda de Persona
class Bandido : public Persona {

public:

    // Constructor por default
    Bandido();

        /**
     * Implementa la acción realizada por un bandido.
     */
    void accion() ;

};

#endif
