/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 09:46:24 by lgillard          #+#    #+#             */
/*   Updated: 2023/04/05 10:54:53 by lgillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat()
{
	_type = "WrongCat";
	std::cout << "WrongCat created" << std::endl;
}

WrongCat::WrongCat(const WrongCat &)
{
	_type = "WrongCat";
	std::cout << "WrongCat created from copy" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &)
{
	_type = "WrongCat";
	std::cout << "WrongCat created from assignment" << std::endl;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat died" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Wrong Moew, Wrong Moew" << std::endl;
}
