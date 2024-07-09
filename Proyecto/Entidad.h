
#ifndef ENTIDAD_H
#define ENTIDAD_H

#include <iostream>
#include <string>

class Entidad {
protected:
    std::string nombre;
    int ataque;
    int defensa;
    int salud;

public:
    Entidad(std::string nombre, int ataque, int defensa, int salud);
    virtual ~Entidad();

    virtual void mostrar() const;
    virtual void recibirDanio(int cantidad);
};

#endif // ENTIDAD_H