#ifndef INVENTARIO_H
#define INVENTARIO_H

#include <iostream>
#include <vector>
#include "Item.h"

class Inventario {
private:
    std::vector<Item> items;

public:
    Inventario();

    void agregarItem(const Item& item);
    void eliminarItem(const std::string& nombre);
    void mostrarItems() const;
};

#endif // INVENTARIO_H