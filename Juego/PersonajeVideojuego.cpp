#include "PersonajeVideojuego.h"

PersonajeVideojuego::PersonajeVideojuego(){

    this -> fuerza = 0;
    this -> vida = 0;
    this -> nivel = 0;
    this -> nombre = "N/A";

}

PersonajeVideojuego::PersonajeVideojuego(int fuerza, int vida, int nivel, std::string nombre){

    this -> fuerza = fuerza;
    this -> vida = vida;
    this -> nivel = nivel;
    this -> nombre = nombre;
}

int PersonajeVideojuego::getFuerza() const {
    return fuerza;
}

void PersonajeVideojuego::setFuerza(int fuerza) {
    fuerza = fuerza;
}

int PersonajeVideojuego::getvida() const {
    return vida;
}

void PersonajeVideojuego::setvida(int vida) {
    vida = vida;
}

int PersonajeVideojuego::getnivel() const {
    return nivel;
}

void PersonajeVideojuego::setnivel(int nivel) {
    nivel = nivel;
}


std::string PersonajeVideojuego::getnombre() const {
    return nombre;
}

void PersonajeVideojuego::setNombre(std::string nombre) {
    nombre = nombre;
}