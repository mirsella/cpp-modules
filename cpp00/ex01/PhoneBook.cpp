/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:34:09 by lgillard          #+#    #+#             */
/*   Updated: 2023/03/31 12:11:37 by lgillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	_nbContacts = 0;
}

void	PhoneBook::printPhoneBook()
{
	size_t i = 0;
	while (i < _nbContacts)
	{
		std::cout << "Contact " << i << ":" << std::endl;
		_contacts[i].print();
		std::cout << std::endl;
		i++;
	}
}

int PhoneBook::newContact()
{
	if (_contacts[_nbContacts % 8].fillContact())
		return 1;
	_nbContacts++;
	return 0;
}

Contact PhoneBook::getContact(size_t index)
{
	return _contacts[index % 8];
}

size_t	PhoneBook::getNbContacts()
{
	return _nbContacts;
}
