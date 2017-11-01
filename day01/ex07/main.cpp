/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdemeshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 17:34:58 by vdemeshk          #+#    #+#             */
/*   Updated: 2017/11/01 17:35:05 by vdemeshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <locale>

std::string getUpperFilename(char  *name)
{
	std::locale loc;

	std::string filename = std::string(name);
	for (std::string::size_type i = 0; i < filename.size(); i++)
		filename[i] = std::toupper(filename[i], loc);
	return (filename);
}

void replace(char *argv[])
{
	std::ifstream if1(argv[1]);
	
	if (if1.good())
	{
		std::string line;
		std::string s2 = std::string(argv[3]);
		std::string s1 = std::string(argv[2]);
		if (s1.empty() || s2.empty())
		{
			std::cout<<"String s1 or s2 is empty. Exiting!"<<std::endl;
			return ;
		}
		std::ofstream of1(getUpperFilename(argv[1]) + ".replace");
		if (of1.good())
		{
			while (std::getline(if1, line))
			{
				size_t index = 0;
				while ((index = line.find(s1, index)) != std::string::npos)
				{
					line.replace(index, s1.size(), s2);
					index += s2.size();
				}
				of1<<line<<std::endl;
			}
			if1.close();
			of1.close();
		}
		else
		{
			std::cout<<"Output file doesn't open"<<std::endl;
			if1.close();
		}
	}
	else
	{
		std::cout<<"File doesn't exist"<<std::endl;
		return ;
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 4)
		replace(argv);
	else if (argc < 4)
		std::cout<<"Too few arguments given"<<std::endl;
	else if (argc > 4)
		std::cout<<"Too many arguments given"<<std::endl;
	return (0);	
}

