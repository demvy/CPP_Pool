

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <string>
# include <iostream>
# include <iomanip>

class Contact {

public:
	void setFirstName(const std::string &firstName);
	void setLastName(const std::string &lastName);
	void setPhoneNumber(const std::string &phoneNumber);
	void setNickname(const std::string &nickName);
	void setLogin(const std::string &login);
	void setAddress(const std::string &postalAddress);
	void setBirthday(const std::string &birthday);
	void setFavMeal(const std::string &favouriteMeal);
	void setUnderwearColor(const std::string &underwearColor);
	void setDarkSecret(const std::string &darkSecret);
	void setEmailAddress(const std::string &emailAddress);
	void addContactInfo();
	void showInfo(int index);
	const std::string &getFirstName();
	const std::string &getLastName();
	const std::string &getPhoneNumber();
	const std::string &getNickname();
	const std::string &getLogin();
	const std::string &getAddress();
	const std::string &getBirthday();
	const std::string &getFavMeal();
	const std::string &getUnderwearColor();
	const std::string &getDarkSecret();
	const std::string &getEmailAddress();

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