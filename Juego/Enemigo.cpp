#include "Enemigo.h"
#include <iostream>
Enemigo::Enemigo(){

    this -> arma = "N/A";
    this -> armadura = "N/A";

}

Enemigo::Enemigo(int fuerza, int vida, int nivel, std::string nombre, std::string arma, std::string armadura){

    this -> arma = arma;
    this -> armadura = armadura;
}

std::string Enemigo::getArma() const {
    return arma;
}

void Enemigo::setArma(std::string clase) {
    arma = arma;
}

std::string Guerrero::getArmadura() const {
    return armadura;
}

void Guerrero::setArmadura(std::string armadura) {
    armadura = armadura;
}