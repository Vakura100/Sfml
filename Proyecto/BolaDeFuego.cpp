#include "BolaDeFuego.h"
#include <iostream>

BolaDeFuego::BolaDeFuego(std::string nombre, int potencia, int costoMana, int radio)
        : Habilidad(nombre, potencia, costoMana), radio(radio) {}

void BolaDeFuego::usar() const {
    std::cout << "¡" << nombre << " lanzada! Causa " << potencia << " puntos de daño." << std::endl;

}

void BolaDeFuego::mostrar() const {
    std::cout << "Habilidad: Bola de Fuego" << std::endl;
    Habilidad::mostrar();
    std::cout << "Radio de efecto: " << radio << std::endl;
}
