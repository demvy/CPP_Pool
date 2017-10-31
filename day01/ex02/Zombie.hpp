
#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>

class Zombie {
	private:
		std::string _name;
		std::string _type;
	public:
		Zombie(std::string name = "Zombie1");
		~Zombie(void);
		void announce(void) const;
		void setType(std::string const &type);
};

#endif
