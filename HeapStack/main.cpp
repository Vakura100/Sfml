#include <iostream>
#include "Persona.h"
#include <memory>
int main(){


    Persona PP("Hombre", "Pablo");
    Persona *P = new Persona("Hombre", "Pablo");
delete P;
    std::unique_ptr<Persona> p1 = std::make_unique<Persona>("Hombre", "Pablo");



    return 0;
}


