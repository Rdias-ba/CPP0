/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 20:57:18 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/02/16 15:50:50 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Contact.hpp"

void	Contact::setprenom(std::string str)
{
	this->prenom = str;
}

void	Contact::setnom(std::string str)
{
	this->nom = str;
}
void	Contact::setsurnom(std::string str)
{
	this->surnom = str;
}
void	Contact::setnumero(std::string str)
{
	this->numero = str;
}
void	Contact::setsecret(std::string str)
{
	this->secret = str;
}

const std::string& Contact::getprenom(void) const
{
	return (this->prenom);
}

const std::string& Contact::getnom(void) const
{
	return (this->nom);
}

const std::string& Contact::getsurnom(void) const
{
	return (this->surnom);
}

const std::string& Contact::getnumero(void) const
{
	return (this->numero);
}

const std::string& Contact::getsecret(void) const
{
	return (this->secret);
}