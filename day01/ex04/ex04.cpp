
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
