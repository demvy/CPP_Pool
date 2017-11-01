/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdemeshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 17:22:39 by vdemeshk          #+#    #+#             */
/*   Updated: 2017/11/01 17:22:46 by vdemeshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	std::string str1 = "HI THIS IS BRAIN";
	std::string *str2 = &str1;
	std::string &str3 = str1;

	std::cout << *str2 << std::endl;
	std::cout << str3 << std::endl;
	return (0);
}

