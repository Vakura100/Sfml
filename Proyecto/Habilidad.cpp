#include "Habilidad.h"

Habilidad::Habilidad(std::string nombre, int potencia, int costoMana)
        : nombre(nombre), potencia(potencia), costoMana(costoMana) {}

Habilidad::~Habilidad() {}

void Habilidad::mostrar() const {
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Potencia: " << potencia << std::endl;
    std::cout << "Costo de Mana: " << costoMana << std::endl;
}