/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdemeshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 17:33:43 by vdemeshk          #+#    #+#             */
/*   Updated: 2017/11/01 17:33:48 by vdemeshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {
	std::cout<<"Weapon created, type = "<<_type<<std::endl;
}

Weapon::~Weapon() {
	std::cout<<"Weapon deleted"<<std::endl;
}

const std::string &Weapon::getType() {
	return _type;
}

void Weapon::setType(std::string type) {
	_type = type;
}

