#include "Persona.h"
#include <iostream>

Persona::Persona(std::string gender, std::string name){
    this->gender=gender;
    this->name=name;
}

Persona::Persona(const Persona &rhs) {
gender = rhs.gender;
name = rhs.name;



}

    Persona::~Persona() {
    std::cout<<"Persona Destruida"<<std::endl;
}