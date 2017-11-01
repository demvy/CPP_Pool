/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdemeshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 17:19:56 by vdemeshk          #+#    #+#             */
/*   Updated: 2017/11/01 17:20:02 by vdemeshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_H
# define ZOMBIE_EVENT_H

#include <iostream>
#include <string>
#include <ctime>
#include <time.h>
#include "Zombie.hpp"

class ZombieEvent {
	public:
		ZombieEvent();
		~ZombieEvent();
		void setZombieType(Zombie *zombie);
		Zombie* newZombie(std::string name);
};

#endif

