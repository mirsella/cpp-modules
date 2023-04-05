/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 14:00:51 by lgillard          #+#    #+#             */
/*   Updated: 2023/04/05 15:57:55 by mirsella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria(const std::string& type)
{
	_type = type;
}

AMateria::AMateria(const AMateria& src)
{
	*this = src;
}

AMateria &AMateria::operator=(const AMateria& rhs)
{
	_type = rhs._type;
	return (*this);
}

AMateria::~AMateria()
{
}

const std::string&	AMateria::getType() const
{
	return _type;
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "i don't know how to use a \"" + _type + "\" on " + target.getName() + " !"<< std::endl;
}
