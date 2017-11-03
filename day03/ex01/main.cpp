
#include "FragTrap.hpp"

int main(void)
{
	std::cout<<"Start program"<<std::endl;

	srand(time(0));
	FragTrap *a = new FragTrap();
	FragTrap *b = new FragTrap("Ted");
	a->setName("John");
	a->printPrivate();
	b->printPrivate();
	a->rangedAttack(b->getName());
	b->vaulthunter_dot_exe(a->getName());
	b->vaulthunter_dot_exe(a->getName());
	b->vaulthunter_dot_exe(a->getName());
	b->vaulthunter_dot_exe(a->getName());
	b->printPrivate();
	b->vaulthunter_dot_exe(a->getName());
	b->printPrivate();
	b->vaulthunter_dot_exe(a->getName());
	b->printPrivate();
	a->printPrivate();
	b->printPrivate();
	a->beRepaired(120);
	a->printPrivate();
	a->takeDamage(10000000);
	a->printPrivate();
	delete a;
	delete b;
	return (0);
}