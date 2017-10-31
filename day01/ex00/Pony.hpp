
#ifndef PONY_H
# define PONY_H

#include <iostream>
#include <string>

class Pony {

	private:
		std::string	_name;
		int			_age;
		int			_weight;

	public:
		Pony(std::string name = "MegaPony", int age = 3, int weight = 60);
		~Pony(void);
		void setPonyName(std::string const &name);
		void setPonyAge(int age);
		void setPonyWeight(int weight);
		std::string getPonyName(void) const;
		int getPonyAge(void) const;
		int getPonyWeight(void) const;
};

#endif
