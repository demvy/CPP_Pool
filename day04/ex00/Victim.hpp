
#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>
#include <string>

class Victim {
    protected:
        std::string name;
    public:
    Victim();
    Victim(std::string _name);
    Victim(const Victim &obj);
    Victim &operator=(const Victim &obj);
    virtual ~Victim();
    std::string getName() const;
    virtual void getPolymorphed() const;
};

std::ostream & operator<<(std::ostream &o, Victim const &obj);

#endif