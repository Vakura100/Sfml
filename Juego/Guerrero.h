//
// Created by memop on 18/06/2024.
//

#ifndef JUEGO_GUERRERO_H
#define JUEGO_GUERRERO_H


#include <string>
#include"PersonajeVideojuego.h"
#include "Inventario.h"

class Guerrero : public PersonajeVideojuego,public Inventario {

    Guerrero();
    Guerrero(const Guerrero &rhs);
    Guerrero(int fuerza, int vida, int nivel, std::string nombre, std::string arma, std::string armadura);
    ~Guerrero();

    std::string getArma () const;
    void setArma(std::string arma);

    std::string getArmadura () const;
    void setArmadura(std::string armadura);

private:
    std::string arma;
    std::string armadura;
};

#endif //JUEGO_GUERRERO_H
