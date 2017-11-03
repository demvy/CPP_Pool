
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	hp = 100;
	energy = 100;
	level = 1;
	name = "default";
	std::cout<<"Default constructor called"<<std::endl;
}

FragTrap::FragTrap(std::string robo_name) : ClapTrap(robo_name) {
	hp = 100;
	energy = 100;
	level = 1;
	std::cout<<"Constructor with param NAME for robot "<<robo_name<<std::endl;
}

FragTrap::FragTrap(FragTrap const &obj) : ClapTrap(obj) {
	hp = obj.getHP();
	energy = obj.getEnergy();
	level = obj.getLevel();
	name = obj.getName();
	std::cout<<"Copy onstructor for robot "<<name<<std::endl;
}

FragTrap::~FragTrap() {
	std::cout<<"Delete robot "<<name<<std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const &obj) {
	hp = obj.getHP();
	energy = obj.getEnergy();
	level = obj.getLevel();
	name = obj.getName();
	std::cout<<"Operator = called for robot "<<name<<std::endl;
	return (*this);
}

bool FragTrap::isDead() const {
	return (hp <= 0);
}

bool FragTrap::haveEnoughEnergy(int action_energy) const {
	return (energy >= action_energy);
}

void FragTrap::takeDamage(unsigned int amount) {
	hp -= amount - arm_reduce_damage;
	if (isDead())
	{
		std::cout<<name<<" destroyed!"<<std::endl;
		hp = 0;
	}
	else
		std::cout<<name<<" hp = "<<hp<<std::endl;
}

void FragTrap::wasteEnergy(int amount) {
	if (!isDead())
	{
		energy -= amount;
		if (energy < 0)
		{
			energy = 0;
			std::cout<<"Energy is null in robot "<<name<<std::endl;
		}
		else
			std::cout<<"Energy in robot "<<name<<" = "<<energy<<std::endl;
	}
}

void FragTrap::rangedAttack(std::string const &target) {
	if (!isDead() && haveEnoughEnergy(ATTACK_ENERGY))
	{
		std::cout<<"FR4G-TP "<<name<<" attacks "<<target<<" at range, causing "
		         <<range_damage-arm_reduce_damage<<" points of damage !"<<std::endl;
		level++;
		takeDamage(range_damage);
		wasteEnergy(ATTACK_ENERGY);
	}
	else
		std::cout<<"Not enough energy to make ranged attack!"<<std::endl;
}

void FragTrap::maleeAttack(std::string const &target) {
	if (!isDead() && haveEnoughEnergy(ATTACK_ENERGY))
	{
		std::cout<<"FR4G-TP "<<name<<" attacks "<<target<<" with malee, causing "
		         <<hand_damage-arm_reduce_damage<<" points of damage !"<<std::endl;
		level++;
		takeDamage(hand_damage);
		wasteEnergy(ATTACK_ENERGY);
	}
	else
		std::cout<<"Not enough energy to make malee attack!"<<std::endl;
}

void FragTrap::beRepaired(unsigned int amount) {
	if (!isDead() && haveEnoughEnergy(REPAIR_ENERGY))
	{
		wasteEnergy(REPAIR_ENERGY);
		hp += amount;
		if (hp > max_hp)
			hp = 100;
		std::cout<<"Repairing "<<name<<" on amount "<<amount<<std::endl;
		std::cout<<"New hp of "<<name<<" = "<<hp<<std::endl;
	}
	else
		std::cout<<"Not enough energy to be repaired!"<<std::endl;
}

void FragTrap::ramAttack(std::string const &target) {
	if (!isDead() && haveEnoughEnergy(ATTACK_ENERGY))
	{
		std::cout<<"FR4G-TP "<<name<<" attacks "<<target<<" with ram, causing "
		         <<ram_damage-arm_reduce_damage<<" points of damage !"<<std::endl;
		level++;
		takeDamage(ram_damage);
		wasteEnergy(ATTACK_ENERGY);
	}
	else
		std::cout<<"Not enough energy to make ram attack!"<<std::endl;
}

void FragTrap::sniperAttack(std::string const &target) {
	if (!isDead() && haveEnoughEnergy(ATTACK_ENERGY))
	{
		std::cout<<"FR4G-TP "<<name<<" attacks "<<target<<" with sniper, causing "
		         <<sniper_damage-arm_reduce_damage<<" points of damage !"<<std::endl;
		level++;
		takeDamage(sniper_damage);
		wasteEnergy(ATTACK_ENERGY);
	}
	else
		std::cout<<"Not enough energy to make malee attack!"<<std::endl;
}

void FragTrap::magnetAttack(std::string const &target) {
	if (!isDead() && haveEnoughEnergy(ATTACK_ENERGY))
	{
		std::cout<<"FR4G-TP "<<name<<" attacks "<<target<<" with magnet, causing "
		         <<hand_damage-arm_reduce_damage<<" points of damage !"<<std::endl;
		level++;
		takeDamage(hand_damage);
		wasteEnergy(ATTACK_ENERGY);
	}
	else
		std::cout<<"Not enough energy to make magnet attack!"<<std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target) {
	void (FragTrap::*attacks[])(std::string const &target) = {&FragTrap::rangedAttack, &FragTrap::maleeAttack,
	                                                          &FragTrap::ramAttack, &FragTrap::sniperAttack, &FragTrap::magnetAttack};
	int index = rand() % 5;
	for(int i = 0; i < 5; i++)
	{
		if (i == index)
		{
			(this->*attacks[i])(target);
			break;
		}
	}
}