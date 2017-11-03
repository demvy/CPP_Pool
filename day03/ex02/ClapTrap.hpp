
#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
    protected:
        int hp;
        static const int max_hp = 100;
        int energy;
        int level;
        std::string name;
    public:
        ClapTrap();
        ClapTrap(std::string robo_name);
        ClapTrap(ClapTrap const &obj);
        ~ClapTrap();
        ClapTrap & operator=(ClapTrap const &obj);
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
        bool isDead() const;
        bool haveEnoughEnergy(int damage) const;
        void wasteEnergy(int amount);
        void printPrivate(void);
};

#endif