

#include "Mago.h"

mago::mago(){

    this -> mana = 0;
    this -> clase = "N/A";

}

mago::mago(int fuerza, int vida, int nivel, std::string nombre, int mana, std::string clase){

    this -> mana = mana;
    this -> clase = clase;
}

int mago::getMana() const {
    return mana;
}

void mago::setMana(int mana) {
    mana = mana;
}

std::string mago::getClase() const {
    return clase;
}

void mago::setClase(std::string clase) {
    clase = clase;
}