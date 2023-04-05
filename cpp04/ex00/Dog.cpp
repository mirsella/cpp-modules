/* ************************************************************************** */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 09:46:24 by lgillard          #+#    #+#             */
/*   Updated: 2023/04/05 10:12:24 by lgillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog()
{
	_type = "Dog";
	std::cout << "Dog created" << std::endl;
}

Dog::Dog(const Dog &)
{
	_type = "Dog";
	std::cout << "Dog created from copy" << std::endl;
}

Dog &Dog::operator=(const Dog &)
{
	_type = "Dog";
	std::cout << "Dog created from assignment" << std::endl;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog died" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Ouaf! Ouaf!" << std::endl;
}
