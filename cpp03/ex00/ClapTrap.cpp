/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillard <mirsella@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 16:10:49 by lgillard          #+#    #+#             */
/*   Updated: 2023/04/03 17:16:54 by lgillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(const std::string name): _name(name)
{
	std::cout << "ClapTrap " << name << " created !" << std::endl;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap)
{
	std::cout << "copying ClapTrap " + claptrap._name << std::endl;
	_name = claptrap._name;
	_hitPoints = claptrap._hitPoints;
	_energyPoints = claptrap._energyPoints;
	_attackDamage = claptrap._attackDamage;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &claptrap)
{
	std::cout << "assigning ClapTrap " + claptrap._name << std::endl;
	_name = claptrap._name;
	_hitPoints = claptrap._hitPoints;
	_energyPoints = claptrap._energyPoints;
	_attackDamage = claptrap._attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " + _name + " is dying !" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (_hitPoints <= 0 || _energyPoints <= 0)
		return ;
	std::cout << "ClapTrap " + _name + " attacks " + target + ", causing " << _attackDamage << " points of damage!" << std::endl;
	_energyPoints--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " + _name + " took " << amount << " damage!" << std::endl;
	_hitPoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " + _name + " healed for " << amount << " points!" << std::endl;
	_hitPoints += amount;
	_energyPoints--;
}

int	ClapTrap::getHitPoints() const
{
	return _hitPoints;
}
