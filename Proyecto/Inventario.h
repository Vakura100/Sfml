
#ifndef REFERENCIAS_INVENTARIO_H
#define REFERENCIAS_INVENTARIO_H

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class Item {

};

class Inventario {
private:
    std::vector<Item> items;

public:
    Inventario() {}

    Inventario(const Inventario &rhs) : items(rhs.items) {}

    ~Inventario() {}


};


#endif //REFERENCIAS_INVENTARIO_H
