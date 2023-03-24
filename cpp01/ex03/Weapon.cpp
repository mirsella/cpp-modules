/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 13:50:38 by lgillard          #+#    #+#             */
/*   Updated: 2023/03/24 14:38:21 by lgillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	_type = type;
}

std::string Weapon::getType()
{
	return _type;
}

void	Weapon::setType(std::string name)
{
	_type = name;
}
