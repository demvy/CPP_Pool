/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdemeshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 13:04:09 by vdemeshk          #+#    #+#             */
/*   Updated: 2017/10/31 13:04:21 by vdemeshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

void Contact::addContactInfo(void)
{
	std::string input;

	std::cout<<"Enter data of new user"<<std::endl;
	std::cout<<std::setw(20)<<"first name"<<":";
	std::getline(std::cin, input);
	firstName = input;
	std::cout<<std::setw(20)<<"last name"<<":";
	std::getline(std::cin, input);
	lastName = input;
	std::cout<<std::setw(20)<<"nickname"<<":";
	std::getline(std::cin, input);
	nickName = input;
	std::cout<<std::setw(20)<<"login"<<":";
	std::getline(std::cin, input);
	login = input;
	std::cout<<std::setw(20)<<"postal address"<<":";
	std::getline(std::cin, input);
	postalAddress = input;
	std::cout<<std::setw(20)<<"email address"<<":";
	std::getline(std::cin, input);
	emailAddress = input;
	std::cout<<std::setw(20)<<"phone number"<<":";
	std::getline(std::cin, input);
	phoneNumber = input;
	std::cout<<std::setw(20)<<"birthday"<<":";
	std::getline(std::cin, input);
	birthday = input;
	std::cout<<std::setw(20)<<"favourite meal"<<":";
	std::getline(std::cin, input);
	favouriteMeal = input;
	std::cout<<std::setw(20)<<"underwear color"<<":";
	std::getline(std::cin, input);
	underwearColor = input;
	std::cout<<std::setw(20)<<"darkest secret"<<":";
	std::getline(std::cin, input);
	darkSecret = input;
}

void Contact::showInfo(int index)
{
	std::cout<<std::setw(10)<<index<<"|";
	if (firstName.length() > 9)
		std::cout<<std::setw(10)<<firstName.substr(0, 9) + "."<<"|";
	else
		std::cout<<std::setw(10)<<firstName<<"|";
	if (lastName.length() > 9)
		std::cout<<std::setw(10)<<lastName.substr(0, 9) + "."<<"|";
	else
		std::cout<<std::setw(10)<<lastName<<"|";
	if (nickName.length() > 9)
		std::cout<<std::setw(10)<<nickName.substr(0, 9) + "."<<"|";
	else
		std::cout<<std::setw(10)<<nickName<<"|";
	std::cout<<std::endl;
}

void Contact::printContact(void)
{
	std::cout<<"    first name: "<<firstName<<std::endl;
	std::cout<<"    last name: "<<lastName<<std::endl;
	std::cout<<"    nickname: "<<nickName<<std::endl;
	std::cout<<"    login: "<<login<<std::endl;
	std::cout<<"    postal address: "<<postalAddress<<std::endl;
	std::cout<<"    email address: "<<emailAddress<<std::endl;
	std::cout<<"    phone number: "<<phoneNumber<<std::endl;
	std::cout<<"    birthday date: "<<birthday<<std::endl;
	std::cout<<"    favourite meal: "<<favouriteMeal<<std::endl;
	std::cout<<"    underwear color: "<<underwearColor<<std::endl;
	std::cout<<"    darkest secret: "<<darkSecret<<std::endl;
}

