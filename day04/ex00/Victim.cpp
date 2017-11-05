
#include "Victim.hpp"

Victim::Victim() : name("victim") {
    std::cout<<"Some random victim called "<<name<<" just popped !"<<std::endl;
}

Victim::Victim(std::string _name) : name(_name) {
    std::cout<<"Some random victim called "<<name<<" just popped !"<<std::endl;
}

Victim::Victim(const Victim &obj) : name(obj.name) {
    std::cout<<"Some random victim called "<<name<<" just popped !"<<std::endl;
}

Victim::~Victim() {
    std::cout<<"Victim "<<name<<"  just died for no apparent reason !"<<std::endl;
}

Victim& Victim::operator=(const Victim &obj) {
    name = obj.name;
    return (*this);
}

void Victim::getPolymorphed() const {
    std::cout<<name<<" has been turned into a cute little sheep !"<<std::endl;
}

std::string Victim::getName() const {
    return name;
}

std::ostream & operator<<(std::ostream &o, Victim const &obj){
    o <<"I'm "<<obj.getName()<<" and I like otters !"<<std::endl;
    return o;
}