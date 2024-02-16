/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 19:54:10 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/02/16 16:06:34 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string string_upper(std::string strg)
{
	for (size_t i = 0; i < strg.length(); i++)
		strg[i] = toupper(strg[i]);
	return (strg);
}

int	main(int ac, char **av)
{

	if (ac <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1; i < ac; i++)
	{
		std::cout << string_upper(av[i]);
	}
	std::cout << std::endl;
	return (0);
}