#include "Guerrero.h"

Guerrero::Guerrero(){

    this -> arma = "N/A";
    this -> armadura = "N/A";

}

Guerrero::Guerrero(int fuerza, int vida, int nivel, std::string nombre, std::string arma, std::string armadura){

    this -> arma = arma;
    this -> armadura = armadura;
}

std::string Guerrero::getArma() const {
    return arma;
}

void Guerrero::setArma(std::string clase) {
    arma = arma;
}

std::string Guerrero::getArmadura() const {
    return armadura;
}

void Guerrero::setArmadura(std::string armadura) {
    armadura = armadura;
}