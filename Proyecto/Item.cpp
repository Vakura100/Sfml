#include "Item.h"

Item::Item(std::string nombre, std::string tipo)
        : nombre(nombre), tipo(tipo) {}

std::string Item::getNombre() const {
    return nombre;
}

std::string Item::getTipo() const {
    return tipo;
}
