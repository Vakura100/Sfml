#ifndef JUGADOR_H
#define JUGADOR_H

#include "Entidad.h"
#include "Item.h"
#include <vector>

class Jugador : public Entidad {
private:
    std::vector<Item> inventario;
    std::vector<std::string> habilidades;

public:
    Jugador(std::string nombre, int ataque, int defensa, int salud);

    void agregarItem(const Item& item);
    void agregarHabilidad(const std::string& habilidad);
    void usarHabilidad(const std::string& habilidad);
    void mostrar() const override;
};

#endif // JUGADOR_H