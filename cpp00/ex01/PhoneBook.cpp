/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:34:09 by lgillard          #+#    #+#             */
/*   Updated: 2023/03/27 13:10:20 by lgillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	_nbContacts = 0;
}

void	PhoneBook::printPhoneBook()
{
	int i = 0;
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
	if (_contacts[_nbContacts].fillContact())
		return 1;
	if (_nbContacts < 7)
		_nbContacts++;
	return 0;
}

Contact PhoneBook::getContact(int index)
{
	return _contacts[index % 8];
}

int	PhoneBook::getNbContacts()
{
	return _nbContacts;
}
