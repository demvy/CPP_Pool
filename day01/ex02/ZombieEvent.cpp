
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() {}

ZombieEvent::~ZombieEvent() {}

void ZombieEvent::setZombieType(Zombie *zombie)
{
	std::string types[] = {"undead", "flying", "walking", "armored"};
	std::string type;

	type = types[rand() % 4];
	std::cout<<"Setting type for zombie: "<<type<<std::endl;
	zombie->setType(type);
}

Zombie* ZombieEvent::newZombie(std::string name){
	Zombie *zombie = new Zombie(name);
	setZombieType(zombie);
	return (zombie);
}