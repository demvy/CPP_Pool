/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdemeshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 17:21:33 by vdemeshk          #+#    #+#             */
/*   Updated: 2017/11/01 17:21:39 by vdemeshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) {
	std::string names[] = {"Jora", "Gena", "Inokentiy", "Afanasiy", "Matvey"};

	srand(time(0));
	if (n > 0)
	{
		chorde = new Zombie[n];
		size = n;
		for (int i = 0; i < n; i++)
			chorde[i].setName(names[rand() % 5]);
	}
	else
	{
		chorde = new Zombie[0];
		size = 0;
		std::cout<<"Number have to be greater than 0"<<std::endl;
	}
}

ZombieHorde::~ZombieHorde() {
	delete [] chorde;
}

void ZombieHorde::announce() const {
	for (int i = 0; i < size; i++)
		chorde[i].announce();
}
