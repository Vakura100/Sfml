#ifndef REFERENCIAS_GUERRERO_H
#define REFERENCIAS_GUERRERO_H

#include <string>
#include"Jugador.h"
#include "Inventario.h"

class Guerrero : public Jugador,public Inventario {

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
#endif //REFERENCIAS_GUERRERO_H
