/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 09:46:24 by lgillard          #+#    #+#             */
/*   Updated: 2023/04/05 19:18:27 by lgillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog()
{
	_type = "Dog";
	_brain = new Brain();
	if (!_brain)
		std::cout << "failed to allocate Brain" << std::endl;
	std::cout << "Dog created" << std::endl;
}

Dog::Dog(const Dog &dog)
{
	this->_brain = 0;
	*this = dog;
	std::cout << "Dog created from copy" << std::endl;
}

Dog &Dog::operator=(const Dog &dog)
{
	if (this == &dog)
		return *this;
	if (this->_brain)
		delete _brain;
	_type = "Dog";
	_brain = new Brain();
	*_brain = *dog._brain;
	std::cout << "Dog copied from assignment" << std::endl;
	return *this;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog died" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Ouaf! Ouaf!" << std::endl;
}

Brain*	Dog::getBrain() const
{
	return _brain;
}
