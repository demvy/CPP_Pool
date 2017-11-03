
#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include <ctime>
# include "stdlib.h"
# include "ClapTrap.hpp"
# define ATTACK_ENERGY 25
# define REPAIR_ENERGY 15

class ScavTrap : virtual public ClapTrap
{
private:
	static const int max_energy = 50;
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
    using ClapTrap::rangedAttack;
    void rangedAttack(std::string const &target);
    using ClapTrap::maleeAttack;
    void maleeAttack(std::string const & target);
    using ClapTrap::ramAttack;
    void ramAttack(std::string const &target);
    using ClapTrap::sniperAttack;
    void sniperAttack(std::string const &target);
    using ClapTrap::magnetAttack;
    void magnetAttack(std::string const &target);
    using ClapTrap::takeDamage;
    void takeDamage(unsigned int amount);
    using ClapTrap::beRepaired;
    void beRepaired(unsigned int amount);
    using ClapTrap::isDead;
    bool isDead() const;
    using ClapTrap::haveEnoughEnergy;
    bool haveEnoughEnergy(int damage) const;
    using ClapTrap::wasteEnergy;
    void wasteEnergy(int amount);
	void challengeNewcomer();
};

#endif