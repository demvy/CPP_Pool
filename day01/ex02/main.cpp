
#include "ZombieEvent.hpp"

void	randomChump(void)
{
	ZombieEvent event;
	std::string names[] = {"Jora", "Gena", "Inokentiy", "Afanasiy", "Matvey"};
	std::string name;

	name = names[rand() % 5];
	Zombie* zombie = event.newZombie(name);
	zombie->announce();
	delete zombie;
}

int		main(void)
{
	srand(time(0));
	randomChump();
	return (0);
}