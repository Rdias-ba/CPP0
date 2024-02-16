/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 20:52:25 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/02/16 16:11:23 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include "PhoneBook.hpp"

std::string formated_string(const std::string& str)
{
	if (str.length() > 10)
		return str.substr(0,9) + ".";
	return str;
}

void	display_contact_info(Contact contact)
{
	std::cout << std::endl;
	std::cout << "Prénom: " << contact.getprenom() << std::endl;
	std::cout << "Nom: " << contact.getnom() << std::endl;
	std::cout << "Surnom: " << contact.getsurnom() << std::endl;
	std::cout << "Numéro: " << contact.getnumero() << std::endl;
	std::cout << "Secret: " << contact.getsecret() << std::endl;
	std::cout << std::endl;
}

PhoneBook::PhoneBook(void)
{
	this->count = 0;
	return;	
}

void	PhoneBook::addContact(void)
{
	Contact	newcontact;
	std::string str;

	std::cout << "Prénom : ";
	std::cin >> str;
	newcontact.setprenom(str);
	
	std::cout << "Nom : ";
	std::cin >> str;
	newcontact.setnom(str);
	
	std::cout << "Surnom : ";
	std::cin >> str;
	newcontact.setsurnom(str);
	
	std::cout << "Numéro de téléphone : ";
	std::cin >> str;
	while (str.find_first_not_of("0123456789") != std::string::npos)
	{
		std::cout << "Le numéro de téléphone ne comporte pas que des chiffres !" << std::endl;
		std::cout << "Numéro de téléphone : ";
		std::cin >> str;
	}
	newcontact.setnumero(str);

	std::cout << "Son plus lourd secret : ";
	std::cin >> str;
	newcontact.setsecret(str);
	
	if (count == 8)
		count = 0;
	this->contacts[count] = newcontact;
	this->count++;
	std::cout << "Contact ajouté !" << std::endl;
}

void PhoneBook::searchContact(void)
{
	if (count == 0)
	{
		std::cout << "Il n'y a pas de contact dans votre répertoire" << std::endl;
		return ;
	}
	std::cout << "\n|     Index|    Prénom|       Nom|    Surnom|" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		if (contacts[i].getprenom().empty() == false)
		{
			std::cout << "|" << std::right << std::setw(10) << i << "|";
			std::cout << std::right << std::setw(10) << formated_string(contacts[i].getprenom()) << "|";
			std::cout << std::right << std::setw(10) << formated_string(contacts[i].getnom()) << "|";
			std::cout << std::right << std::setw(10) << formated_string(contacts[i].getsurnom()) << "|";
			std::cout << std::endl;
		}
	}

	std::string index;
	int index_atoi;

	while (1)
	{
		while (1)
		{
			std::cout << "Veuillez rentrer l'index de votre contact: ";
			std::cin >> index;
			if (!index.empty() && index.find_first_not_of("0123456789") == std::string::npos)
			{
				index_atoi = atoi(index.c_str());
				if (index_atoi <= 8)
					break;
			}
			std::cout << "Index invalide !" << std::endl;
		}
		if (index_atoi >= 8 || index_atoi < 0 || contacts[index_atoi].getprenom().empty())
			std::cout << "L'index ne correspond a aucun contact !" << std::endl;
		else
		{
			display_contact_info(this->contacts[index_atoi]);
			std::cout << "Retour au menu principal ..." << std::endl;
			break;
		}
	}
}
