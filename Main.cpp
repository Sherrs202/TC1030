/*
 *
 * Proyecto Taberna
 * Gerardo Silva
 * TC1030 - Programación Orientada a Objetos
 * Fecha: 2026
 * Versión: 1.0
 * Archivo principal que contiene la función main y da inicio
 * a la ejecución del programa.
 *
 */

#include <ctime>
#include <cstdlib>
#include "Juego.h"

int main() {

    // Inicializa la semilla para números aleatorios
    srand(time(0));

    // Crea el objeto principal del juego
    Juego juego;

    // Inicia el menú principal
    juego.menu();

    return 0;

}
