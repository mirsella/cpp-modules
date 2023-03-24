/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:16:49 by lgillard          #+#    #+#             */
/*   Updated: 2023/03/24 10:36:15 by lgillard         ###   ########.fr       */
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
	if (ask_user("your first name", &firstName))
		return 1;
	if (ask_user("your last name", &lastName))
		return 1;
	if (ask_user("your nick name", &nickName))
		return 1;
	if (ask_user("your phone number", &phoneNumber))
		return 1;
	if (ask_user("your darkest secret", &darkestSecret))
		return 1;
	return 0;
}

void Contact::print()
{
	std::cout << "First name: " << firstName << std::endl;
	std::cout << "Last name: " << lastName << std::endl;
	std::cout << "Nickname: " << nickName << std::endl;
	std::cout << "Phone number: " << phoneNumber << std::endl;
	std::cout << "Darkest secret: " << darkestSecret << std::endl;
}
