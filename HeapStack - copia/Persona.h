

#ifndef HEAPSTACK_PERSONA_H
#define HEAPSTACK_PERSONA_H

#include <string>



class Persona {
public:

    Persona();
    Persona(std::string gender, std::string name);
    Persona(const Persona &rhs):gender(rhs.gender),name(rhs,name);
    ~Persona();







private:
    std::string gender;
    std::string name;
};


#endif //HEAPSTACK_PERSONA_H
