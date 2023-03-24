/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:08:16 by lgillard          #+#    #+#             */
/*   Updated: 2023/03/24 17:25:06 by lgillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <cstdlib>
#include <iomanip>
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
	else
		*value = str;
	return 0;
}

void	print_size(std::string str, size_t size, int print_separator)
{
	if (str.size() > size)
	{
		std::cout << str.substr(0, size - 1);
		std::cout << ".";
	}
	else
		std::cout << std::right << std::setw(size) << str;
	if (print_separator)
		std::cout << "|";
}

int	searchPhoneBook(PhoneBook pb, int printContacts)
{
	int i = 0;
	std::string input;
	int	index;

	if (printContacts)
	{
		print_size("index", 10, 1);
		print_size("first name", 10, 1);
		print_size("last name", 10, 1);
		print_size("nickname", 10, 0);
		std::cout << std::endl;
		while (i < pb.getNbContacts())
		{
			print_size(std::string(1, i + '0'), 10, 1);
			print_size(pb.getContact(i).get_firstName(), 10, 1);
			print_size(pb.getContact(i).get_lastName(), 10, 1);
			print_size(pb.getContact(i).get_nickName(), 10, 0);
			std::cout << std::endl;
			i++;
		}

	}
	if (ask_user("the index for the contact", &input))
		return 1;
	index = std::atoi(input.c_str());
	if (!std::isdigit(input[0]) || index >= pb.getNbContacts() || index < 0)
	{
		std::cout << "Invalid index" << std::endl;
		searchPhoneBook(pb, 0);
	}
	else
		pb.getContact(index).print();
	return 0;
}

int main ()
{
	PhoneBook pb;
	std::string input;

	while (std::cout << "PhoneBook: " && std::getline(std::cin, input))
	{
		if (std::cin.eof())
			return (std::cout << "EOF, exiting" << std::endl, 0);
		if (input == "EXIT")
			return (std::cout << "Exiting" << std::endl, 0);
		else if (input == "ADD")
		{
			if (pb.newContact())
				return 1;
		}
		else if (input == "SEARCH")
		{
			if (pb.getNbContacts() == 0)
			{
				std::cout << "No contacts in phonebook" << std::endl;
				continue ;
			}
			if (searchPhoneBook(pb, 1))
				return 1;
		}
		else
			std::cout << "Invalid command, please use ADD, SEARCH or EXIT" << std::endl;
	}
	return 0;
}
