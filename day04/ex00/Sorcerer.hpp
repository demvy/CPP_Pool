
#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"
#include "Peon.hpp"

class Sorcerer {
    private:
        std::string name;
        std::string title;
    public:
        Sorcerer();
        Sorcerer(std::string _name, std::string _type);
        Sorcerer(const Sorcerer &obj);
        Sorcerer &operator=(const Sorcerer &obj);
        ~Sorcerer();
        std::ostream introduce() const;
        void polymorph(Victim const &victim) const;
        std::string getName() const;
        std::string getTitle() const;
    //void polymorph(Peon const &victim) const;
};

std::ostream & operator<<(std::ostream &o, Sorcerer const &obj);

#endif