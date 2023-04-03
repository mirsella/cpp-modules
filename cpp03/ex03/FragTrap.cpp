/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 16:10:49 by lgillard          #+#    #+#             */
/*   Updated: 2023/04/03 18:26:05 by mirsella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap()
{
	_name = "DefaultFrag";
	std::cout << "FragTrap " << _name << " created !" << std::endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(const std::string name)
{
	std::cout << "FragTrap " << name << " created !" << std::endl;
	_name = name;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &fragtrap)
{
	std::cout << "copying FragTrap " + fragtrap._name << std::endl;
	_name = fragtrap._name;
	_hitPoints = fragtrap._hitPoints;
	_energyPoints = fragtrap._energyPoints;
	_attackDamage = fragtrap._attackDamage;
}

FragTrap &FragTrap::operator=(const FragTrap &fragtrap)
{
	std::cout << "assigning FragTrap " + fragtrap._name << std::endl;
	_name = fragtrap._name;
	_hitPoints = fragtrap._hitPoints;
	_energyPoints = fragtrap._energyPoints;
	_attackDamage = fragtrap._attackDamage;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " + _name + " is dying !" << std::endl;
}

void FragTrap::highFivesGuys()
{
	if (_hitPoints <= 0 || _energyPoints <= 0)
		return ;
	std::cout << "FragTrap " + _name + " want to high fives !!" << std::endl;
}
