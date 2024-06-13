
#ifndef REFERENCIAS_PERSONAJEVIDEOJUEGO_H
#define REFERENCIAS_PERSONAJEVIDEOJUEGO_H
#include <string>


class PersonajeVideojuego {
public:
    PersonajeVideojuego();
    PersonajeVideojuego(const PersonajeVideojuego &rhs);
    PersonajeVideojuego(int fuerza, int vida, int nivel, std::string nombre);
    ~PersonajeVideojuego();

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


#endif //REFERENCIAS_PERSONAJEVIDEOJUEGO_H
