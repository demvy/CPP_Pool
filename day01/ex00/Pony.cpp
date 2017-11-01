/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdemeshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 17:13:54 by vdemeshk          #+#    #+#             */
/*   Updated: 2017/11/01 17:14:15 by vdemeshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name, int age, int weight) : _name(name), _age(age), _weight(weight) {}

Pony::~Pony(void) {}

void Pony::setPonyName(std::string const &name) {
	_name = name;
}

void Pony::setPonyAge(int age) {
	_age = age;
}

void Pony::setPonyWeight(int weight) {
	_weight = weight;
}

std::string Pony::getPonyName(void) const {
	return _name;
}

int Pony::getPonyAge(void) const {
	return _age;
}

int Pony::getPonyWeight(void) const {
	return _weight;
}

