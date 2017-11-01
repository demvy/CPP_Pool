/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdemeshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 17:21:08 by vdemeshk          #+#    #+#             */
/*   Updated: 2017/11/01 17:21:14 by vdemeshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type) {}

Zombie::~Zombie(void) {}

void Zombie::announce(void) const {
	std::cout<<"<"<<_name<<" ("<<_type<<")> Aaaaaaaaaa..."<<std::endl;
}

void Zombie::setType(std::string const &type) {
	_type = type;
}

void Zombie::setName(std::string const &name) {
	_name = name;
}

