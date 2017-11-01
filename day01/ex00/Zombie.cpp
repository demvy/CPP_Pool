/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdemeshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 17:17:47 by vdemeshk          #+#    #+#             */
/*   Updated: 2017/11/01 17:17:53 by vdemeshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {}

Zombie::~Zombie(void) {}

Zombie::announce(void) {
	std::cout<<"<"<<_name<<" ("<<_type<<")> Aaaaaaaaaa..."<<std::endl;
}

void Zombie::setType(std::string const &type) {
	_type = type;
}

