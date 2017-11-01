/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdemeshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 17:33:12 by vdemeshk          #+#    #+#             */
/*   Updated: 2017/11/01 17:33:21 by vdemeshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {
	std::cout<<"HumanB created"<<std::endl;
}

HumanB::~HumanB() {
	std::cout<<"HumanB deleted"<<std::endl;
}

void HumanB::attack() const {
	std::cout<<_name<<" attacks with his "<<_weapon->getType()<<std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
	_weapon = &weapon;
}

