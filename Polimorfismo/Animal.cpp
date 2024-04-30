#include "Animal.h"
Animal::Animal(const Animal &rhs){
    gender = rhs.gender;
    name = rhs.name;
    age = rhs.age;
    height = rhs.height;
    weight = rhs.weight;

};

Animal::Animal(std::string gender, std::string name, int age, float height, float weight){
    this-> gender = gender;
    this-> name = name;
    this-> age = age;
    this-> height = height;
    this-> weight = weight;
};

std::string Animal::getGender() const {
    return gender;
}
void Animal::setGender(std::string gender) {
    this-> gender = gender;
}

std::string Animal::getName() const {
    return name;
}
void Animal::setName(std::string name) {
    this->name = name;
}

int Animal::getAge() const {
    return age;
}
void persona::setAge(int age){
    this->age = age;
}

float persona::getHeight() const {
    return height;
}
void persona::setHeight(float height) {
    this->height = height;
}

float persona::getWeight() const {
    return weight;
}
void persona::setWeight(float weight) {
    this->weight = weight;
}