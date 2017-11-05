
#include "Sorcerer.hpp"

Sorcerer::Sorcerer() {
    name = "Panoramix";
    title = "Govnar'";
    std::cout<<name<<", "<<title<<", is born !"<<std::endl;
}

Sorcerer::Sorcerer(std::string _name,std::string _title ) : name(_name), title(_title) {
    std::cout<<_name<<", "<<_title<<", is born !"<<std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &obj) {
    name = obj.name;
    title = obj.title;
    std::cout<<name<<", "<<title<<", is born !"<<std::endl;
}

Sorcerer& Sorcerer::operator=(const Sorcerer &obj) {
    name = obj.name;
    title = obj.title;
    return (*this);
}

Sorcerer::~Sorcerer() {
    std::cout<<name<<", "<<title<<", is dead. Consequences will never be the same !"<<std::endl;
}

std::string Sorcerer::getName() const {
    return name;
}

std::string Sorcerer::getTitle() const {
    return title;
}

std::ostream & operator<<(std::ostream &o, Sorcerer const &obj){
    o << "I am "<<obj.getName()<<", "<<obj.getTitle()<<", and I like ponies !"<<std::endl;
    return o;
}

void Sorcerer::polymorph(Victim const &victim) const {
    victim.getPolymorphed();
}

//void Sorcerer::polymorph(Peon const &victim) const {
//    std::cout<<name<<"polymorphs peon"<<std::endl;
//    victim.getPolymorphed();
//}