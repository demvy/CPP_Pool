/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdemeshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 17:33:53 by vdemeshk          #+#    #+#             */
/*   Updated: 2017/11/01 17:34:20 by vdemeshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>
# include <string>

class Weapon {
	private:
		std::string _type;
	public:
		Weapon(std::string type = "First");
		~Weapon(void);
		const std::string &getType(void);
		void setType(std::string type);
};

#endif

