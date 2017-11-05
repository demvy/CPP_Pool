
#include "Peon.hpp"

Peon::Peon() : Victim() {
    std::cout<<"Zog zog."<<std::endl;
}

Peon::Peon(std::string _name) : Victim(_name) {
    std::cout<<"Zog zog."<<std::endl;
}

Peon::Peon(const Peon &obj) : Victim(obj) {
    std::cout<<"Zog zog."<<std::endl;
}

Peon::~Peon() {
    std::cout<<"Bleuark..."<<std::endl;
}

Peon& Peon::operator=(const Peon &obj) {
    name = obj.name;
    return (*this);
}

void Peon::getPolymorphed() const {
    std::cout<<name<<" has been turned into a pink pony !"<<std::endl;
}