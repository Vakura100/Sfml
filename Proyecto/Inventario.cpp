
#include "Inventario.h"

Inventario::Inventario() {}

void Inventario::agregarItem(const Item& item) {
    items.push_back(item);
}

void Inventario::eliminarItem(const std::string& nombre) {
    for (auto it = items.begin(); it != items.end(); ++it) {
        if (it->getNombre() == nombre) {
            items.erase(it);
            break; 
        }
    }
}

void Inventario::mostrarItems() const {
    std::cout << "Inventario:" << std::endl;
    for (const auto& item : items) {
        std::cout << "- " << item.getNombre() << " (" << item.getTipo() << ")" << std::endl;
    }
 
}
