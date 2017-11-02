
#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>

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
	static const int arm_reduct_damage = 5;
public:
	FragTrap();
	FragTrap(FragTrap const &obj);
	~FragTrap();
	FragTrap & operator=(FragTrap const &obj);
	void rangedAttack(std::string const &target);
	void maleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void vaulthunter_dot_exe(std::string const &target);
};

#endif