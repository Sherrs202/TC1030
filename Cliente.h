/*
 *
 * Proyecto Taberna
 * Gerardo Silva
 * TC1030 - Programación Orientada a Objetos
 * Fecha: 2026
 * Versión: 1.0
 * Esta clase define un objeto de tipo Cliente que representa
 * a las personas que visitan la taberna para comprar bebidas.
 *
 */

#ifndef CLIENTE_H
#define CLIENTE_H

#include "Persona.h"

// Clase que representa a un cliente y hereda de Persona
class Cliente : public Persona {

public:

    Cliente();

    /**
     * Implementa la acción realizada por un cliente.
     */
    void accion();

};

#endif
