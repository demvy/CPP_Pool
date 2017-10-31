
#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie {
	private:
		std::string _name;
		std::string _type;
	public:
		Zombie(std::string name = "Tom", std::string type = "walking");
		~Zombie(void);
		void announce(void) const;
		void setType(std::string const &type);
		void setName(std::string const &name);
};

#endif