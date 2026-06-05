#include <ctime>
#include <cstdlib>
#include "Juego.h"

int main() {

    srand(time(0));

    Juego juego;

    juego.menu();

    return 0;
}
