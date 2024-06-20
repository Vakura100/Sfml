#ifndef REFERENCIAS_JUGADOR_H
#define REFERENCIAS_JUGADOR_H

#include <string>


class Jugador {
public:
    Jugador();
    Jugador(const Jugador &rhs);
    Jugador(int fuerza, int vida, int nivel, std::string nombre);
    ~Jugador();

    virtual void createAtaque();

    int getFuerza() const;
    void setFuerza(int Fuerza);

    int getvida() const;
    void setvida(int vida);

    int getnivel() const;
    void setnivel(int nivel);

    std::string getnombre () const;
    void setNombre(std::string nombre);

private:

    int fuerza;
    int vida;
    int nivel;
    std::string nombre;


};


#endif //REFERENCIAS_JUGADOR_H
