#ifndef ENEMIGO_H
#define ENEMIGO_H

#include "Entidad.h"

class Enemigo : public Entidad {
public:
    Enemigo(std::string nombre, int ataque, int defensa, int salud);
    void mostrar() const override;
};

#endif // ENEMIGO_H