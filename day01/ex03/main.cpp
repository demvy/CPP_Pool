/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdemeshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 17:22:11 by vdemeshk          #+#    #+#             */
/*   Updated: 2017/11/01 17:22:16 by vdemeshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieChorde.hpp"
#include "Zombie.hpp"

int		main(void)
{
	ZombieChorde* chorde = new ZombieChorde(10);

	srand(time(0));
	chorde->announce();
	delete chorde;
	return (0);
}

