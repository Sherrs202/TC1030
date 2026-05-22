#include <iostream>
#include <ctime>
#include <cstdlib>

#include "Juego.h"

using namespace std;

int main() {

    srand(time(0));

    Juego juego;

    juego.menu();

    return 0;
}