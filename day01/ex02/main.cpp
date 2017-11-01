/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdemeshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 17:20:17 by vdemeshk          #+#    #+#             */
/*   Updated: 2017/11/01 17:20:23 by vdemeshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void	randomChump(void)
{
	ZombieEvent event;
	std::string names[] = {"Jora", "Gena", "Inokentiy", "Afanasiy", "Matvey"};
	std::string name;

	name = names[rand() % 5];
	Zombie* zombie = event.newZombie(name);
	zombie->announce();
	delete zombie;
}

int		main(void)
{
	srand(time(0));
	randomChump();
	return (0);
}

