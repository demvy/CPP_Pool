
#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>

class FragTrap
{
private:
	int hp;
	static const max_hp = 100;
	int energy;
	static const max_energy = 100;
	int level;
	
public:
	FragTrap();
	~FragTrap();
	
};

#endif