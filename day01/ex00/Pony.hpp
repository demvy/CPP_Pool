/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdemeshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 17:17:04 by vdemeshk          #+#    #+#             */
/*   Updated: 2017/11/01 17:17:34 by vdemeshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H

#include <iostream>
#include <string>

class Pony {

	private:
		std::string	_name;
		int			_age;
		int			_weight;

	public:
		Pony(std::string name = "MegaPony", int age = 3, int weight = 60);
		~Pony(void);
		void setPonyName(std::string const &name);
		void setPonyAge(int age);
		void setPonyWeight(int weight);
		std::string getPonyName(void) const;
		int getPonyAge(void) const;
		int getPonyWeight(void) const;
};

#endif

