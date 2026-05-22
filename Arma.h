#ifndef ARMA_H
#define ARMA_H

#include "Item.h"

class Arma : public Item {

private:

    int daño;

public:

    Arma();

    void disparar();

};

#endif