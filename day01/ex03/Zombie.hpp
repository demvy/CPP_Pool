/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdemeshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 17:21:19 by vdemeshk          #+#    #+#             */
/*   Updated: 2017/11/01 17:21:26 by vdemeshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie {
	private:
		std::string _name;
		std::string _type;
	public:
		Zombie(std::string name = "Tom", std::string type = "walking");
		~Zombie(void);
		void announce(void) const;
		void setType(std::string const &type);
		void setName(std::string const &name);
};

#endif

