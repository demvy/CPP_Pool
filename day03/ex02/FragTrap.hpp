
#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include <ctime>
# include "stdlib.h"
# include "ClapTrap.hpp"
# define ATTACK_ENERGY 25
# define REPAIR_ENERGY 15

class FragTrap : virtual public ClapTrap
{
private:
	static const int max_energy = 100;
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
    void vaulthunter_dot_exe(std::string const &target);
};

#endif