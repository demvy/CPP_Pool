/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdemeshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 13:03:40 by vdemeshk          #+#    #+#             */
/*   Updated: 2017/10/31 13:03:49 by vdemeshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <string>
# include <iostream>
# include <iomanip>

class Contact {

public:
	void addContactInfo(void);
	void showInfo(int index);
	void printContact(void);
	
private:
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string login;
	std::string postalAddress;
	std::string emailAddress;
	std::string phoneNumber;
	std::string birthday;
	std::string favouriteMeal;
	std::string underwearColor;
	std::string darkSecret;
};

#endif

