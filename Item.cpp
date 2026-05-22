#include <iostream>
#include "Item.h"

using namespace std;

Item::Item() {

    nombre = "Item";
    precio = 0;

}

void Item::usar() {

    cout << "Usando item" << endl;

}