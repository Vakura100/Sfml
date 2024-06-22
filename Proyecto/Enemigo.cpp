#include "Enemigo.h"

Enemigo::Enemigo(std::string nombre, int ataque, int defensa, int salud)
        : Entidad(nombre, ataque, defensa, salud) {}

void Enemigo::mostrar() const {
    std::cout << "Enemigo:" << std::endl;
    Entidad::mostrar();
    std::cout << "--------------------------" << std::endl;
}