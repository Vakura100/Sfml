#include "Jugador.h"

Jugador::Jugador(std::string nombre, int ataque, int defensa, int salud)
        : Entidad(nombre, ataque, defensa, salud) {}

void Jugador::agregarItem(const Item& item) {
    inventario.push_back(item);
}

void Jugador::agregarHabilidad(const std::string& habilidad) {
    habilidades.push_back(habilidad);
}

void Jugador::usarHabilidad(const std::string& habilidad) {
    
    std::cout << nombre << " usa la habilidad " << habilidad << "!" << std::endl;
}

void Jugador::mostrar() const {
    std::cout << "Jugador:" << std::endl;
    Entidad::mostrar();
    std::cout << "Inventario:" << std::endl;
    for (const auto& item : inventario) {
        std::cout << "- " << item.getNombre() << " (" << item.getTipo() << ")" << std::endl;
    }
    std::cout << "Habilidades:" << std::endl;
    for (const auto& habilidad : habilidades) {
        std::cout << "- " << habilidad << std::endl;
    }

}
