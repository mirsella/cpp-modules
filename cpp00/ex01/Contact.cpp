/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:16:49 by lgillard          #+#    #+#             */
/*   Updated: 2023/03/24 17:23:25 by mirsella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <string>

static int ask_user(std::string key, std::string *value)
{
	std::string	str;

	std::cout << "Please enter " << key << ": ";
	std::getline(std::cin, str);
	if (std::cin.eof())
		return (std::cout << "EOF, exiting" << std::endl, 1);
	if (str.empty())
	{
		if (ask_user(key, value))
			return 1;
	}
	*value = str;
	return 0;
}

int Contact::fillContact(void)
{
	if (ask_user("your first name", &_firstName))
		return 1;
	if (ask_user("your last name", &_lastName))
		return 1;
	if (ask_user("your nick name", &_nickName))
		return 1;
	if (ask_user("your phone number", &_phoneNumber))
		return 1;
	if (ask_user("your darkest secret", &_darkestSecret))
		return 1;
	return 0;
}

void Contact::print()
{
	std::cout << "First name: " << _firstName << std::endl;
	std::cout << "Last name: " << _lastName << std::endl;
	std::cout << "Nickname: " << _nickName << std::endl;
	std::cout << "Phone number: " << _phoneNumber << std::endl;
	std::cout << "Darkest secret: " << _darkestSecret << std::endl;
}

std::string Contact::get_firstName()
{
	return _firstName;
}

std::string Contact::get_lastName()
{
	return _lastName;
}

std::string Contact::get_nickName()
{
	return _nickName;
}

std::string Contact::get_phoneNumber()
{
	return _phoneNumber;
}

std::string Contact::get_darkestSecret()
{
	return _darkestSecret;
}
