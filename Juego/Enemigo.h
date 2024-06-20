
#ifndef JUEGO_ENEMIGO_H
#define JUEGO_ENEMIGO_H

#include <iostream>

class Enemigo {
    Enemigo();

    Enemigo(const Enemigo &rhs);

    Enemigo(int fuerza, int vida, int nivel, std::string nombre, std::string arma, std::string armadura);

    ~Enemigo();

}






#endif //JUEGO_ENEMIGO_H