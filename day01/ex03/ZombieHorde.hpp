/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdemeshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 17:21:54 by vdemeshk          #+#    #+#             */
/*   Updated: 2017/11/01 17:22:02 by vdemeshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_H
# define ZOMBIE_HORDE_H

# include <iostream>
# include <string>
# include <ctime>
# include "Zombie.hpp"

class ZombieHorde {
	private:
		Zombie	*chorde;
		int		size;
	public:
		ZombieHorde(int n);
		~ZombieHorde(void);
		void announce() const;
};

#endif
