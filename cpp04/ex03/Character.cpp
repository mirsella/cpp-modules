/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 15:04:40 by lgillard          #+#    #+#             */
/*   Updated: 2023/04/05 16:27:51 by lgillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character()
{
	_name = "default name";
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(const std::string name)
{
	_name = name;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(const Character &character)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	*this = character;
}

Character &Character::operator=(const Character& rhs)
{
	if (this == &rhs)
		return *this;
	_name = rhs._name;
	for (size_t i = 0; i < 4; i++) {
		if (_inventory[i])
			delete _inventory[i];
		if (rhs._inventory[i])
			_inventory[i] = rhs._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
	return *this;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete _inventory[i];
}

const std::string&	Character::getName() const
{
	return _name;
}

void	Character::unequip(int idx)
{
	_inventory[idx % 4] = NULL;
}

void	Character::equip(AMateria* m)
{
	for (size_t i = 0; i < 4; i++) {
		if (!_inventory[i]) {
			_inventory[i] = m;
			return;
		}
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (_inventory[idx % 4])
	{
		std::cout << _name + ":";
		_inventory[idx % 4]->use(target);
	}
}
