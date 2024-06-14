//
// Created by Alumnos on 13/06/2024.
//

#ifndef REFERENCIAS_MAGO_H
#define REFERENCIAS_MAGO_H
#include <string>
#include"PersonajeVideojuego.h"
#include "Inventario.h"
class mago : public PersonajeVideojuego, public Inventario {

public:
    mago();
    mago(const mago &rhs);
    mago(int fuerza, int vida, int nivel, std::string nombre, int mana, std::string clase);
    ~mago();


    int getMana() const;
    void setMana(int mana);

    std::string getClase () const;
    void setClase(std::string clase);

private:

    int mana;
    std::string clase;

};


#endif //REFERENCIAS_MAGO_H
