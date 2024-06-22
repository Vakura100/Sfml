#ifndef BOLADEFUEGO_H
#define BOLADEFUEGO_H

#include "Habilidad.h"

class BolaDeFuego : public Habilidad {
private:
    int radio;

public:
    BolaDeFuego(std::string nombre, int potencia, int costoMana, int radio);
    void usar() const override;
    void mostrar() const override;
};

#endif // BOLADEFUEGO_H