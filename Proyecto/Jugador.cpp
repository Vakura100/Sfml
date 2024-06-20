#include "Jugador.h"
#include "Inventario.h"
Jugador::Jugador(){

    this -> fuerza = 0;
    this -> vida = 0;
    this -> nivel = 0;
    this -> nombre = "N/A";

}

Jugador::Jugador(int fuerza, int vida, int nivel, std::string nombre){

    this -> fuerza = fuerza;
    this -> vida = vida;
    this -> nivel = nivel;
    this -> nombre = nombre;
}

int Jugador::getFuerza() const {
    return fuerza;
}

void Jugador::setFuerza(int fuerza) {
    fuerza = fuerza;
}

int Jugador::getvida() const {
    return vida;
}

void Jugador::setvida(int vida) {
    vida = vida;
}

int Jugador::getnivel() const {
    return nivel;
}

void Jugador::setnivel(int nivel) {
    nivel = nivel;
}


std::string Jugador::getnombre() const {
    return nombre;
}

void Jugador::setNombre(std::string nombre) {
    nombre = nombre;
}