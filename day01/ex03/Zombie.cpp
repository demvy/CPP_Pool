
#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type) {}

Zombie::~Zombie(void) {}

void Zombie::announce(void) const {
	std::cout<<"<"<<_name<<" ("<<_type<<")> Aaaaaaaaaa..."<<std::endl;
}

void Zombie::setType(std::string const &type) {
	_type = type;
}

void Zombie::setName(std::string const &name) {
	_name = name;
}
