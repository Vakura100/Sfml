#include "Entidad.h"

Entidad::Entidad(std::string nombre, int ataque, int defensa, int salud)
        : nombre(nombre), ataque(ataque), defensa(defensa), salud(salud) {}

Entidad::~Entidad() {}

void Entidad::mostrar() const {
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Ataque: " << ataque << std::endl;
    std::cout << "Defensa: " << defensa << std::endl;
    std::cout << "Salud: " << salud << std::endl;
}

void Entidad::recibirDanio(int cantidad) {
    // Reducir la salud según la cantidad de daño recibido
    salud -= cantidad;
    if (salud < 0) {
        salud = 0;
    }
}