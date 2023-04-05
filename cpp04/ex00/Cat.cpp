/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 09:46:24 by lgillard          #+#    #+#             */
/*   Updated: 2023/04/05 10:18:41 by lgillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat()
{
	_type = "Cat";
	std::cout << "Cat created" << std::endl;
}

Cat::Cat(const Cat &)
{
	_type = "Cat";
	std::cout << "Cat created from copy" << std::endl;
}

Cat &Cat::operator=(const Cat &)
{
	_type = "Cat";
	std::cout << "Cat created from assignment" << std::endl;
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
