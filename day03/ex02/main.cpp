
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

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
	ScavTrap *c = new ScavTrap();
	ScavTrap *d = new ScavTrap("Anna");
	c->setName("Ira");
	c->printPrivate();
	d->printPrivate();
	c->rangedAttack(d->getName());
	d->challengeNewcomer();
	d->challengeNewcomer();
	d->challengeNewcomer();
	d->challengeNewcomer();
	d->printPrivate();
	d->challengeNewcomer();
	d->printPrivate();
	d->challengeNewcomer();
	d->printPrivate();
	c->printPrivate();
	d->printPrivate();
	c->beRepaired(120);
	c->printPrivate();
	c->takeDamage(10000000);
	c->printPrivate();
	delete c;
	delete d;
	return (0);
}