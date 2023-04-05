/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 09:46:24 by lgillard          #+#    #+#             */
/*   Updated: 2023/04/05 10:14:34 by lgillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal()
{
	_type = "Default Animal";
	std::cout << "Animal created with default type" << std::endl;
}

Animal::Animal(std::string type)
{
	_type = type;
	std::cout << "Animal created with type " + type << std::endl;
}

Animal::Animal(const Animal &animal)
{
	_type = animal._type;
	std::cout << "Animal created with type " + _type + " by copy" << std::endl;
}

Animal &Animal::operator=(const Animal &animal)
{
	_type = animal._type;
	std::cout << "Animal created with type " + _type + " by assignment" << std::endl;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal type " + _type + " died" << std::endl;
}

std::string Animal::getType() const
{
	return _type;
}

void	Animal::setType(std::string type)
{
	_type = type;
}

void	Animal::makeSound() const
{
	std::cout << "Animal default sound for type " + _type << std::endl;
}
