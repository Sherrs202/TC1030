#ifndef ITEM_H
#define ITEM_H

#include <string>

using namespace std;

class Item {

protected:

    string nombre;
    int precio;

public:

    Item();

    void usar();

};

#endif