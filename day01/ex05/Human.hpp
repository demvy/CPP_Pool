
#ifndef HUMAN_H
# define HUMAN_H

#include <iostream>
#include <string>
#include "Brain.hpp"

class Human {
	private:
		Brain _brain;
	public:
		Human(void);
		~Human(void);
		std::string identify() const;
		const Brain &getBrain();
};

#endif
