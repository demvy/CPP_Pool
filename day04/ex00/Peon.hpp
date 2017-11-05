
#ifndef PEON_HPP
# define PEON_HPP

#include "Victim.hpp"

class Peon : virtual public Victim {
    public:
        Peon();
        Peon(std::string _name);
        Peon(const Peon &obj);
        Peon &operator=(const Peon &obj);
        ~Peon();
        void getPolymorphed() const;
};

#endif