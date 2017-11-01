/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdemeshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 17:32:11 by vdemeshk          #+#    #+#             */
/*   Updated: 2017/11/01 17:32:16 by vdemeshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &type) : _name(name), _weapon(type) {
	std::cout<<"HumanA created"<<std::endl;
}

HumanA::~HumanA() {
	std::cout<<"HumanA deleted"<<std::endl;
}

void HumanA::attack() const {
	std::cout<<_name<<" attacks with his "<<_weapon.getType()<<std::endl;
}

