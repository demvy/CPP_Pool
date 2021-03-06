/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdemeshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 13:02:18 by vdemeshk          #+#    #+#             */
/*   Updated: 2017/10/31 13:02:36 by vdemeshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <locale> 

int	main(int argc, char *argv[])
{
	int i;
	std::locale loc;

	if (argc < 2) {
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
	}
	else {
		i = 1;
		while (i < argc)
		{
			for (std::string::size_type j=0; argv[i][j]; j++)
    			std::cout << std::toupper(argv[i][j], loc);
			i++;
		}
		std::cout<<std::endl;
	}
}

