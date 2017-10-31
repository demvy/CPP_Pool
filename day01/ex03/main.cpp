
#include "ZombieChorde.hpp"
#include "Zombie.hpp"

int		main(void)
{
	ZombieChorde* chorde = new ZombieChorde(10);

	srand(time(0));
	chorde->announce();
	delete chorde;
	return (0);
}