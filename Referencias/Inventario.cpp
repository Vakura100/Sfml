

#ifndef REFERENCIAS_INVENTARIO_H
#define REFERENCIAS_INVENTARIO_H

#include <iostream>
#include <vector>
#include <string>

// Asumiendo que tienes una clase 'ObjetoVideojuego' que representa los objetos del juego.
#include "ObjetoVideojuego.h"

class Inventario {
private:
    std::vector<ObjetoVideojuego> objetos; // Cambiado de std::string a ObjetoVideojuego para manejar objetos.

public:
    // Constructor por defecto
    Inventario() {}

    // Constructor de copia
    Inventario(const Inventario &rhs) : objetos(rhs.objetos) {}

    // Destructor
    ~Inventario() {}

    // Métodos para manejar el inventario
    void agregarObjeto(const ObjetoVideojuego& nuevoObjeto) {
        objetos.push_back(nuevoObjeto);
    }

    bool removerObjeto(const ObjetoVideojuego& objetoARemover) {
        auto it = std::find_if(objetos.begin(), objetos.end(),
                               &objetoARemover {
                                   return objeto == objetoARemover;
                               });
        if (it != objetos.end()) {
            objetos.erase(it);
            return true;
        }
        return false;
    }

    // Método para obtener la lista de objetos
    const std::vector<ObjetoVideojuego>& obtenerObjetos() const {
        return objetos;
    }
};

#endif // REFERENCIAS_INVENTARIO_H








