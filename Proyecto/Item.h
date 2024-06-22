#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <string>

class Item {
private:
    std::string nombre;
    std::string tipo;

public:
    Item(std::string nombre, std::string tipo);
    std::string getNombre() const;
    std::string getTipo() const;
};

#endif // ITEM_H