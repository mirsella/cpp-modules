/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 09:46:24 by lgillard          #+#    #+#             */
/*   Updated: 2023/04/05 10:35:15 by mirsella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal()
{
	_type = "Default WrongAnimal";
	std::cout << "WrongAnimal created with default type" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
	_type = type;
	std::cout << "WrongAnimal created with type " + type << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &animal)
{
	_type = animal._type;
	std::cout << "WrongAnimal created with type " + _type + " by copy" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &animal)
{
	_type = animal._type;
	std::cout << "WrongAnimal created with type " + _type + " by assignment" << std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal type " + _type + " died" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return _type;
}

void	WrongAnimal::setType(std::string type)
{
	_type = type;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal default sound for type " + _type << std::endl;
}
