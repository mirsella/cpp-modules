/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 09:46:24 by lgillard          #+#    #+#             */
/*   Updated: 2023/04/05 11:53:50 by lgillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat()
{
	_type = "Cat";
	std::cout << "Cat created" << std::endl;
}

Cat::Cat(const Cat &cat)
{
	*this = cat;
	std::cout << "Cat created from copy" << std::endl;
}

Cat &Cat::operator=(const Cat &cat)
{
	if (this == &cat)
		return *this;
	if (this->_brain)
		delete _brain;
	_type = "Cat";
	_brain = new Brain();
	*_brain = *cat._brain;
	std::cout << "Dog copied from assignment" << std::endl;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat died" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Moew, Moew" << std::endl;
}

Brain*	Cat::getBrain()
{
	return _brain;
}