/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdemeshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 17:19:44 by vdemeshk          #+#    #+#             */
/*   Updated: 2017/11/01 17:19:49 by vdemeshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() {}

ZombieEvent::~ZombieEvent() {}

void ZombieEvent::setZombieType(Zombie *zombie)
{
	std::string types[] = {"undead", "flying", "walking", "armored"};
	std::string type;

	type = types[rand() % 4];
	std::cout<<"Setting type for zombie: "<<type<<std::endl;
	zombie->setType(type);
}

Zombie* ZombieEvent::newZombie(std::string name){
	Zombie *zombie = new Zombie(name);
	setZombieType(zombie);
	return (zombie);
}

