/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 14:56:26 by lgillard          #+#    #+#             */
/*   Updated: 2023/04/05 15:58:10 by lgillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

Cure::Cure(): AMateria("cure")
{
	_type = "cure";
}

Cure::Cure(const Cure& cure): AMateria("cure")
{
	*this = cure;
}

Cure	&Cure::operator=(const Cure&)
{
	_type = "cure";
	return *this;
}

Cure::~Cure() {}

AMateria*	Cure::clone() const
{
	return new Cure();
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
