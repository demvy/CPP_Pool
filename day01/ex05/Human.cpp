/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdemeshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 17:24:18 by vdemeshk          #+#    #+#             */
/*   Updated: 2017/11/01 17:24:24 by vdemeshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human() {
	Brain mew;
	_brain = mew;
}

Human::~Human() {}

std::string Human::identify() const {
	return _brain.identify();
}

const Brain &Human::getBrain(){
	return _brain;
}

