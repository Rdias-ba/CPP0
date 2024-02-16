/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 20:58:48 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/02/16 15:36:33 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>

void	launch(void)
{
	std::cout << "Bienvenu dans votre PhoneBook !\n" << std::endl;
	std::cout << "*Utiliser 'ADD' pour ajouter un contact" << std::endl;
	std::cout << "*Utiliser 'SEARCH' pour rechercher un contact" << std::endl;
	std::cout << "*Utiliser 'EXIT' pour quitter votre PhoneBook" << std::endl;
	return;
}

int main(void)
{
	PhoneBook phone;
	std::string input;
	launch();
	while (1)
	{
		std::cin >> input;
		if (input == "ADD")
			phone.addContact();
		else if (input == "SEARCH")
			phone.searchContact();
		else if (input == "EXIT")
		{
			std::cout << "Arret en cours ..." << std::endl;
			return (0);
		}
	}
	return (0);
}