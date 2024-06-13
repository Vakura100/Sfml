

#include "Inventario.h"
#include <iostream>
#include <algorithm>

void Inventario::agregarObjetos(const std::string& objetos) {
    Objetos.push_back(objetos);
    std::cout << "Objeto \"" << objetos << "\" agregado al iventario." << std::endl;
}

void Inventario::eliminarObjetos(const std::string& objetos) {
    auto it:: iterator<...> =std::find(Objetos.begin(), Objetos.end(), val:item);










}