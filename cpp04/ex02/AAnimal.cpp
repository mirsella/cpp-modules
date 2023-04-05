/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 09:46:24 by lgillard          #+#    #+#             */
/*   Updated: 2023/04/05 10:14:34 by lgillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal()
{
	_type = "Default AAnimal";
	std::cout << "AAnimal created with default type" << std::endl;
}

AAnimal::AAnimal(std::string type)
{
	_type = type;
	std::cout << "AAnimal created with type " + type << std::endl;
}

AAnimal::AAnimal(const AAnimal &animal)
{
	_type = animal._type;
	std::cout << "AAnimal created with type " + _type + " by copy" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &animal)
{
	_type = animal._type;
	std::cout << "AAnimal created with type " + _type + " by assignment" << std::endl;
	return *this;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal type " + _type + " died" << std::endl;
}

std::string AAnimal::getType() const
{
	return _type;
}

void	AAnimal::setType(std::string type)
{
	_type = type;
}

void	AAnimal::makeSound() const
{
	std::cout << "AAnimal default sound for type " + _type << std::endl;
}
