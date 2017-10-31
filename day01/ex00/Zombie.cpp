
#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {}

Zombie::~Zombie(void) {}

Zombie::announce(void) {
	std::cout<<"<"<<_name<<" ("<<_type<<")> Aaaaaaaaaa..."<<std::endl;
}

void Zombie::setType(std::string const &type) {
	_type = type;
}
