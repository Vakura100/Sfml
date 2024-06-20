#include "Inventario.h"


void Inventario::agregarItem(const Item& newItem) {
    items.push_back(newItem);
}

bool Inventario::eliminarItem(const Item& ItemARemove) {
    auto it = std::find_if(items.begin(), items.end(),
                           & {
                                   return item == ItemARemove;
                           });
    if (it != items.end()) {
        items.erase(it);
        return true;
    }
    return false;
}

