/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdemeshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 17:24:33 by vdemeshk          #+#    #+#             */
/*   Updated: 2017/11/01 17:24:40 by vdemeshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
# define HUMAN_H

#include <iostream>
#include <string>
#include "Brain.hpp"

class Human {
	private:
		Brain _brain;
	public:
		Human(void);
		~Human(void);
		std::string identify() const;
		const Brain &getBrain();
};

#endif

