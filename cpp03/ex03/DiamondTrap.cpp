/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 16:10:49 by lgillard          #+#    #+#             */
/*   Updated: 2023/04/03 19:12:11 by lgillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap()
{
	_name = "DefaultDiamond";
	ClapTrap::_name = _name + "_clap_name";
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap " << _name << " created !" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string name)
{
	_name = name;
	ClapTrap::_name = _name + "_clap_name";
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap " << _name << " created !" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondtrap)
{
	std::cout << "copying DiamondTrap " + diamondtrap._name << std::endl;
	*this = diamondtrap;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &diamondtrap)
{
	std::cout << "assigning DiamondTrap " + diamondtrap._name << std::endl;
	ClapTrap::_name = diamondtrap.ClapTrap::_name;
	_name = diamondtrap._name;
	_hitPoints = diamondtrap._hitPoints;
	_energyPoints = diamondtrap._energyPoints;
	_attackDamage = diamondtrap._attackDamage;
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " + _name + " is dying !" << std::endl;
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "whoAmI: " + _name + " and it's ClapTrap name: " + ClapTrap::_name  << std::endl;
}
