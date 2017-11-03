
#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include <ctime>
# include "stdlib.h"
# define ATTACK_ENERGY 25
# define REPAIR_ENERGY 15

class ScavTrap
{
private:
	int hp;
	static const int max_hp = 100;
	int energy;
	static const int max_energy = 50;
	int level;
	std::string name;
	static const int hand_damage = 20;
	static const int range_damage = 15;
	static const int ram_damage = 10;
	static const int sniper_damage = 55;
	static const int arm_reduce_damage = 3;
public:
	ScavTrap();
	ScavTrap(std::string robo_name);
	ScavTrap(ScavTrap const &obj);
	~ScavTrap();
	ScavTrap & operator=(ScavTrap const &obj);
	int getHP(void) const;
	int getEnergy(void) const;
	int getLevel(void) const;
	const std::string &getName(void) const;
	void setHP(int _hp);
	void setEnergy(int en);
	void setLevel(int lv);
	void setName(const std::string &_name);
	void rangedAttack(std::string const &target);
	void maleeAttack(std::string const & target);
	void ramAttack(std::string const &target);
	void sniperAttack(std::string const &target);
	void magnetAttack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void challengeNewcomer(void);
	bool isDead() const;
	bool haveEnoughEnergy(int damage) const;
	void wasteEnergy(int amount);
	void printPrivate(void);
};

#endif