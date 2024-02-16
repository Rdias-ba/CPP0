/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 20:56:28 by rdias-ba          #+#    #+#             */
/*   Updated: 2024/02/16 14:12:08 by rdias-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
	public:

		void setprenom(std::string str);
		void setnom(std::string str);
		void setsurnom(std::string str);
		void setnumero(std::string str);
		void setsecret(std::string str);
		
		const std::string&	getprenom(void) const;
		const std::string&	getnom(void) const;
		const std::string&	getsurnom(void) const;
		const std::string&	getnumero(void) const;
		const std::string&	getsecret(void) const;

	private:
	
		std::string	prenom;
		std::string nom;
		std::string surnom;
		std::string numero;
		std::string secret;
};

#endif