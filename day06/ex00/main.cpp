
#include <iostream>
#include <string>

int main (int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Error: Input one argument!" << std::endl;
		return -1;
	}
	std::string	str = av[1];

	std::string::size_type sz;     // alias of size_t

	try
	{
		char ch = static_cast <char>(std::stoi(str, &sz));
		if (std::isprint(ch))
			std::cout << "char: " << (ch) << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "char: impossible" << std::endl;
	}

	try
	{
		int in = static_cast <int>(std::stoi(str, &sz));
		std::cout << "int: " << (in) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "int: impossible" << std::endl;
	}

	try
	{
		float tmp = std::stof(str);
		if (!(tmp - static_cast<long int>(tmp)))
            std::cout << "float: " << tmp << ".0f" << std::endl;
        else
            std::cout << "float: " << tmp << "f" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "float: impossible" << std::endl;
	}

	try
	{
		double db = static_cast <double>(std::stod(str, &sz));
		if (!(db - static_cast<long long int>(db)))
            std::cout << "double: " << (db) << ".0" << std::endl;
        else
            std::cout << "double: " << (db) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "double: impossible" << std::endl;
	}
	return 0;
}