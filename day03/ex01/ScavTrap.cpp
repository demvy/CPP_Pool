
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	hp = 100;
	energy = 50;
	level = 1;
	name = "default";
	std::cout<<"ScavTrap Default constructor called"<<std::endl;
}

ScavTrap::ScavTrap(std::string robo_name) : name(robo_name) {
	hp = 100;
	energy = 50;
	level = 1;
	std::cout<<"ScavTrap constructor with param NAME for robot "<<robo_name<<std::endl;
}

int ScavTrap::getHP() const {
	return hp;
}

int ScavTrap::getEnergy() const {
	return energy;
}

int ScavTrap::getLevel() const {
	return level;
}

const std::string& ScavTrap::getName() const {
	return name;
}

ScavTrap::ScavTrap(ScavTrap const &obj) {
	hp = obj.getHP();
	energy = obj.getEnergy();
	level = obj.getLevel();
	name = obj.getName();
	std::cout<<"ScavTrap copy onstructor for robot "<<name<<std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout<<"Delete robot ScavTrap "<<name<<std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &obj) {
	hp = obj.getHP();
	energy = obj.getEnergy();
	level = obj.getLevel();
	name = obj.getName();
	std::cout<<"ScavTrap Operator = called for robot "<<name<<std::endl;
	return (*this);
}

void ScavTrap::setHP(int _hp) {
	hp = _hp;
}

void ScavTrap::setEnergy(int en) {
	energy = en;
}

void ScavTrap::setLevel(int lv) {
	level = lv;
}

void ScavTrap::setName(const std::string &_name) {
	name = _name;
}

bool ScavTrap::isDead() const {
	return (hp <= 0);
}

bool ScavTrap::haveEnoughEnergy(int action_energy) const {
	return (energy >= action_energy);
}

void ScavTrap::takeDamage(unsigned int amount) {
	hp -= amount - arm_reduce_damage;
	if (isDead())
	{
		std::cout<<name<<" destroyed ScavTrap!"<<std::endl;
		hp = 0;
	}
	else
		std::cout<<name<<" hp = "<<hp<<std::endl;
}

void ScavTrap::wasteEnergy(int amount) {
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

void ScavTrap::rangedAttack(std::string const &target) {
	if (!isDead() && haveEnoughEnergy(ATTACK_ENERGY))
	{
		std::cout<<"ScavTrap FR4G-TP "<<name<<" attacks "<<target<<" at range, causing "
		         <<range_damage-arm_reduce_damage<<" points of damage !"<<std::endl;
		level++;
		takeDamage(range_damage);
		wasteEnergy(ATTACK_ENERGY);
	}
	else
		std::cout<<"Not enough energy to make ranged attack!"<<std::endl;
}

void ScavTrap::maleeAttack(std::string const &target) {
	if (!isDead() && haveEnoughEnergy(ATTACK_ENERGY))
	{
		std::cout<<"ScavTrap FR4G-TP "<<name<<" attacks "<<target<<" with malee, causing "
		         <<hand_damage-arm_reduce_damage<<" points of damage !"<<std::endl;
		level++;
		takeDamage(hand_damage);
		wasteEnergy(ATTACK_ENERGY);
	}
	else
		std::cout<<"Not enough energy to make malee attack!"<<std::endl;
}

void ScavTrap::beRepaired(unsigned int amount) {
	if (!isDead() && haveEnoughEnergy(REPAIR_ENERGY))
	{
		wasteEnergy(REPAIR_ENERGY);
		hp += amount;
		if (hp > max_hp)
			hp = 100;
		std::cout<<"Repairing ScavTrap "<<name<<" on amount "<<amount<<std::endl;
		std::cout<<"New hp of "<<name<<" = "<<hp<<std::endl;
	}
	else
		std::cout<<"Not enough energy to be repaired!"<<std::endl;
}

void ScavTrap::ramAttack(std::string const &target) {
	if (!isDead() && haveEnoughEnergy(ATTACK_ENERGY))
	{
		std::cout<<"ScavTrap FR4G-TP "<<name<<" attacks "<<target<<" with ram, causing "
		         <<ram_damage-arm_reduce_damage<<" points of damage !"<<std::endl;
		level++;
		takeDamage(ram_damage);
		wasteEnergy(ATTACK_ENERGY);
	}
	else
		std::cout<<"Not enough energy to make ram attack!"<<std::endl;
}

void ScavTrap::sniperAttack(std::string const &target) {
	if (!isDead() && haveEnoughEnergy(ATTACK_ENERGY))
	{
		std::cout<<"ScavTrap FR4G-TP "<<name<<" attacks "<<target<<" with sniper, causing "
		         <<sniper_damage-arm_reduce_damage<<" points of damage !"<<std::endl;
		level++;
		takeDamage(sniper_damage);
		wasteEnergy(ATTACK_ENERGY);
	}
	else
		std::cout<<"Not enough energy to make malee attack!"<<std::endl;
}

void ScavTrap::magnetAttack(std::string const &target) {
	if (!isDead() && haveEnoughEnergy(ATTACK_ENERGY))
	{
		std::cout<<"ScavTrap FR4G-TP "<<name<<" attacks "<<target<<" with magnet, causing "
		         <<hand_damage-arm_reduce_damage<<" points of damage !"<<std::endl;
		level++;
		takeDamage(hand_damage);
		wasteEnergy(ATTACK_ENERGY);
	}
	else
		std::cout<<"Not enough energy to make magnet attack!"<<std::endl;
}

void ScavTrap::challengeNewcomer() {
	std::string challenges[] = {"Talk like R2D2", "Dance tektonic", "Say bullshit 5 minutes without stop",
								"Push all tasks in day", "Write 200 unnecessary rows of code"};
	int index = rand() % 5;
	for(int i = 0; i < 5; i++)
	{
		if (i == index)
		{
			std::cout<<"Choosen challenge = "<<challenges[i]<<std::endl;
			break;
		}
	}
}

void ScavTrap::printPrivate() {
	std::cout<<std::endl<<"{ name="<<name<<std::endl;
	std::cout<<" HP = "<<hp<<std::endl;
	std::cout<<" ENERGY = "<<energy<<std::endl;
	std::cout<<" LVL = "<<level<<" }"<<std::endl<<std::endl;
}