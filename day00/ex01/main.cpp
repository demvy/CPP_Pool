/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdemeshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 13:04:28 by vdemeshk          #+#    #+#             */
/*   Updated: 2017/10/31 13:04:37 by vdemeshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

void	search(int index, Contact *contacts)
{
	std::string input;

	std::cout<<std::setw(10)<<"input"<<"|";
	std::cout<<std::setw(10)<<"first name"<<"|";
	std::cout<<std::setw(10)<<"last name"<<"|";
	std::cout<<std::setw(10)<<"nickname"<<"|";
	std::cout<<std::endl;
	for (int j = 0; j < index; j++)
		contacts[j].showInfo(j);
	std::getline(std::cin, input);
	if (std::cin.eof())
	{
		std::cout<<"Invalid character!"<<std::endl;
		exit(0);
	}
	try
	{
		int j = std::stoi(input);
		if (j < index)
			contacts[j].printContact();
		else
			std::cout<<"Index does not exist"<<std::endl;
	}
	catch (...)
	{
		std::cout<<"Wrong input!Index is string!"<<std::endl;
	}
}

int		main(void)
{
	std::string	input;
	Contact		contacts[8];
	int			index = 0;

	std::cout<<std::string(80, 42)<<std::endl<<std::endl;
	std::cout<<"Phonenumber book created"<<std::endl<<std::endl;
	std::cout<<std::string(80, 42)<<std::endl<<std::endl;
	while (1)
	{
		std::cout<<"Commands to use: ADD, EXIT, SEARCH"<<std::endl;
		std::cout<<"Enter your command:"<<std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cout<<"Invalid character!"<<std::endl;
			return (0);
		}
		if (input == "EXIT")
			return (0);
		else if (input == "ADD")
		{
			if (index < 8)
			{
				contacts[index].addContactInfo();
				index++;
			}
			else
				std::cout<<"contact book is full"<<std::endl;
		}
		else if (input == "SEARCH")
			search(index, contacts);
		else
			std::cout<<"./contactBook: Command not found"<<std::endl;
	}
	return (0);
}

