
#include "ZombieChorde.hpp"

ZombieChorde::ZombieChorde(int n) {
	std::string names[] = {"Jora", "Gena", "Inokentiy", "Afanasiy", "Matvey"};

	srand(time(0));
	if (n > 0)
	{
		chorde = new Zombie[n];
		size = n;
		for (int i = 0; i < n; i++)
			chorde[i].setName(names[rand() % 5]);
	}
	else
		std::cout<<"Number have to be greater than 0"<<std::endl;
}

ZombieChorde::~ZombieChorde() {
	delete [] chorde;
}

void ZombieChorde::announce() const {
	for (int i = 0; i < size; i++)
		chorde[i].announce();
}