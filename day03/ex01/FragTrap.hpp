
#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include <ctime>
# include "stdlib.h"
# define ATTACK_ENERGY 25
# define REPAIR_ENERGY 15

class FragTrap
{
private:
	int hp;
	static const int max_hp = 100;
	int energy;
	static const int max_energy = 100;
	int level;
	std::string name;
	static const int hand_damage = 30;
	static const int range_damage = 20;
	static const int ram_damage = 10;
	static const int sniper_damage = 55;
	static const int arm_reduce_damage = 5;
public:
	FragTrap();
	FragTrap(std::string robo_name);
	FragTrap(FragTrap const &obj);
	~FragTrap();
	FragTrap & operator=(FragTrap const &obj);
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
	void vaulthunter_dot_exe(std::string const &target);
	bool isDead() const;
	bool haveEnoughEnergy(int damage) const;
	void wasteEnergy(int amount);
	void printPrivate(void);
};

#endif