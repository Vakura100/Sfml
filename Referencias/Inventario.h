

#ifndef REFERENCIAS_INVENTARIO_H
#define REFERENCIAS_INVENTARIO_H
#include <iostream>
#include <vector>


class Inventario {
private:
    std::vector<std::string > Objetos;
public:

    Inventario();
    Inventario(const Inventario &rhs);
    Inventario(int fuerza, int vida, int nivel, std::string nombre, int mana, std::string clasedf);
    ~Inventario();












};















#endif //REFERENCIAS_INVENTARIO_H
