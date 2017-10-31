
#ifndef ZOMBIE_CHORDE_H
# define ZOMBIE_CHORDE_H

# include <iostream>
# include <string>
# include <ctime>
# include "Zombie.hpp"

class ZombieChorde {
	private:
		Zombie	*chorde;
		int		size;
	public:
		ZombieChorde(int n);
		~ZombieChorde(void);
		void announce() const;
};

#endif