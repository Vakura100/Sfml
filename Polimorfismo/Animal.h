//
// Created by BiomedicLJZ on 4/29/2024.
//

#ifndef POLIMORFISMO_ANIMAL_H
#define POLIMORFISMO_ANIMAL_H

#include <string>

class Animal {
public:
    Animal();
    Animal(Animal &rhs);
    Animal(std::string name, float weight);
    virtual ~Animal();

    virtual void makeSound();

    std::string name;
    float weight;