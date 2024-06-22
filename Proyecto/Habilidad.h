#ifndef HABILIDAD_H
#define HABILIDAD_H

#include <iostream>
#include <string>

class Habilidad {
protected:
    std::string nombre;
    int potencia;
    int costoMana;

public:
    Habilidad(std::string nombre, int potencia, int costoMana);
    virtual ~Habilidad();

    virtual void usar() const = 0; // Método virtual puro
    virtual void mostrar() const;
};

#endif // HABILIDAD_H