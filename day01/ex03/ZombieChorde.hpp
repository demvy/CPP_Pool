/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieChorde.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdemeshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 17:21:54 by vdemeshk          #+#    #+#             */
/*   Updated: 2017/11/01 17:22:02 by vdemeshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

