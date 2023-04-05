/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 14:56:26 by lgillard          #+#    #+#             */
/*   Updated: 2023/04/05 16:19:14 by lgillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

Ice::Ice(): AMateria("ice")
{
	_type = "ice";
}

Ice::Ice(const Ice& ice): AMateria("ice")
{
	*this = ice;
}

Ice	&Ice::operator=(const Ice&)
{
	_type = "ice";
	return *this;
}

Ice::~Ice() {}

AMateria*	Ice::clone() const
{
	return new Ice();
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
